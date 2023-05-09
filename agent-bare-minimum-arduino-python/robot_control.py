from time import sleep # library to make code wait
import serial # import the library for working with Serial Ports

# Find out the name of a port 
# Windows: 
#    Look for a new COM port, like "Arduino Uno (COM3)"
#
# Mac: 
#    ls /dev/*   
# will be something like /dev/tty.usbmodem* or /dev/tty.usbserial*
#
# Linux:
#    ls /dev/tty*
# will be something like /dev/ttyUSB* or /dev/ttyACM*
serial_name = 'COM7' 

# The speed of communication
serial_baud = 115200

with serial.Serial(serial_name, serial_baud) as myRobot:
    for i in range (0, 10):
        myRobot.write(b'j') # single letter j that representing a particular command
        sleep(2.01) # waits for 2.01 seconds
        myRobot.write(b'X') # single letter X that represents some another command
        sleep(3.4) # waits for 3.4s