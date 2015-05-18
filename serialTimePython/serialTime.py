# Show time since start
from serial import Serial
import sys

path = "/dev/cu.usbmodem1411"

serial_port = Serial(port=path, baudrate=9600)

print("Time program with Arduino by Serial port\nType --help if you need.")

while True:
    str = raw_input(">>");
    if str == "quit()":
        print("GoodBye.")
        break

    #print(str)
    if str == "getTime":
        serial_port.write("t")
        strEcho = serial_port.readline()
        print(strEcho)

    if str == "--help":
        print("'getTime' to get time since Arduino is started\n'quit()' to exit")
