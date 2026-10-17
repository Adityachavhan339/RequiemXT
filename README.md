# RequiemXT 🎮
RequiemXT is Custom Wired USB Controller.

The Parts I Am Using:

- Waveshare RP2040-Zero Raspberry Pi MCU With Pre Soldered Header
- USB-C wired connection
- Electronic Spices 6 X 6 X 5mm Blue Color Touch Transient Horn Type Push Button Switch Pack of 20pcs
- Jumper Wire Female From Female (40 pcs)
- Robocraze PS2 Joystick Module Dual Axis Analog Sensor Push Button Switch
- Custom 2-Layer Controller Carrier Board
- #All Parts Link With Prices Is Available In BOM.csv and md.# 

Schematic Image:
<img width="1920" height="1031" alt="Schematic" src="https://github.com/user-attachments/assets/f24a3eb4-48e3-418a-8165-e570ccd9fd2a" />


PCB Image:
<img width="1914" height="1030" alt="PCB6" src="https://github.com/user-attachments/assets/40fb700c-9e4c-4bd1-9da7-4092db306ff9" />

#Why I Made It
So It started Because I Hate Analog Triggers , Vibration Motors or Any Unnecessary Bluetooth Battery Type Things ( And I Couldn't Find Good Idea For A Project For Half Life 😓)

## HOW THIS WAS MADE
The schematic and PCB were made in KiCad.
1. First, I added the RP2040 to KiCad since it isn't included in the default libraries (the RP2040 ZIP file is available in the PCB design files directory).
2. I added all the buttons. Because there are no triggers or bumpers, the button count increased to 14 instead of the standard 12.
3. The PCB was routed using the Freerouting plugin in KiCad.

##FIRMWARE

I Never Have Wrote Firmware nor anything in C so still working on it. Though I Will Upload A Compatibly Opensource Firmware for anyone who doesn't want to use what i will write 😅( Don't Use it i don't even know what i am going to do)

## AI DISCLOSURE
AI Didn't Made It, I Made It.
AI Was Only Used For Understanding How KiCad Works 
