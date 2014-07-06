glove-arduino
=============
author: dunchen


2014/7/2

the code for the arduino embeded on the glove

this code needs to be used together with the code in the repository glove in order to get the interaction between the user and the computer display

###what's the arduino chip task
1: give power to the red LED, which will be the detect center of the camera. this would provide the two dimensional location of the hand.
2: drive the Ultrasonic Range Finder, which would give the distance between the hand and the screen. here we get the third dimensioanl location of the hand.
3: transmit all those data through serial port to the computer for the change of the display on the screen

###equipments connected with the arduino nano chip:
1: one Red LED connected to the pin 2 of arduino chip
2: one Ultrasonic Range Finder, RB URF02, in mode 1
              the input port is connected to the pin 10 of arduino chip


3: the arduino chip is connected to the computer with the serial port, which support most of the wireless data tansmision equipment without any change with the code.

###some details of the serial port setting
1: frequency 9600Hz
2: read and write mode: RAW mode (without any change on the data transmitted and all the data is transmitted in the form of char)


//yeti comes down from the jokul~~

