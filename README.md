# SAE_GUI
# Options for GUI creation
 1. [Kivy](https://kivy.org/#home) This software seems to be the most popular for creating UIs.
 2. [Pygame](https://github.com/pygame/pygame) Game creation software.
 3. pyqt5 is a professional looking option.
# Design Decisions
In the end we decided on using QT Creator to develop our graphics used in our EV dashboard.
A few factors contributed to our decision to use QT:
 1. QT Creator has the option to use C++ for the backend. This was important as we were already experienced with C++ and C languages.
 2. QT Creator had many tutorials and guides online which accelerated our designs and helped us meet our deadlines.
 3. QT Creator was a full package. Many of the tutorials involved using JavaScript for the backend and chromium for the front. This was   not ideal as we were running short on time and were unexperienced at the time with the tools that would be used. This option would be considered in the future.
 4. The one of the tools we discovered included a SocketCAN library which was written in c++. With this source code, we were able to reengineer a tool of our own for testing and sniffing called "cansee". With the use of this tool, we were able to learn the syntax behind SocketCAN and develop a backend for the dashboard in C++.
 # Changes for the future
 In the future, we would like to:
 1. Add some custom graphics to our dashboard. Given our short history with QT, we were unable to create an elaborate dashboard. The resulting dashboard featured only the basic QT widgets such as loading bars and seven segment LCD numbers. Our ideal dashboard would contain more circular speedometers. 
 2. Develop in JavaScript or Python in order to utilize more widely used graphical tools.
 3. Clean up the display and optimize the design to display data in a more useful manner.
# How to use cansee

Follow the instructions found on [here](http://skpang.co.uk/blog/archives/1165) to install PiCAN for the raspberry pi.

"wget http://skpang.co.uk/dl/cantest.tar"

*tar xf cantest.tar*

cd into linux-can-utils and move cansee.c into the directory.

Modify make file and build the project.

Execute the program using *./cansee*

Program should begin finding and displaying CAN frames as they appear.