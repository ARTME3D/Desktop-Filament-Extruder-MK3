MK2.5 - Firmware for Desktop Filament Extruder MK2.5 by ARTME 3D
==========================
This software has a GPL license.
Please do not use this code in products (extruders, 3D printers, CNC etc) that are closed source or are crippled by a patent.
https://gnu.org/licenses/gpl.html

Quick Information
===================
The firmware is currently designed to support the MKS Gen L with Smart LCD 2004. Menu language is in english.
This firmware is a version of the Marlin-Mackerel from Filip Mulier (https://github.com/filipmu/Marlin-Mackerel)
This firmware was updated to control a "Desktop Filament Extruder by ARTME 3D" in the versions MK1, MK2 and MK2.5. It can control the extruder motor, puller motor, Extruder heater (PID) with thermistor, winder motor, filament cooling fan and has input for a filament sensor. The processes and menus have been adapted to control a filament extruder. This code is currently in design, development, and testing and so might not be ready for casual users.
This firmware is based on Marlin 3D Printer Firmware but also has many original parts.

Good to know
===================
If you want to use the MKS GEN L V2 instead of the MKS GEN L V1 you need to change the FILWIDTH_PIN in the file pins.h. Set it from 5 to 4. Then you need to connect the optical sensor: S to A4, G to GND, V to +5

If you want to use the MK2.5 Firmware in the Original Desktop Extruder MK1, you need to change the microstepping of the stepper drivers on the ramps board to 1/2 step.

Documentation:
=========

All information about the installation and operation of the extruder can be found in the documentation on my website: https://www.artme-3d.de

M Codes
=======

*  M303 - PID relay autotune S<temperature> sets the target temperature. (default target temperature = 150C)








