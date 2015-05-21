# Arduioui
# Console to send data to Arduino with Serial

from serial import Serial
import sys

path = "/dev/cu.usbmodem1411"

serial_port = Serial(port=path, baudrate=sys.argv[1])

print("Echo program with Arduino by Serial port. Type exit() to quit")

while True:
    str = raw_input(">");
    if str == "exit()":
        print("GoodBye.")
        break

    serial_port.write(str)
    strEcho = serial_port.readline()
    print("Echo : " + strEcho)
