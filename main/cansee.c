#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#include <net/if.h>
#include <sys/ioctl.h>

#include <linux/can.h>
#include <linux/can/raw.h>

#include "lib.h"
//NOTE:
//Open another terminal and type the following:
//sudo modprobe vcan 
//sudo ip link add dev vcan0 type vcan
//sudo ip link set up vcan0 
//./cangen vcan0
//This will provide you with a virtual can device which will be read by this code.
int main(int argc, char **argv)
{
        int s; /* can raw socket */ 
        int nbytes;
        struct sockaddr_can addr;
        struct can_frame frame;
        struct ifreq ifr;
	unsigned int spd = 0;
        unsigned int temp = 0;
	unsigned int battery = 0;
unsigned short v0 = 0;

	int i;


        fprintf(stderr,"CAN testing\n");
        /* open socket */
        if ((s = socket(PF_CAN, SOCK_RAW, CAN_RAW)) < 0) {
                perror("socket");
                return 1;
        }
        addr.can_family = AF_CAN;
	//vcan0 is the virtual can device that we are receiving data from
	//change to the name of whatever can device the car will be using
        strcpy(ifr.ifr_name, "vcan0");
        if (ioctl(s, SIOCGIFINDEX, &ifr) < 0) 
                perror("SIOCGIFINDEX");
        addr.can_ifindex = ifr.ifr_ifindex;

	//this is supposed to turn off reading in the original code
	//do not turn off for this program
	//setsockopt(s, SOL_CAN_RAW, CAN_RAW_FILTER, NULL, 0);
        if (bind(s, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
                perror("bind");
                return 1;
        }
	//should be while loop but didn't want to change much
        /* receive frame */
        for(i=0;i<100;i)
        {	
		spd = 0;
		temp = 0;
		battery = 0;
		//Checks if read went wrong
		//Also does the reading
                if ((nbytes = read(s, &frame, sizeof(frame))) != sizeof(frame)) {
                        perror("read");
                        return 1;
                }

                //new testing code
		//This code here is for extracting data from the read can frame
		//Use frame.data[<integer>] to get byte stored in that location in the frame
		//frame.can_dlc is used for retreiving  the data length I think
		//frame.can_id is used to get the ID of the frame that was read
		//In actual program, we will be checking the frame ID and using that data to determine our data(speed, temp, battery, etc)
		//This code is only here for prototyping with ./cangen vcan0 in a separate terminal
                int dlc = (frame.can_dlc > 8)? 8 : frame.can_dlc;
                fprintf(stdout, "ID:     %-3.3x \n", frame.can_id);
		if(dlc >= 1)
			spd = frame.data[0];
		if(dlc >= 2)
			temp = frame.data[1];
		if(dlc >= 3)
			battery = (frame.data[2] % 101);
		fprintf(stdout, "Speed:  %-3.3u mph\n", spd);
		fprintf(stdout, "Temp:   %-3.3u C\n", temp);
		fprintf(stdout, "Battery:%-3.3u %\n", battery);
		fprintf(stdout, "v0:     %x V\n", battery);

                fprintf(stdout, "\n");
                //end testing
                usleep(1000); /* Delay before next loop */
        }

        close(s);
        return 0;

}

