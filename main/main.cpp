#include "mainwindow.h"
#include <QApplication>
#include <QEventLoop>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <linux/can.h>
#include <linux/can/raw.h>

//#include "linux-can-utils/lib.h"

/**
 * struct can_frame - basic CAN frame structure
 * @can_id:  CAN ID of the frame and CAN_*_FLAG flags, see canid_t definition
 * @can_dlc: frame payload length in byte (0 .. 8) aka data length code
 *           N.B. the DLC field from ISO 11898-1 Chapter 8.4.2.3 has a 1:1
 *           mapping of the 'data length code' to the real payload length
 * @__pad:   padding
 * @__res0:  reserved / padding
 * @__res1:  reserved / padding
 * @data:    CAN frame payload (up to 8 byte)
 */
unsigned short batDRAW;
unsigned short batREGEN;
unsigned short bat;
int main(int argc, char *argv[])
{
    int s; /* can raw socket */
    int nbytes;
    struct sockaddr_can addr;
    struct can_frame frame;
    struct ifreq ifr;
    unsigned char fault, state;
    unsigned short v0, v1, spd, m1temp, inv1temp, m1curr, battery;
    fprintf(stderr,"CAN testing\n");
    /* open socket */
    if ((s = socket(PF_CAN, SOCK_RAW, CAN_RAW)) < 0) {
            perror("socket");
            return 1;
    }
    addr.can_family = AF_CAN;
    strcpy(ifr.ifr_name, "can0");
    if (ioctl(s, SIOCGIFINDEX, &ifr) < 0){
            perror("SIOCGIFINDEX");
            //return 1;
    }
    addr.can_ifindex = ifr.ifr_ifindex;
    if (bind(s, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
            perror("bind");
           // return 1;
    }
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    batDRAW = 0;
    batREGEN = 0;
    bat = 0;
     
    while(1){

        if ((nbytes = read(s, &frame, sizeof(frame))) != sizeof(frame)) {
                 perror("read");
                 return 1;
        }

        w.run(v0, v1, spd, m1temp, inv1temp, m1curr, battery, fault);
        QApplication::processEvents();
        int dlc = (frame.can_dlc > 8)? 8 : frame.can_dlc;

        unsigned short id = frame.can_id;
        unsigned short pdo = frame.can_id;
        pdo = pdo >> 4;
        switch(pdo){
        case 0x0018:
/*            if (id == 0x018A) {
                fprintf(stdout, "Reading from ID:     %x \n", frame.can_id);
                state = frame.data[0];
                fault = frame.data[1];
                v0 = (frame.data[3]  << 8) + frame.data[2];

                battery = (frame.data[2] % 101);
            } else */
                if (id == 0x018B) {
                    fprintf(stdout, "Reading from ID:     %x \n", frame.can_id);
                    spd = 0;
                    state = frame.data[0];
                    fault = frame.data[1];
                    battery = (frame.data[7]  << 8) + frame.data[6];
                    v1 = (frame.data[3]  << 8) + frame.data[2];
                    //battery = v1;
                    //battery = (frame.data[2] % 101);
                    fprintf(stdout, "v1 curr:     %d  %d\n ", v1,m1curr);
                }
            break;
        case 0x28:
            break;
        case 0x38:
            break;
        case 0x48:
            fprintf(stdout, "Reading from ID:     %x \n", frame.can_id);
            m1temp = frame.data[4] - 40;
            inv1temp = frame.data[5] - 40;
            break;
        case 0x6A:
            fprintf(stdout, "Reading from ID:     %x \n", frame.can_id);
            m1curr = frame.data[6];
            break;
        }

    }
    return a.exec();
}
