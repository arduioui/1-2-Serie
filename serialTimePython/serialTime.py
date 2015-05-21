# Arduioui
# Send command to Arduino to get time since program started

from serial import Serial
import sys

path = "/dev/cu.usbmodem1411"

serial_port = Serial(port=path, baudrate=9600)

print("Time program with Arduino by Serial port.\ntime() get time since program on Arduino started\nexit() to quit")

while True:
    str = raw_input(">");
    if str == "exit()":
        print("GoodBye.")
        break

    if str == "time()":
        serial_port.write("t")
        strEcho = serial_port.readline()
        print(strEcho)
