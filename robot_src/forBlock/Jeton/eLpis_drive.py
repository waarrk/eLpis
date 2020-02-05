#! /usr/bin/python
import atexit
import subprocess
import os
import sys
import time
import Jetson.GPIO as GPIO

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)
GPIO.setup(38, GPIO.IN)

def all_done():
    GPIO.cleanup()

atexit.register(all_done)

if __name__ == '__main__':
    buttonStatus = False
    while True:
        if GPIO.input(38)==True:
            if buttonStatus==False:
		subprocess.Popen('bash /home/jetson/catkin_ws/devel/setup.bash',shell=True)
                process = subprocess.Popen('roslaunch elpis_drive eLpis_drive.launch',shell=True)
                time.sleep(0.1)
                buttonStatus=True
        else:
            if buttonStatus==True:
                print("none")
                subprocess.Popen('rosnode kill --all',shell=True)
                time.sleep(0.1)
                buttonStatus=False
