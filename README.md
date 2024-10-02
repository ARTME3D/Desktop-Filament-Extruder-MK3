MK3 - Firmware for Desktop Filament Extruder MK3 by ARTME 3D
==========================
This software has a GPL license.
Please do not use this code in products (extruders, 3D printers, CNC etc) that are closed source or are crippled by a patent.
https://gnu.org/licenses/gpl.html

Quick Information
===================
The firmware is currently designed to support the MKS Gen L V2.1 with Smart LCD 2004.
This firmware is a version of the Marlin-Mackerel from Filip Mulier (https://github.com/filipmu/Marlin-Mackerel)
This firmware was updated to control a "Desktop Filament Extruder MK3 by ARTME 3D". It can control the extruder motor, puller motor, Extruder heater (PID) with thermistor, winder motor, filament cooling fan and has input for a filament sensor. The processes and menus have been adapted to control a filament extruder. This code is currently in design, development, and testing and so might not be ready for casual users. This firmware is based on Marlin 3D Printer Firmware but also has many original parts.

How to change the languages:
===================
If you do not make any changes to the firmware, it will be displayed in English. To change the language, open the “languages.h” file. There, change the number at #define LANGUAGE_CHOICE. Numbers in the fields result in the following languages:
1 English
2 German
3 French
4 Polish
5 Spanish
6 Italian
7 Portuguese
8 Czech (not availible yet)
9 Romanian
10 Dutch
11 Hungarian
12 Indonesian
13 Turkish

If you would like to support me with the translation into other languages, or if you find errors in the translation, you can contact me here: https://www.artme-3d.de/contact/

Good to know
===================
If you want to use the MKS GEN L V1 instead of the MKS GEN L V2.1 you need to change the FILWIDTH_PIN in the file pins.h. Set it from 4 to 5. Then you need to connect the optical sensor: S to A5, G to GND, V to +5

You can not use the MK3 Firmware in the Versions MK1, MK2 or MK2.5 without changing some things. (24V radial fan under the nozzle, Fan outputs, microstepping and the direction of the extruder motor).

Documentation:
=========

All information about the installation and operation of the extruder can be found in the documentation on my website: https://www.artme-3d.de

M Codes
=======

*  M303 - PID relay autotune S<temperature> sets the target temperature. (default target temperature = 190C)








