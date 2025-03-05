MK3 and MK3S - Firmware for Desktop Filament Extruders by ARTME 3D®
==========================
This software has a GPL license.
Please do not use this code in products (extruders, 3D printers, CNC etc) that are closed source or are crippled by a patent.
https://gnu.org/licenses/gpl.html

Quick Information
===================
The firmware is currently designed to support the MKS Gen L V2.1 and MKS Gen L V1.0 with Smart LCD 2004.
This firmware is a version of the Marlin-Mackerel from Filip Mulier (https://github.com/filipmu/Marlin-Mackerel)
This firmware was updated to control a "Desktop Filament Extruder MK3 and MK3S by ARTME 3D®". It can control the extruder motor, puller motor, Extruder heater (PID) with thermistor, winder motor, filament cooling fan and has input for a filament sensor. The processes and menus have been adapted to control a filament extruder. This code is currently in design, development, and testing and so might not be ready for casual users. This firmware is based on Marlin 3D Printer Firmware but also has many original parts.

How to install the firmware:
=========
Choose the main branch for the MK3 Firmware and choose the MK3S branch for the MK3S Firmware.
Download the firmware by clicking on “Code” and then on “download ZIP” on the Github page. You will then find the file in your download folder.
To unzip the file, right-click on the file and select “Unzip” or “Extract all”.
Download the Arduino IDE software from https://www.arduino.cc/en/software.
Install Arduino IDE on your PC.
Open the firmware file. Then open the MK3 folder and double-click on the “MK3.ino” file.
Arduino IDE should then open. If not, right-click on the file and select “open with”. Then select Arduino IDE.
Connect the extruder's MKS Gen L board to the PC. Use a USB cable (USB-A to USB-B) to do this. You usually have such a cable left over from a scanner or inkjet printer. Make sure that the USB plugs are aligned correctly.
Close all other programs on your PC. Only the Arduino IDE should be open.
It may take a moment for the PC to recognize the board. If not, restart the PC or use a different USB port on the PC.
The extruder's power supply should be turned off. The extruder's display will start because it is powered via the USB cable.
Click on the “Tools” button in the top menu in the Arduino IDE and set the following parameters:
– Select “Select Board” at the top
– Enter “Arduino Mega or Mega 2560” in the search field and select it
– Select the board's USB port under “PORTS”
– Click “OK” to confirm
Now the upload can start. To do this, click on the arrow symbol (right arrow) under the top menu bar.
At some point, “upload complete” will appear as a message.
If an error message appears, it is usually a problem with the connection. Make sure that Windows has recognized the Arduino on the USB port. Possible solutions can be: - Check that the above settings are selected correctly.
Close all unnecessary programs.
Disconnect all USB devices from the PC and restart the PC, then connect only the Arduino.
Use a different USB port on the PC.
Use a different USB cable.
Use a different PC.
In rare cases, the board may also be defective (cheap clone).
If the upload is successful, disconnect the MKS board from the PC.
Restart the extruder using the power supply.
Overwrite the stored settings by clicking on Main Menu – Control – Restore failsafe.
Store the new settings: Main Menu – Control – Store memory.
Restart the extruder.
Done.

How to change the languages:
===================
When you purchase the ARTME 3D® kit, the firmware is already installed on the included MKS Gen L board in English. If you do not make any changes to the firmware, it will be displayed in English. To change the language, open the “languages.h” file. There, change the number at #define LANGUAGE_CHOICE. Numbers in the fields result in the following languages:
1 English
2 German
3 French
4 Polish
5 Spanish
6 Italian
7 Portuguese
8 Czech
9 Romanian
10 Dutch
11 Hungarian
12 Indonesian
13 Turkish

If you would like to support me with the translation into other languages, or if you find errors in the translation, you can contact me here: https://www.artme-3d.de/contact/

Good to know
===================
If you want to use the MKS GEN L V1 instead of the MKS GEN L V2.1 you need to change the FILWIDTH_PIN in the file pins.h. Set it from 4 to 5. Then you need to connect the optical sensor: S to A5, G to GND, V to +5
You can use MK3S Firmware also in the MK3 Extruder
You can not use the MK3 and MK3S Firmware in the Versions MK1, MK2 or MK2.5 without changing some things:
1. The fan under the nozzle needs to be 24V radial fan (5015). See assembly instructions for mounting.
2. microstepping of the tmc2208 drivers needs to be half step.
3. The direction of the extruder motor needss to be checked.

Documentation:
=========

All information about the installation and operation of the extruder can be found in the documentation on my website: https://www.artme-3d.de

M Codes
=======

*  M303 - PID relay autotune S<temperature> sets the target temperature. (default target temperature = 190C)








