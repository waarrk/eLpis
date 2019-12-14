# December 15
Witer : [waarrk](https://twitter.com/waarrk)

## install Teensy4.0 enviroment on Jetson nano

### How to
1.Please install ArduinoIDE for ARM64bit Linux on Jetson nano  
Jetson nano uses the Arm64bit version (AARCH64).  
https://www.arduino.cc/

2.Please install TeensyDuino Files for ARM64bit Linux on Jetson nano  
Jetson nano uses the Arm64bit version (AARCH64).  
In my environment, building TensyDuino1.48 failed. The following link 1.48Beta # 1 was successfully built.  
https://forum.pjrc.com/threads/57609-Teensyduino-1-48-Beta-1  
So I think it's better to download this at the moment (December 15, 2019)

3.Please make udev rules
~~~
vim 49-teensy.rules
~~~
Please enter this content.  
~~~
# UDEV Rules for Teensy boards, http://www.pjrc.com/teensy/
#
# The latest version of this file may be found at:
#   http://www.pjrc.com/teensy/49-teensy.rules
#
# This file must be placed at:
#
# /etc/udev/rules.d/49-teensy.rules    (preferred location)
#   or
# /lib/udev/rules.d/49-teensy.rules    (req'd on some broken systems)
#
# To install, type this command in a terminal:
#   sudo cp 49-teensy.rules /etc/udev/rules.d/49-teensy.rules
#
# After this file is installed, physically unplug and reconnect Teensy.
#
ATTRS{idVendor}=="16c0", ATTRS{idProduct}=="04[789B]?", ENV{ID_MM_DEVICE_IGNORE}="1", ENV{ID_MM_PORT_IGNORE}="1"
ATTRS{idVendor}=="16c0", ATTRS{idProduct}=="04[789A]?", ENV{MTP_NO_PROBE}="1"
SUBSYSTEMS=="usb", ATTRS{idVendor}=="16c0", ATTRS{idProduct}=="04[789ABCD]?", MODE:="0666"
KERNEL=="ttyACM*", ATTRS{idVendor}=="16c0", ATTRS{idProduct}=="04[789B]?", MODE:="0666"
#
# If you share your linux system with other users, or just don't like the
# idea of write permission for everybody, you can replace MODE:="0666" with
# OWNER:="yourusername" to create the device owned by you, or with
# GROUP:="somegroupname" and mange access using standard unix groups.
#
# ModemManager tends to interfere with USB Serial devices like Teensy.
# Problems manifest as the Arduino Serial Monitor missing some incoming
# data, and "Unable to open /dev/ttyACM0 for reboot request" when
# uploading.  If you experience these problems, disable or remove
# ModemManager from your system.  If you must use a modem, perhaps
# try disabling the "MM_FILTER_RULE_TTY_ACM_INTERFACE" ModemManager
# rule.  Changing ModemManager's filter policy from "strict" to "default"
# may also help.  But if you don't use a modem, completely removing
# the troublesome ModemManager is the most effective solution.
~~~
When finished, please enter this command.
~~~
sudo cp 49-teensy.rules /etc/udev/rules.d/
~~~

3.Please build TeensyDuino referring to this site  
https://www.pjrc.com/teensy/td_download.html

That's all thank you.
