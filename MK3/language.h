#ifndef LANGUAGE_H
#define LANGUAGE_H

// NOTE: IF YOU CHANGE THIS FILE / MERGE THIS FILE WITH CHANGES
//
//   ==> ALWAYS TRY TO COMPILE MARLIN WITH/WITHOUT "ULTIPANEL" / "ULTRALCD" / "SDSUPPORT" #define IN "Configuration.h" 
//   ==> ALSO TRY ALL AVAILABLE "LANGUAGE_CHOICE" OPTIONS

// Languages
// 1  English
// 2  German
// 3  French
// 4  Polish
// 5  Spanish
// 6  Italian
// 7  Portuguese
// 8  Czech (not availible yet)
// 9  Romanian
// 10 Dutch
// 11 Hungarian
// 12 Indonesia
// 13 Turkish

#ifndef LANGUAGE_CHOICE
	#define LANGUAGE_CHOICE 1  // Pick your language from the list above
#endif

#define PROTOCOL_VERSION "1.0"

#if MOTHERBOARD == 7 || MOTHERBOARD == 71 || MOTHERBOARD == 72
	#define MACHINE_NAME "Ultimaker"
	#define FIRMWARE_URL "http://firmware.ultimaker.com"
#elif MOTHERBOARD == 80
	#define MACHINE_NAME "Rumba"
	#define FIRMWARE_URL "https://github.com/ErikZalm/Marlin/"
#elif MOTHERBOARD == 77
	#define MACHINE_NAME "3Drag"
	#define FIRMWARE_URL "http://3dprint.elettronicain.it/"
#else
	#ifdef CUSTOM_MENDEL_NAME
		#define MACHINE_NAME CUSTOM_MENDEL_NAME
	#else
		#define MACHINE_NAME "ARTME 3D MK3   "
	#endif

// Default firmware set to Mendel
	#define FIRMWARE_URL "https://github.com/ErikZalm/Marlin/"
#endif


#ifndef MACHINE_UUID
   #define MACHINE_UUID "00000000-0000-0000-0000-000000000000"
#endif


#define STRINGIFY_(n) #n
#define STRINGIFY(n) STRINGIFY_(n)


// Common LCD messages
/* nothing here as of yet */

// Common serial messages
#define MSG_MARLIN "Mackerel"

#define SPLASH1 "      ARTME 3D      "
#define SPLASH2 "  Desktop Filament  "
#define SPLASH3 "    Extruder MK3  "


#if LANGUAGE_CHOICE == 1

// LCD Menu Messages MK3 English
// Please note these are limited to 17 characters!
  #define MSG_DISPLAY_SensROmax "Sensor Max" //MK3
#define MSG_DISPLAY_SensROmin "Sensor Min" //MK3
#define MSG_DISPLAY_Pcirc "Wheel circum" //MK3
#define MSG_DISPLAY_Factor2 "Factor 2" //MK3
#define MSG_DISPLAY_Factor1 "Factor 1" //MK3
#define MSG_DISPLAY_Meter "m" //MK3
#define MSG_DISPLAY_Length " L:" //MK3
#define MSG_DISPLAY_S "S:" //MK3
#define MSG_DISPLAY_AV "  Avg:" //MK3
#define MSG_DISPLAY_MinWidth "  Min:" //MK3
#define MSG_DISPLAY_MaxWidth "  Max:" //MK3
#define MSG_DISPLAY_rpm2 " rpm " //MK3
#define MSG_DISPLAY_COLD "Cold" //MK3
#define MSG_DISPLAY_OFF "Off " //MK3
#define MSG_DISPLAY_E "E:" //MK3
#define MSG_DISPLAY_rpm "rpm " //MK3
#define MSG_DISPLAY_Puller "P:" //MK3
#define MSG_SAFETY_COOLDOWN "Safety Cooldown" //MK3
#define MSG_EX_WARM_UP "Extruder Warming Up" //MK3
#define MSG_EX_COOL "Extruder Cooling" //MK3
#define MSG_AUTOT_SEQU "Autotune Sequence" //MK3
#define MSG_AUTOT_COMPL "Autotune Complete" //MK3
#define MSG_MIN_TEMP "MINTEMP" //MK3
#define MSG_MAX_TEMP "MAXTEMP" //MK3
#define MSG_thermal_runaway "Heating Error" //MK3
#define MSG_sensor_runout "Sensor Error" //MK3
#define WELCOME_MSG MACHINE_NAME "   " //MK3
#define MSG_MAIN "Main menu" //MK3
#define MSG_PREHEAT_ABS "Preheat" //MK3
#define MSG_PREHEAT_ABS_SETTINGS "Preheat Setting" //MK3
#define MSG_COOLDOWN "Cooldown" //MK3
#define MSG_MOVE_E "Extruder" //MK3
#define MSG_MOVE_P "P" //MK3
#define MSG_EXT_RPM "Extruder rpm" //MK3
#define MSG_NOZZLE "Nozzle" //MK3
#define MSG_HEATER "Temperature" //MK3
#define MSG_LENGTH_CUTOFF "L Cutoff" //MK3
#define MSG_FILAMENT "Sensor Pos" //MK3
#define MSG_WINDER_SPEED "Fan Speed" //MK3
#define MSG_WINDER_RPM_FACTOR "Winder RPM Factor" //MK3
#define MSG_PID_P "PID-P" //MK3
#define MSG_PID_I "PID-I" //MK3
#define MSG_PID_D "PID-D" //MK3
#define MSG_PID_C "PID-C" //MK3
#define MSG_AUTOTUNE "PID Autotune" //MK3
#define MSG_CONTROL "Control" //MK3
#define MSG_VE_JERK "Ve-jerk" //MK3
#define MSG_E "e" //MK3
#define MSG_WATCH "Start Screen" //MK3
#define MSG_STATS "Filament Statistics" //MK3
#define MSG_PREPARE "Settings" //MK3
#define MSG_TUNE "Settings" //MK3
#define MSG_ESTEPS "Esteps/rev/100" //MK3
#define MSG_PSTEPS "Psteps/mm" //MK3
#define MSG_A_RETRACT "Motor Acc" //MK3
#define MSG_STORE_EPROM "Save Settings" //MK3
#define MSG_LOAD_EPROM "Load Settings" //MK3
#define MSG_RESTORE_FAILSAFE "Reset Settings" //MK3
#define MSG_TEMPERATURE "Temperature" //MK3
#define MSG_MOTION "Motion" //MK3
#define MSG_FILAMENT_PID "Pulling Unit" //MK3
#define MSG_PAUSE_EXTRUDER "STOP Extruder" //MK3
#define MSG_RESUME_EXTRUDER "START Extruder" //MK3
#define MSG_AUTO_EXTRUDER "Automatic Pulling" //MK3
#define MSG_MAN_EXTRUDER "Manually Pulling" //MK3
#define MSG_CLEAR_STATS "Clear Statistics" //MK3
#define MSG_ENABLE_STATS "Enable Statistics" //MK3
#define MSG_DISABLE_STATS "Pause Statistics" //MK3
#define MSG_VMAX "Vmax " //MK3
#define MSG_EXTRUDER_RUNNING "Extruder running" //MK3
#define MSG_EXTRUDER_STOPPED "Extruder stopped" //MK3
#define MSG_EXTRUDE_COMPLETE "Extrusion complete" //MK3
  // LCD Menu Messages ferz
  #define MSG_SD_INSERTED "Card inserted"           
	#define MSG_SD_REMOVED "Card removed"
	#define MSG_AUTOSTART "Autostart"
	#define MSG_DISABLE_STEPPERS "Disable steppers"
	#define MSG_AUTO_HOME "Auto home"
	#define MSG_SET_ORIGIN "Set origin"
	#define MSG_PREHEAT_PLA "Preheat PLA"
	#define MSG_PREHEAT_PLA0 "Preheat PLA 1"
	#define MSG_PREHEAT_PLA1 "Preheat PLA 2"
	#define MSG_PREHEAT_PLA2 "Preheat PLA 3"
	#define MSG_PREHEAT_PLA012 "Preheat PLA All"
	#define MSG_PREHEAT_PLA_BEDONLY "Preheat PLA Bed"
	#define MSG_PREHEAT_PLA_SETTINGS "Preheat PLA conf"
	#define MSG_PREHEAT_ABS0 "Preheat ABS 1"
	#define MSG_PREHEAT_ABS1 "Preheat ABS 2"
	#define MSG_PREHEAT_ABS2 "Preheat ABS 3"
	#define MSG_PREHEAT_ABS012 "Preheat ABS All"
	#define MSG_PREHEAT_ABS_BEDONLY "Preheat ABS Bed"
	#define MSG_SWITCH_PS_ON "Switch power on"
	#define MSG_SWITCH_PS_OFF "Switch power off"
	#define MSG_EXTRUDE "Extrude"
	#define MSG_RETRACT "Retract"
	#define MSG_MOVE_AXIS "Move axis"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED   "Puller mm/s"
	#define MSG_NOZZLE1 "Nozzle2"
	#define MSG_NOZZLE2 "Nozzle3"
	#define MSG_BED "Bed"
	#define MSG_FLOW "Flow"
	#define MSG_FLOW0 "Flow 0"
	#define MSG_FLOW1 "Flow 1"
	#define MSG_FLOW2 "Flow 2"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Fact"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_ACC  "Accel"
	#define MSG_VXY_JERK "Vxy-jerk" 
	#define MSG_VZ_JERK "Vz-jerk" 
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VTrav min"
	#define MSG_AMAX "Amax "
	#define MSG_XSTEPS "Xsteps/mm"
	#define MSG_YSTEPS "Ysteps/mm"
	#define MSG_ZSTEPS "Zsteps/mm"
	#define MSG_RECTRACT "Rectract"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_REFRESH "Refresh"
	#define MSG_PAUSE_PRINT "Pause print"
	#define MSG_RESUME_PRINT "Resume print"
	#define MSG_STOP_PRINT "Stop print"
	#define MSG_CARD_MENU "Print from SD"
	#define MSG_NO_CARD "No SD card"
	#define MSG_DWELL "Sleep..."
	#define MSG_USERWAIT "Wait for user..."
	#define MSG_RESUMING "Resuming print"
	#define MSG_NO_MOVE "No move."
	#define MSG_KILLED "KILLED. "
	#define MSG_STOPPED "STOPPED. "
	#define MSG_CONTROL_RETRACT  "Retract mm"
	#define MSG_CONTROL_RETRACTF "Retract  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Init. SD card"
	#define MSG_CNG_SDCARD "Change SD card"
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"

// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line: "
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line: "
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line: "
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Invalid extruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Invalid extruder "
	#define MSG_M221_INVALID_EXTRUDER "M221 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temperature"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done.       "
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Mackerel V1; Marlin mashup for Filament Extruders FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Count X: "
	#define MSG_ERR_KILLED "Printer halted. kill() called!"
	#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
	#define MSG_RESEND "Resend: "
	#define MSG_UNKNOWN_COMMAND "Unknown command: \""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Reporting endstop status"
	#define MSG_ENDSTOP_HIT "TRIGGERED"
	#define MSG_ENDSTOP_OPEN "open"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened: "
	#define MSG_SD_SIZE " Size: "
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir: "
	#define MSG_STEPPER_TOO_HIGH "Steprate too high: "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"

#endif


#if LANGUAGE_CHOICE == 2

// LCD Menu Messages MK3 German
// Please note these are limited to 17 characters!
  #define MSG_DISPLAY_SensROmax "Sensor Max" //MK3
#define MSG_DISPLAY_SensROmin "Sensor Min" //MK3
#define MSG_DISPLAY_Pcirc "Radumfang" //MK3
#define MSG_DISPLAY_Factor2 "Faktor 2" //MK3
#define MSG_DISPLAY_Factor1 "Faktor 1" //MK3
#define MSG_DISPLAY_Meter "m" //MK3
#define MSG_DISPLAY_Length " L:" //MK3
#define MSG_DISPLAY_S "S:" //MK3
#define MSG_DISPLAY_AV "  Dut:" //MK3
#define MSG_DISPLAY_MinWidth "  Min:" //MK3
#define MSG_DISPLAY_MaxWidth "  Max:" //MK3
#define MSG_DISPLAY_rpm2 " Upm " //MK3
#define MSG_DISPLAY_COLD "Kalt" //MK3
#define MSG_DISPLAY_OFF "Aus " //MK3
#define MSG_DISPLAY_E "E:" //MK3
#define MSG_DISPLAY_rpm "Upm " //MK3
#define MSG_DISPLAY_Puller "Z:" //MK3
#define MSG_SAFETY_COOLDOWN "Sicherheitsabkuehlung" //MK3
#define MSG_EX_WARM_UP "Extruder aufheizen" //MK3
#define MSG_EX_COOL "Extruder abkuehlen" //MK3
#define MSG_AUTOT_SEQU "Autotune Sequenz" //MK3
#define MSG_AUTOT_COMPL "Autotune Ende" //MK3
#define MSG_MIN_TEMP "MINTEMP" //MK3
#define MSG_MAX_TEMP "MAXTEMP" //MK3
#define MSG_thermal_runaway "Heizung Fehler" //MK3
#define MSG_sensor_runout "Sensor Fehler" //MK3
#define WELCOME_MSG MACHINE_NAME "   " //MK3
#define MSG_MAIN "Hauptmenue" //MK3
#define MSG_PREHEAT_ABS "Vorheizen" //MK3
#define MSG_PREHEAT_ABS_SETTINGS "Vorheizen Einst." //MK3
#define MSG_COOLDOWN "Abkuehlen" //MK3
#define MSG_MOVE_E "Extruder" //MK3
#define MSG_MOVE_P "Z" //MK3
#define MSG_EXT_RPM "Extruder Geschw." //MK3
#define MSG_NOZZLE "Nozzle" //MK3
#define MSG_HEATER "Temperatur" //MK3
#define MSG_LENGTH_CUTOFF "Soll Laenge" //MK3
#define MSG_FILAMENT "Sensor Pos" //MK3
#define MSG_WINDER_SPEED "Luefter Geschw." //MK3
#define MSG_WINDER_RPM_FACTOR "Winder RPM Factor" //MK3
#define MSG_PID_P "PID-P" //MK3
#define MSG_PID_I "PID-I" //MK3
#define MSG_PID_D "PID-D" //MK3
#define MSG_PID_C "PID-C" //MK3
#define MSG_AUTOTUNE "PID Autotune" //MK3
#define MSG_CONTROL "Steuerung" //MK3
#define MSG_VE_JERK "Ve-jerk" //MK3
#define MSG_E "e" //MK3
#define MSG_WATCH "Startbild" //MK3
#define MSG_STATS "Filament Statistics" //MK3
#define MSG_PREPARE "Einstellung" //MK3
#define MSG_TUNE "Einstellung" //MK3
#define MSG_ESTEPS "Esteps/rev/100" //MK3
#define MSG_PSTEPS "Psteps/mm" //MK3
#define MSG_A_RETRACT "Motor Acc" //MK3
#define MSG_STORE_EPROM "Speichern" //MK3
#define MSG_LOAD_EPROM "Laden" //MK3
#define MSG_RESTORE_FAILSAFE "Werkseinstellung" //MK3
#define MSG_TEMPERATURE "Temperatur" //MK3
#define MSG_MOTION "Bewegung" //MK3
#define MSG_FILAMENT_PID "Zieheinheit" //MK3
#define MSG_PAUSE_EXTRUDER "STOP Extruder" //MK3
#define MSG_RESUME_EXTRUDER "START Extruder" //MK3
#define MSG_AUTO_EXTRUDER "Autom. ziehen" //MK3
#define MSG_MAN_EXTRUDER "Manuell ziehen" //MK3
#define MSG_CLEAR_STATS "Statistik auf 0." //MK3
#define MSG_ENABLE_STATS "Statistik starten" //MK3
#define MSG_DISABLE_STATS "Statistik stoppen" //MK3
#define MSG_VMAX "Vmax " //MK3
#define MSG_EXTRUDER_RUNNING "Extruder aktiv" //MK3
#define MSG_EXTRUDER_STOPPED "Extruder gestoppt" //MK3
#define MSG_EXTRUDE_COMPLETE "Extrusion fertig"
  // LCD Menu Messages ferz
  #define MSG_SD_INSERTED "Card inserted"           
	#define MSG_SD_REMOVED "Card removed"
	#define MSG_AUTOSTART "Autostart"
	#define MSG_DISABLE_STEPPERS "Disable steppers"
	#define MSG_AUTO_HOME "Auto home"
	#define MSG_SET_ORIGIN "Set origin"
	#define MSG_PREHEAT_PLA "Preheat PLA"
	#define MSG_PREHEAT_PLA0 "Preheat PLA 1"
	#define MSG_PREHEAT_PLA1 "Preheat PLA 2"
	#define MSG_PREHEAT_PLA2 "Preheat PLA 3"
	#define MSG_PREHEAT_PLA012 "Preheat PLA All"
	#define MSG_PREHEAT_PLA_BEDONLY "Preheat PLA Bed"
	#define MSG_PREHEAT_PLA_SETTINGS "Preheat PLA conf"
	#define MSG_PREHEAT_ABS0 "Preheat ABS 1"
	#define MSG_PREHEAT_ABS1 "Preheat ABS 2"
	#define MSG_PREHEAT_ABS2 "Preheat ABS 3"
	#define MSG_PREHEAT_ABS012 "Preheat ABS All"
	#define MSG_PREHEAT_ABS_BEDONLY "Preheat ABS Bed"
	#define MSG_SWITCH_PS_ON "Switch power on"
	#define MSG_SWITCH_PS_OFF "Switch power off"
	#define MSG_EXTRUDE "Extrude"
	#define MSG_RETRACT "Retract"
	#define MSG_MOVE_AXIS "Move axis"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED   "Puller mm/s"
	#define MSG_NOZZLE1 "Nozzle2"
	#define MSG_NOZZLE2 "Nozzle3"
	#define MSG_BED "Bed"
	#define MSG_FLOW "Flow"
	#define MSG_FLOW0 "Flow 0"
	#define MSG_FLOW1 "Flow 1"
	#define MSG_FLOW2 "Flow 2"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Fact"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_ACC  "Accel"
	#define MSG_VXY_JERK "Vxy-jerk" 
	#define MSG_VZ_JERK "Vz-jerk" 
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VTrav min"
	#define MSG_AMAX "Amax "
	#define MSG_XSTEPS "Xsteps/mm"
	#define MSG_YSTEPS "Ysteps/mm"
	#define MSG_ZSTEPS "Zsteps/mm"
	#define MSG_RECTRACT "Rectract"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_REFRESH "Refresh"
	#define MSG_PAUSE_PRINT "Pause print"
	#define MSG_RESUME_PRINT "Resume print"
	#define MSG_STOP_PRINT "Stop print"
	#define MSG_CARD_MENU "Print from SD"
	#define MSG_NO_CARD "No SD card"
	#define MSG_DWELL "Sleep..."
	#define MSG_USERWAIT "Wait for user..."
	#define MSG_RESUMING "Resuming print"
	#define MSG_NO_MOVE "No move."
	#define MSG_KILLED "KILLED. "
	#define MSG_STOPPED "STOPPED. "
	#define MSG_CONTROL_RETRACT  "Retract mm"
	#define MSG_CONTROL_RETRACTF "Retract  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Init. SD card"
	#define MSG_CNG_SDCARD "Change SD card"
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"

// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line: "
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line: "
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line: "
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Invalid extruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Invalid extruder "
	#define MSG_M221_INVALID_EXTRUDER "M221 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temperature"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done.       "
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Mackerel V1; Marlin mashup for Filament Extruders FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Count X: "
	#define MSG_ERR_KILLED "Printer halted. kill() called!"
	#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
	#define MSG_RESEND "Resend: "
	#define MSG_UNKNOWN_COMMAND "Unknown command: \""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Reporting endstop status"
	#define MSG_ENDSTOP_HIT "TRIGGERED"
	#define MSG_ENDSTOP_OPEN "open"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened: "
	#define MSG_SD_SIZE " Size: "
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir: "
	#define MSG_STEPPER_TOO_HIGH "Steprate too high: "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"


#endif


#if LANGUAGE_CHOICE == 3

// LCD Menu Messages
// Please note these are limited to 17 characters!
#define MSG_DISPLAY_SensROmax "Capteur Max" //MK3
#define MSG_DISPLAY_SensROmin "Capteur Min" //MK3
#define MSG_DISPLAY_Pcirc "Circonf roue" //MK3
#define MSG_DISPLAY_Factor2 "Facteur 2" //MK3
#define MSG_DISPLAY_Factor1 "Facteur 1" //MK3
#define MSG_DISPLAY_Meter "m" //MK3
#define MSG_DISPLAY_Length " L:" //MK3
#define MSG_DISPLAY_S "S:" //MK3
#define MSG_DISPLAY_AV "  Moy:" //MK3
#define MSG_DISPLAY_MinWidth "  Min:" //MK3
#define MSG_DISPLAY_MaxWidth "  Max:" //MK3
#define MSG_DISPLAY_rpm2 "t.m" //MK3
#define MSG_DISPLAY_COLD "Froi" //MK3
#define MSG_DISPLAY_OFF "Off " //MK3
#define MSG_DISPLAY_E "E:" //MK3
#define MSG_DISPLAY_rpm "t.m " //MK3
#define MSG_DISPLAY_Puller "T:" //MK3
#define MSG_SAFETY_COOLDOWN "Refroid. de Securite" //MK3
#define MSG_EX_WARM_UP "echauff. Extrudeuse" //MK3
#define MSG_EX_COOL "Refroid. Extrudeuse" //MK3
#define MSG_AUTOT_SEQU "Seq. Autoreglage" //MK3
#define MSG_AUTOT_COMPL "Autoreglage complet" //MK3
#define MSG_MIN_TEMP "Tempmin" //MK3
#define MSG_MAX_TEMP "Tempmax" //MK3
#define MSG_thermal_runaway "Erreur de Chauffage" //MK3
#define MSG_sensor_runout "Erreur de Capteur" //MK3
#define WELCOME_MSG MACHINE_NAME "   " //MK3
#define MSG_MAIN "Menu Princi." //MK3
#define MSG_PREHEAT_ABS "Prechauffage" //MK3
#define MSG_PREHEAT_ABS_SETTINGS "Reg. Prechauffage" //MK3
#define MSG_COOLDOWN "Refroidissement" //MK3
#define MSG_MOVE_E "Extrudeu" //MK3
#define MSG_MOVE_P "T" //MK3
#define MSG_EXT_RPM "Tr/mn extrud." //MK3
#define MSG_NOZZLE "Nozzle" //MK3
#define MSG_HEATER "Temperature" //MK3
#define MSG_LENGTH_CUTOFF "Lim Longueur" //MK3
#define MSG_FILAMENT "Pos capteur" //MK3
#define MSG_WINDER_SPEED "Vit Ventila." //MK3
#define MSG_WINDER_RPM_FACTOR "Winder RPM Factor" //MK3
#define MSG_PID_P "PID-P" //MK3
#define MSG_PID_I "PID-I" //MK3
#define MSG_PID_D "PID-D" //MK3
#define MSG_PID_C "PiD-C" //MK3
#define MSG_AUTOTUNE "Autoreglage PiD" //MK3
#define MSG_CONTROL "Controle" //MK3
#define MSG_VE_JERK "Ve-jerk" //MK3
#define MSG_E "e" //MK3
#define MSG_WATCH "ecran initial" //MK3
#define MSG_STATS "Statisti. filaments" //MK3
#define MSG_PREPARE "Reglages" //MK3
#define MSG_TUNE "Reglages" //MK3
#define MSG_ESTEPS "Esteps/rev/100" //MK3
#define MSG_PSTEPS "Psteps/mm" //MK3
#define MSG_A_RETRACT "Motor Acc" //MK3
#define MSG_STORE_EPROM "Sauveg. reglages" //MK3
#define MSG_LOAD_EPROM "Charger Reglages" //MK3
#define MSG_RESTORE_FAILSAFE "Reiniti. Reglages" //MK3
#define MSG_TEMPERATURE "Temperature" //MK3
#define MSG_MOTION "Mouvement" //MK3
#define MSG_FILAMENT_PID "Unite de traction" //MK3
#define MSG_PAUSE_EXTRUDER "STOP Extrudeuse" //MK3
#define MSG_RESUME_EXTRUDER "START Extrudeuse" //MK3
#define MSG_AUTO_EXTRUDER "Traction automati" //MK3
#define MSG_MAN_EXTRUDER "Traction Manuelle" //MK3
#define MSG_CLEAR_STATS "Effacer Statist." //MK3
#define MSG_ENABLE_STATS "Activer statist." //MK3
#define MSG_DISABLE_STATS "Pauser statist." //MK3
#define MSG_VMAX "Vmax " //MK3
#define MSG_EXTRUDER_RUNNING "Extrudeuse activee" //MK3
#define MSG_EXTRUDER_STOPPED "Extrudeuse arretee" //MK3
#define MSG_EXTRUDE_COMPLETE "Extrusion terminee" //MK3
  // LCD Menu Messages ferz
  #define MSG_SD_INSERTED "Card inserted"           
	#define MSG_SD_REMOVED "Card removed"
	#define MSG_AUTOSTART "Autostart"
	#define MSG_DISABLE_STEPPERS "Disable steppers"
	#define MSG_AUTO_HOME "Auto home"
	#define MSG_SET_ORIGIN "Set origin"
	#define MSG_PREHEAT_PLA "Preheat PLA"
	#define MSG_PREHEAT_PLA0 "Preheat PLA 1"
	#define MSG_PREHEAT_PLA1 "Preheat PLA 2"
	#define MSG_PREHEAT_PLA2 "Preheat PLA 3"
	#define MSG_PREHEAT_PLA012 "Preheat PLA All"
	#define MSG_PREHEAT_PLA_BEDONLY "Preheat PLA Bed"
	#define MSG_PREHEAT_PLA_SETTINGS "Preheat PLA conf"
	#define MSG_PREHEAT_ABS0 "Preheat ABS 1"
	#define MSG_PREHEAT_ABS1 "Preheat ABS 2"
	#define MSG_PREHEAT_ABS2 "Preheat ABS 3"
	#define MSG_PREHEAT_ABS012 "Preheat ABS All"
	#define MSG_PREHEAT_ABS_BEDONLY "Preheat ABS Bed"
	#define MSG_SWITCH_PS_ON "Switch power on"
	#define MSG_SWITCH_PS_OFF "Switch power off"
	#define MSG_EXTRUDE "Extrude"
	#define MSG_RETRACT "Retract"
	#define MSG_MOVE_AXIS "Move axis"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED   "Puller mm/s"
	#define MSG_NOZZLE1 "Nozzle2"
	#define MSG_NOZZLE2 "Nozzle3"
	#define MSG_BED "Bed"
	#define MSG_FLOW "Flow"
	#define MSG_FLOW0 "Flow 0"
	#define MSG_FLOW1 "Flow 1"
	#define MSG_FLOW2 "Flow 2"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Fact"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_ACC  "Accel"
	#define MSG_VXY_JERK "Vxy-jerk" 
	#define MSG_VZ_JERK "Vz-jerk" 
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VTrav min"
	#define MSG_AMAX "Amax "
	#define MSG_XSTEPS "Xsteps/mm"
	#define MSG_YSTEPS "Ysteps/mm"
	#define MSG_ZSTEPS "Zsteps/mm"
	#define MSG_RECTRACT "Rectract"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_REFRESH "Refresh"
	#define MSG_PAUSE_PRINT "Pause print"
	#define MSG_RESUME_PRINT "Resume print"
	#define MSG_STOP_PRINT "Stop print"
	#define MSG_CARD_MENU "Print from SD"
	#define MSG_NO_CARD "No SD card"
	#define MSG_DWELL "Sleep..."
	#define MSG_USERWAIT "Wait for user..."
	#define MSG_RESUMING "Resuming print"
	#define MSG_NO_MOVE "No move."
	#define MSG_KILLED "KILLED. "
	#define MSG_STOPPED "STOPPED. "
	#define MSG_CONTROL_RETRACT  "Retract mm"
	#define MSG_CONTROL_RETRACTF "Retract  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Init. SD card"
	#define MSG_CNG_SDCARD "Change SD card"
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"

// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line: "
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line: "
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line: "
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Invalid extruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Invalid extruder "
	#define MSG_M221_INVALID_EXTRUDER "M221 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temperature"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done.       "
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Mackerel V1; Marlin mashup for Filament Extruders FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Count X: "
	#define MSG_ERR_KILLED "Printer halted. kill() called!"
	#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
	#define MSG_RESEND "Resend: "
	#define MSG_UNKNOWN_COMMAND "Unknown command: \""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Reporting endstop status"
	#define MSG_ENDSTOP_HIT "TRIGGERED"
	#define MSG_ENDSTOP_OPEN "open"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened: "
	#define MSG_SD_SIZE " Size: "
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir: "
	#define MSG_STEPPER_TOO_HIGH "Steprate too high: "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"

#endif


#if LANGUAGE_CHOICE == 4

// LCD Menu Messages
// Please note these are limited to 17 characters!
#define MSG_DISPLAY_SensROmax "Czujnik Max" //MK3
#define MSG_DISPLAY_SensROmin "Czujnik Min" //MK3
#define MSG_DISPLAY_Pcirc "Obieg kola" //MK3
#define MSG_DISPLAY_Factor2 "Czyn. 2" //MK3
#define MSG_DISPLAY_Factor1 "Czyn. 1" //MK3
#define MSG_DISPLAY_Meter "m" //MK3
#define MSG_DISPLAY_Length " D:" //MK3
#define MSG_DISPLAY_S "C:" //MK3
#define MSG_DISPLAY_AV "  Prz:" //MK3
#define MSG_DISPLAY_MinWidth "  Min:" //MK3
#define MSG_DISPLAY_MaxWidth "  Max:" //MK3
#define MSG_DISPLAY_rpm2 " ppo " //MK3
#define MSG_DISPLAY_COLD "Cold" //MK3
#define MSG_DISPLAY_OFF "Wyl " //MK3
#define MSG_DISPLAY_E "E:" //MK3
#define MSG_DISPLAY_rpm "ppo " //MK3
#define MSG_DISPLAY_Puller "P:" //MK3
#define MSG_SAFETY_COOLDOWN "Bezpiec. Odnow.." //MK3
#define MSG_EX_WARM_UP "Rozgrzew Exstrudera" //MK3
#define MSG_EX_COOL "Chlodzenie Exstrud. " //MK3
#define MSG_AUTOT_SEQU "Auto-tune Sekwencja" //MK3
#define MSG_AUTOT_COMPL "Auto-tune Zakonczony" //MK3
#define MSG_MIN_TEMP "Mintemp" //MK3
#define MSG_MAX_TEMP "Maxtemp" //MK3
#define MSG_thermal_runaway "Blad ogrzewu" //MK3
#define MSG_sensor_runout "Blad czujnika" //MK3
#define WELCOME_MSG MACHINE_NAME "   " //MK3
#define MSG_MAIN "Glowne menu" //MK3
#define MSG_PREHEAT_ABS "Rozgrzewka" //MK3
#define MSG_PREHEAT_ABS_SETTINGS "Ustaw. Rozgrzewki" //MK3
#define MSG_COOLDOWN "Czas odnowy" //MK3
#define MSG_MOVE_E "Exstrud." //MK3
#define MSG_MOVE_P "P" //MK3
#define MSG_EXT_RPM "Exstruder ppo" //MK3
#define MSG_NOZZLE "Dysza" //MK3
#define MSG_HEATER "Temperatura" //MK3
#define MSG_LENGTH_CUTOFF "D Odciecie" //MK3
#define MSG_FILAMENT "Czujnik poz" //MK3
#define MSG_WINDER_SPEED "Predk. went." //MK3
#define MSG_WINDER_RPM_FACTOR "Winder RPM Factor" //MK3
#define MSG_PID_P "PID-P" //MK3
#define MSG_PID_I "PID-I" //MK3
#define MSG_PID_D "PID-D" //MK3
#define MSG_PID_C "PID-C" //MK3
#define MSG_AUTOTUNE "PID Auto-tune" //MK3
#define MSG_CONTROL "Kontrol" //MK3
#define MSG_VE_JERK "Ve-jerk" //MK3
#define MSG_E "e" //MK3
#define MSG_WATCH "Pocz. Ekran" //MK3
#define MSG_STATS "Statyst. filamentow" //MK3
#define MSG_PREPARE "Ustawienia" //MK3
#define MSG_TUNE "Ustawienia" //MK3
#define MSG_ESTEPS "Ekroki/rev/100" //MK3
#define MSG_PSTEPS "Pkroki/mm" //MK3
#define MSG_A_RETRACT "Przysp. silnika" //MK3
#define MSG_STORE_EPROM "Zapisac Ustaw." //MK3
#define MSG_LOAD_EPROM "Wczytac Ustaw." //MK3
#define MSG_RESTORE_FAILSAFE "Resetowac Ust." //MK3
#define MSG_TEMPERATURE "Temperatura" //MK3
#define MSG_MOTION "Ruch" //MK3
#define MSG_FILAMENT_PID "Jedn. ciagn." //MK3
#define MSG_PAUSE_EXTRUDER "STOP Exstrud." //MK3
#define MSG_RESUME_EXTRUDER "START Exstrud." //MK3
#define MSG_AUTO_EXTRUDER "Ciagniecie aut." //MK3
#define MSG_MAN_EXTRUDER "Ciagniecie recz." //MK3
#define MSG_CLEAR_STATS "Wyczyscic Stat." //MK3
#define MSG_ENABLE_STATS "Wlaczyc Statyst." //MK3
#define MSG_DISABLE_STATS "Pauza Statyst." //MK3
#define MSG_VMAX "Vmax " //MK3
#define MSG_EXTRUDER_RUNNING "Exstruder dziala" //MK3
#define MSG_EXTRUDER_STOPPED "Exstruder zatrz." //MK3
#define MSG_EXTRUDE_COMPLETE "Ekstruzja zakon." //MK3
  // LCD Menu Messages ferz
  #define MSG_SD_INSERTED "Card inserted"           
	#define MSG_SD_REMOVED "Card removed"
	#define MSG_AUTOSTART "Autostart"
	#define MSG_DISABLE_STEPPERS "Disable steppers"
	#define MSG_AUTO_HOME "Auto home"
	#define MSG_SET_ORIGIN "Set origin"
	#define MSG_PREHEAT_PLA "Preheat PLA"
	#define MSG_PREHEAT_PLA0 "Preheat PLA 1"
	#define MSG_PREHEAT_PLA1 "Preheat PLA 2"
	#define MSG_PREHEAT_PLA2 "Preheat PLA 3"
	#define MSG_PREHEAT_PLA012 "Preheat PLA All"
	#define MSG_PREHEAT_PLA_BEDONLY "Preheat PLA Bed"
	#define MSG_PREHEAT_PLA_SETTINGS "Preheat PLA conf"
	#define MSG_PREHEAT_ABS0 "Preheat ABS 1"
	#define MSG_PREHEAT_ABS1 "Preheat ABS 2"
	#define MSG_PREHEAT_ABS2 "Preheat ABS 3"
	#define MSG_PREHEAT_ABS012 "Preheat ABS All"
	#define MSG_PREHEAT_ABS_BEDONLY "Preheat ABS Bed"
	#define MSG_SWITCH_PS_ON "Switch power on"
	#define MSG_SWITCH_PS_OFF "Switch power off"
	#define MSG_EXTRUDE "Extrude"
	#define MSG_RETRACT "Retract"
	#define MSG_MOVE_AXIS "Move axis"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED   "Puller mm/s"
	#define MSG_NOZZLE1 "Nozzle2"
	#define MSG_NOZZLE2 "Nozzle3"
	#define MSG_BED "Bed"
	#define MSG_FLOW "Flow"
	#define MSG_FLOW0 "Flow 0"
	#define MSG_FLOW1 "Flow 1"
	#define MSG_FLOW2 "Flow 2"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Fact"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_ACC  "Accel"
	#define MSG_VXY_JERK "Vxy-jerk" 
	#define MSG_VZ_JERK "Vz-jerk" 
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VTrav min"
	#define MSG_AMAX "Amax "
	#define MSG_XSTEPS "Xsteps/mm"
	#define MSG_YSTEPS "Ysteps/mm"
	#define MSG_ZSTEPS "Zsteps/mm"
	#define MSG_RECTRACT "Rectract"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_REFRESH "Refresh"
	#define MSG_PAUSE_PRINT "Pause print"
	#define MSG_RESUME_PRINT "Resume print"
	#define MSG_STOP_PRINT "Stop print"
	#define MSG_CARD_MENU "Print from SD"
	#define MSG_NO_CARD "No SD card"
	#define MSG_DWELL "Sleep..."
	#define MSG_USERWAIT "Wait for user..."
	#define MSG_RESUMING "Resuming print"
	#define MSG_NO_MOVE "No move."
	#define MSG_KILLED "KILLED. "
	#define MSG_STOPPED "STOPPED. "
	#define MSG_CONTROL_RETRACT  "Retract mm"
	#define MSG_CONTROL_RETRACTF "Retract  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Init. SD card"
	#define MSG_CNG_SDCARD "Change SD card"
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"

// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line: "
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line: "
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line: "
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Invalid extruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Invalid extruder "
	#define MSG_M221_INVALID_EXTRUDER "M221 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temperature"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done.       "
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Mackerel V1; Marlin mashup for Filament Extruders FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Count X: "
	#define MSG_ERR_KILLED "Printer halted. kill() called!"
	#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
	#define MSG_RESEND "Resend: "
	#define MSG_UNKNOWN_COMMAND "Unknown command: \""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Reporting endstop status"
	#define MSG_ENDSTOP_HIT "TRIGGERED"
	#define MSG_ENDSTOP_OPEN "open"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened: "
	#define MSG_SD_SIZE " Size: "
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir: "
	#define MSG_STEPPER_TOO_HIGH "Steprate too high: "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"


#endif


#if LANGUAGE_CHOICE == 5

// LCD Menu Messages
// Please note these are limited to 17 characters!
#define MSG_DISPLAY_SensROmax "Sensor max" //MK3
#define MSG_DISPLAY_SensROmin "Sensor min" //MK3
#define MSG_DISPLAY_Pcirc "Tamano rueda" //MK3
#define MSG_DISPLAY_Factor2 "Factor 2" //MK3
#define MSG_DISPLAY_Factor1 "Factor 1" //MK3
#define MSG_DISPLAY_Meter "m" //MK3
#define MSG_DISPLAY_Length " L:" //MK3
#define MSG_DISPLAY_S "S:" //MK3
#define MSG_DISPLAY_AV " Med:" //MK3
#define MSG_DISPLAY_MinWidth " Min:" //MK3
#define MSG_DISPLAY_MaxWidth " Max:" //MK3
#define MSG_DISPLAY_rpm2 " rpm " //MK3
#define MSG_DISPLAY_COLD "Frio" //MK3
#define MSG_DISPLAY_OFF "En " //MK3
#define MSG_DISPLAY_E "E:" //MK3
#define MSG_DISPLAY_rpm "rpm " //MK3
#define MSG_DISPLAY_Puller "P:" //MK3
#define MSG_SAFETY_COOLDOWN "Enfria. de seguridad" //MK3
#define MSG_EX_WARM_UP "Calen. del extrusor" //MK3
#define MSG_EX_COOL "Enfriam. del extrusor" //MK3
#define MSG_AUTOT_SEQU "Secuencia de auto." //MK3
#define MSG_AUTOT_COMPL "Autoajuste listo" //MK3
#define MSG_MIN_TEMP "Min-Min" //MK3
#define MSG_MAX_TEMP "Calor Max" //MK3
#define MSG_thermal_runaway "Fallo de calefaccion" //MK3
#define MSG_sensor_runout "Fallo del sensor" //MK3
#define WELCOME_MSG MACHINE_NAME " " //MK3
#define MSG_MAIN "Menu principal" //MK3
#define MSG_PREHEAT_ABS "Precalentar" //MK3
#define MSG_PREHEAT_ABS_SETTINGS "Precalentar. Ajustar" //MK3
#define MSG_COOLDOWN "Enfriamiento" //MK3
#define MSG_MOVE_E "Extrusor" //MK3
#define MSG_MOVE_P "P" //MK3
#define MSG_EXT_RPM "RPM extrusora" //MK3
#define MSG_NOZZLE "Boquilla" //MK3
#define MSG_HEATER "Temperatura" //MK3
#define MSG_LENGTH_CUTOFF "Longitud objetivo" //MK3
#define MSG_FILAMENT "Posic. del sensor" //MK3
#define MSG_WINDER_SPEED "Veloc. del ventil." //MK3
#define MSG_WINDER_RPM_FACTOR "Winder RPM Factor" //MK3
#define MSG_PID_P "PID-P" //MK3
#define MSG_PID_I "PID-I" //MK3
#define MSG_PID_D "PID-D" //MK3
#define MSG_PID_C "PiD-C" //MK3
#define MSG_AUTOTUNE "Autoajuste PiD" //MK3
#define MSG_CONTROL "Control" //MK3
#define MSG_VE_JERK "Muelle en V" //MK3
#define MSG_E "e" //MK3
#define MSG_WATCH "Pantalla inicio" //MK3
#define MSG_STATS "Estadisticas hilo" //MK3
#define MSG_PREPARE "Ajustes" //MK3
#define MSG_TUNE "Ajustes" //MK3
#define MSG_ESTEPS "Esteps/rev/100" //MK3
#define MSG_PSTEPS "Psteps/mm" //MK3
#define MSG_A_RETRACT "Acc motor" //MK3
#define MSG_STORE_EPROM "Alma. ajustes" //MK3
#define MSG_LOAD_EPROM "Cargar ajustes" //MK3
#define MSG_RESTORE_FAILSAFE "Restaurar ajustes" //MK3
#define MSG_TEMPERATURE "Temperatura" //MK3
#define MSG_MOTION "Movimiento" //MK3
#define MSG_FILAMENT_PID "Unidad de tension" //MK3
#define MSG_PAUSE_EXTRUDER "PARAR extrusora" //MK3
#define MSG_RESUME_EXTRUDER "INICIAR extrusora " //MK3
#define MSG_AUTO_EXTRUDER "Extrusion automatica" //MK3
#define MSG_MAN_EXTRUDER "Extraccion manual" //MK3
#define MSG_CLEAR_STATS "Borrar estadisticas" //MK3
#define MSG_ENABLE_STATS "Stat. Activado" //MK3
#define MSG_DISABLE_STATS "Stat. Vacaciones" //MK3
#define MSG_VMAX "Vmax " //MK3
#define MSG_EXTRUDER_RUNNING "Extrusor marcha" //MK3
#define MSG_EXTRUDER_STOPPED "Extrusor parado" //MK3
#define MSG_EXTRUDE_COMPLETE "Extrusion finalizada" //MK3
  // LCD Menu Messages ferz
  #define MSG_SD_INSERTED "Card inserted"           
	#define MSG_SD_REMOVED "Card removed"
	#define MSG_AUTOSTART "Autostart"
	#define MSG_DISABLE_STEPPERS "Disable steppers"
	#define MSG_AUTO_HOME "Auto home"
	#define MSG_SET_ORIGIN "Set origin"
	#define MSG_PREHEAT_PLA "Preheat PLA"
	#define MSG_PREHEAT_PLA0 "Preheat PLA 1"
	#define MSG_PREHEAT_PLA1 "Preheat PLA 2"
	#define MSG_PREHEAT_PLA2 "Preheat PLA 3"
	#define MSG_PREHEAT_PLA012 "Preheat PLA All"
	#define MSG_PREHEAT_PLA_BEDONLY "Preheat PLA Bed"
	#define MSG_PREHEAT_PLA_SETTINGS "Preheat PLA conf"
	#define MSG_PREHEAT_ABS0 "Preheat ABS 1"
	#define MSG_PREHEAT_ABS1 "Preheat ABS 2"
	#define MSG_PREHEAT_ABS2 "Preheat ABS 3"
	#define MSG_PREHEAT_ABS012 "Preheat ABS All"
	#define MSG_PREHEAT_ABS_BEDONLY "Preheat ABS Bed"
	#define MSG_SWITCH_PS_ON "Switch power on"
	#define MSG_SWITCH_PS_OFF "Switch power off"
	#define MSG_EXTRUDE "Extrude"
	#define MSG_RETRACT "Retract"
	#define MSG_MOVE_AXIS "Move axis"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED   "Puller mm/s"
	#define MSG_NOZZLE1 "Nozzle2"
	#define MSG_NOZZLE2 "Nozzle3"
	#define MSG_BED "Bed"
	#define MSG_FLOW "Flow"
	#define MSG_FLOW0 "Flow 0"
	#define MSG_FLOW1 "Flow 1"
	#define MSG_FLOW2 "Flow 2"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Fact"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_ACC  "Accel"
	#define MSG_VXY_JERK "Vxy-jerk" 
	#define MSG_VZ_JERK "Vz-jerk" 
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VTrav min"
	#define MSG_AMAX "Amax "
	#define MSG_XSTEPS "Xsteps/mm"
	#define MSG_YSTEPS "Ysteps/mm"
	#define MSG_ZSTEPS "Zsteps/mm"
	#define MSG_RECTRACT "Rectract"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_REFRESH "Refresh"
	#define MSG_PAUSE_PRINT "Pause print"
	#define MSG_RESUME_PRINT "Resume print"
	#define MSG_STOP_PRINT "Stop print"
	#define MSG_CARD_MENU "Print from SD"
	#define MSG_NO_CARD "No SD card"
	#define MSG_DWELL "Sleep..."
	#define MSG_USERWAIT "Wait for user..."
	#define MSG_RESUMING "Resuming print"
	#define MSG_NO_MOVE "No move."
	#define MSG_KILLED "KILLED. "
	#define MSG_STOPPED "STOPPED. "
	#define MSG_CONTROL_RETRACT  "Retract mm"
	#define MSG_CONTROL_RETRACTF "Retract  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Init. SD card"
	#define MSG_CNG_SDCARD "Change SD card"
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"

// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line: "
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line: "
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line: "
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Invalid extruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Invalid extruder "
	#define MSG_M221_INVALID_EXTRUDER "M221 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temperature"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done.       "
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Mackerel V1; Marlin mashup for Filament Extruders FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Count X: "
	#define MSG_ERR_KILLED "Printer halted. kill() called!"
	#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
	#define MSG_RESEND "Resend: "
	#define MSG_UNKNOWN_COMMAND "Unknown command: \""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Reporting endstop status"
	#define MSG_ENDSTOP_HIT "TRIGGERED"
	#define MSG_ENDSTOP_OPEN "open"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened: "
	#define MSG_SD_SIZE " Size: "
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir: "
	#define MSG_STEPPER_TOO_HIGH "Steprate too high: "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"

#endif




#if LANGUAGE_CHOICE == 6

// LCD Menu Messages
// Please note these are limited to 17 characters!
#define MSG_DISPLAY_SensROmax "Sensore Max" //MK3
#define MSG_DISPLAY_SensROmin "Sensore Min" //MK3
#define MSG_DISPLAY_Pcirc "Circ. ruota" //MK3
#define MSG_DISPLAY_Factor2 "Fattore 2" //MK3
#define MSG_DISPLAY_Factor1 "Fattore 1" //MK3
#define MSG_DISPLAY_Meter "m" //MK3
#define MSG_DISPLAY_Length "L:" //MK3
#define MSG_DISPLAY_S "S:" //MK3
#define MSG_DISPLAY_AV "Med:" //MK3
#define MSG_DISPLAY_MinWidth "Min:" //MK3
#define MSG_DISPLAY_MaxWidth "Max:" //MK3
#define MSG_DISPLAY_rpm2 "gir " //MK3
#define MSG_DISPLAY_COLD "Fred" //MK3
#define MSG_DISPLAY_OFF "Spt " //MK3
#define MSG_DISPLAY_E "E:" //MK3
#define MSG_DISPLAY_rpm "gir " //MK3
#define MSG_DISPLAY_Puller "P:" //MK3
#define MSG_SAFETY_COOLDOWN "Raffredd. Sicurezza" //MK3
#define MSG_EX_WARM_UP "Riscald. Estrusore" //MK3
#define MSG_EX_COOL "Raffredd. Estrusore" //MK3
#define MSG_AUTOT_SEQU "Sequenza Autotune" //MK3
#define MSG_AUTOT_COMPL "Autotune Completato" //MK3
#define MSG_MIN_TEMP "Temp Bassa" //MK3
#define MSG_MAX_TEMP "Temp Alta" //MK3
#define MSG_thermal_runaway "Errore Riscaldamento" //MK3
#define MSG_sensor_runout "Errore Sensore" //MK3
#define WELCOME_MSG MACHINE_NAME "   " //MK3
#define MSG_MAIN "Menu Princip." //MK3
#define MSG_PREHEAT_ABS "Preriscalda" //MK3
#define MSG_PREHEAT_ABS_SETTINGS "imposta Preris" //MK3
#define MSG_COOLDOWN "Raffredda" //MK3
#define MSG_MOVE_E "Estrusor" //MK3
#define MSG_MOVE_P "P" //MK3
#define MSG_EXT_RPM "Giri Estrus" //MK3
#define MSG_NOZZLE "Nozzle" //MK3
#define MSG_HEATER "Temperatura" //MK3
#define MSG_LENGTH_CUTOFF "Taglio L" //MK3
#define MSG_FILAMENT "Pos. Sensor" //MK3
#define MSG_WINDER_SPEED "Veloc. Vent." //MK3
#define MSG_WINDER_RPM_FACTOR "Winder RPM Factor" //MK3
#define MSG_PID_P "PID-P" //MK3
#define MSG_PID_I "PID-I" //MK3
#define MSG_PID_D "PID-D" //MK3
#define MSG_PID_C "PiD-C" //MK3
#define MSG_AUTOTUNE "Autotune PiD" //MK3
#define MSG_CONTROL "Controllo" //MK3
#define MSG_VE_JERK "Ve-jerk" //MK3
#define MSG_E "e" //MK3
#define MSG_WATCH "Schermo inizio" //MK3
#define MSG_STATS "Stat. Filamento" //MK3
#define MSG_PREPARE "impostazioni" //MK3
#define MSG_TUNE "impostazioni" //MK3
#define MSG_ESTEPS "Esteps/rev/100" //MK3
#define MSG_PSTEPS "Psteps/mm" //MK3
#define MSG_A_RETRACT "Motor Acc" //MK3
#define MSG_STORE_EPROM "Salva impost." //MK3
#define MSG_LOAD_EPROM "Carica impost." //MK3
#define MSG_RESTORE_FAILSAFE "Riprist. impost." //MK3
#define MSG_TEMPERATURE "Temperatura" //MK3
#define MSG_MOTION "Movimento" //MK3
#define MSG_FILAMENT_PID "Unita di trazione" //MK3
#define MSG_PAUSE_EXTRUDER "FERMARSI Estrusor" //MK3
#define MSG_RESUME_EXTRUDER "INIZIO Estrusore" //MK3
#define MSG_AUTO_EXTRUDER "Trazione Auto." //MK3
#define MSG_MAN_EXTRUDER "Trazione Manuale" //MK3
#define MSG_CLEAR_STATS "Canc. Statist." //MK3
#define MSG_ENABLE_STATS "Attiva Statist." //MK3
#define MSG_DISABLE_STATS "Pausa Statist." //MK3
#define MSG_VMAX "Vmax " //MK3
#define MSG_EXTRUDER_RUNNING "Estrusore attivo" //MK3
#define MSG_EXTRUDER_STOPPED "Estrusore fermo" //MK3
#define MSG_EXTRUDE_COMPLETE "Est. completata" //MK3
  // LCD Menu Messages ferz
  #define MSG_SD_INSERTED "Card inserted"           
	#define MSG_SD_REMOVED "Card removed"
	#define MSG_AUTOSTART "Autostart"
	#define MSG_DISABLE_STEPPERS "Disable steppers"
	#define MSG_AUTO_HOME "Auto home"
	#define MSG_SET_ORIGIN "Set origin"
	#define MSG_PREHEAT_PLA "Preheat PLA"
	#define MSG_PREHEAT_PLA0 "Preheat PLA 1"
	#define MSG_PREHEAT_PLA1 "Preheat PLA 2"
	#define MSG_PREHEAT_PLA2 "Preheat PLA 3"
	#define MSG_PREHEAT_PLA012 "Preheat PLA All"
	#define MSG_PREHEAT_PLA_BEDONLY "Preheat PLA Bed"
	#define MSG_PREHEAT_PLA_SETTINGS "Preheat PLA conf"
	#define MSG_PREHEAT_ABS0 "Preheat ABS 1"
	#define MSG_PREHEAT_ABS1 "Preheat ABS 2"
	#define MSG_PREHEAT_ABS2 "Preheat ABS 3"
	#define MSG_PREHEAT_ABS012 "Preheat ABS All"
	#define MSG_PREHEAT_ABS_BEDONLY "Preheat ABS Bed"
	#define MSG_SWITCH_PS_ON "Switch power on"
	#define MSG_SWITCH_PS_OFF "Switch power off"
	#define MSG_EXTRUDE "Extrude"
	#define MSG_RETRACT "Retract"
	#define MSG_MOVE_AXIS "Move axis"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED   "Puller mm/s"
	#define MSG_NOZZLE1 "Nozzle2"
	#define MSG_NOZZLE2 "Nozzle3"
	#define MSG_BED "Bed"
	#define MSG_FLOW "Flow"
	#define MSG_FLOW0 "Flow 0"
	#define MSG_FLOW1 "Flow 1"
	#define MSG_FLOW2 "Flow 2"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Fact"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_ACC  "Accel"
	#define MSG_VXY_JERK "Vxy-jerk" 
	#define MSG_VZ_JERK "Vz-jerk" 
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VTrav min"
	#define MSG_AMAX "Amax "
	#define MSG_XSTEPS "Xsteps/mm"
	#define MSG_YSTEPS "Ysteps/mm"
	#define MSG_ZSTEPS "Zsteps/mm"
	#define MSG_RECTRACT "Rectract"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_REFRESH "Refresh"
	#define MSG_PAUSE_PRINT "Pause print"
	#define MSG_RESUME_PRINT "Resume print"
	#define MSG_STOP_PRINT "Stop print"
	#define MSG_CARD_MENU "Print from SD"
	#define MSG_NO_CARD "No SD card"
	#define MSG_DWELL "Sleep..."
	#define MSG_USERWAIT "Wait for user..."
	#define MSG_RESUMING "Resuming print"
	#define MSG_NO_MOVE "No move."
	#define MSG_KILLED "KILLED. "
	#define MSG_STOPPED "STOPPED. "
	#define MSG_CONTROL_RETRACT  "Retract mm"
	#define MSG_CONTROL_RETRACTF "Retract  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Init. SD card"
	#define MSG_CNG_SDCARD "Change SD card"
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"

// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line: "
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line: "
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line: "
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Invalid extruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Invalid extruder "
	#define MSG_M221_INVALID_EXTRUDER "M221 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temperature"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done.       "
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Mackerel V1; Marlin mashup for Filament Extruders FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Count X: "
	#define MSG_ERR_KILLED "Printer halted. kill() called!"
	#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
	#define MSG_RESEND "Resend: "
	#define MSG_UNKNOWN_COMMAND "Unknown command: \""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Reporting endstop status"
	#define MSG_ENDSTOP_HIT "TRIGGERED"
	#define MSG_ENDSTOP_OPEN "open"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened: "
	#define MSG_SD_SIZE " Size: "
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir: "
	#define MSG_STEPPER_TOO_HIGH "Steprate too high: "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"

#endif


#if LANGUAGE_CHOICE == 7

// LCD Menu Messages
// Please note these are limited to 17 characters!
#define MSG_DISPLAY_SensROmax "Sensor Max" //MK3
#define MSG_DISPLAY_SensROmin "Sensor Min" //MK3
#define MSG_DISPLAY_Pcirc "Perim. roda" //MK3
#define MSG_DISPLAY_Factor2 "Fator 2" //MK3
#define MSG_DISPLAY_Factor1 "Fator 1" //MK3
#define MSG_DISPLAY_Meter "m" //MK3
#define MSG_DISPLAY_Length "C:" //MK3
#define MSG_DISPLAY_S "S:" //MK3
#define MSG_DISPLAY_AV " Med:" //MK3
#define MSG_DISPLAY_MinWidth "  Min:" //MK3
#define MSG_DISPLAY_MaxWidth "  Max:" //MK3
#define MSG_DISPLAY_rpm2 "rpm " //MK3
#define MSG_DISPLAY_COLD "Frio" //MK3
#define MSG_DISPLAY_OFF "Off " //MK3
#define MSG_DISPLAY_E "E:" //MK3
#define MSG_DISPLAY_rpm "rpm " //MK3
#define MSG_DISPLAY_Puller "D:" //MK3
#define MSG_SAFETY_COOLDOWN "Arref. de Seguranca" //MK3
#define MSG_EX_WARM_UP "Aqueci. da Extrusora" //MK3
#define MSG_EX_COOL "Arref. da Extrusora" //MK3
#define MSG_AUTOT_SEQU "Seq. de Sint. Auto." //MK3
#define MSG_AUTOT_COMPL "Sint. Auto. Completa" //MK3
#define MSG_MIN_TEMP "Tempmin" //MK3
#define MSG_MAX_TEMP "Tempmax" //MK3
#define MSG_thermal_runaway "Erro de Aquecimento" //MK3
#define MSG_sensor_runout "Erro do Sensor" //MK3
#define WELCOME_MSG MACHINE_NAME "   " //MK3
#define MSG_MAIN "Menu Princi." //MK3
#define MSG_PREHEAT_ABS "Pre-aquecimento" //MK3
#define MSG_PREHEAT_ABS_SETTINGS "Defin. de Pre-aq." //MK3
#define MSG_COOLDOWN "Arrefecimento" //MK3
#define MSG_MOVE_E "Extrusor" //MK3
#define MSG_MOVE_P "T" //MK3
#define MSG_EXT_RPM "Rpm extrusora" //MK3
#define MSG_NOZZLE "Nozzle" //MK3
#define MSG_HEATER "Temperatura" //MK3
#define MSG_LENGTH_CUTOFF "Lim. Comprim" //MK3
#define MSG_FILAMENT "Pos. Sensor" //MK3
#define MSG_WINDER_SPEED "Vel. Ventoi." //MK3
#define MSG_WINDER_RPM_FACTOR "Winder RPM Factor" //MK3
#define MSG_PID_P "PID-P" //MK3
#define MSG_PID_I "PID-I" //MK3
#define MSG_PID_D "PID-D" //MK3
#define MSG_PID_C "PiD-C" //MK3
#define MSG_AUTOTUNE "Sint. Auto. PiD" //MK3
#define MSG_CONTROL "Controlo" //MK3
#define MSG_VE_JERK "Ve-jerk" //MK3
#define MSG_E "e" //MK3
#define MSG_WATCH "Ecra inicial" //MK3
#define MSG_STATS "Estatist. Filamento" //MK3
#define MSG_PREPARE "Definicoes" //MK3
#define MSG_TUNE "Definicoes" //MK3
#define MSG_ESTEPS "Esteps/rev/100" //MK3
#define MSG_PSTEPS "Psteps/mm" //MK3
#define MSG_A_RETRACT "Motor Acc" //MK3
#define MSG_STORE_EPROM "Guardar Definicoes" //MK3
#define MSG_LOAD_EPROM "Carregar Defini." //MK3
#define MSG_RESTORE_FAILSAFE "Repor Definicoes" //MK3
#define MSG_TEMPERATURE "Temperatura" //MK3
#define MSG_MOTION "Movimento" //MK3
#define MSG_FILAMENT_PID "Unidade de tracao" //MK3
#define MSG_PAUSE_EXTRUDER "PARAR Extrusora" //MK3
#define MSG_RESUME_EXTRUDER "INICIAR Extrusora" //MK3
#define MSG_AUTO_EXTRUDER "Arrancamento auto" //MK3
#define MSG_MAN_EXTRUDER "Man. Arrancamento" //MK3
#define MSG_CLEAR_STATS "Apagar Estatist." //MK3
#define MSG_ENABLE_STATS "Ativar Estatist." //MK3
#define MSG_DISABLE_STATS "Pausar Estatist." //MK3
#define MSG_VMAX "Vmax " //MK3
#define MSG_EXTRUDER_RUNNING "Extrusora ativa" //MK3
#define MSG_EXTRUDER_STOPPED "Extrusora parada" //MK3
#define MSG_EXTRUDE_COMPLETE "Extrusao terminada" //MK3
  // LCD Menu Messages ferz
  #define MSG_SD_INSERTED "Card inserted"           
	#define MSG_SD_REMOVED "Card removed"
	#define MSG_AUTOSTART "Autostart"
	#define MSG_DISABLE_STEPPERS "Disable steppers"
	#define MSG_AUTO_HOME "Auto home"
	#define MSG_SET_ORIGIN "Set origin"
	#define MSG_PREHEAT_PLA "Preheat PLA"
	#define MSG_PREHEAT_PLA0 "Preheat PLA 1"
	#define MSG_PREHEAT_PLA1 "Preheat PLA 2"
	#define MSG_PREHEAT_PLA2 "Preheat PLA 3"
	#define MSG_PREHEAT_PLA012 "Preheat PLA All"
	#define MSG_PREHEAT_PLA_BEDONLY "Preheat PLA Bed"
	#define MSG_PREHEAT_PLA_SETTINGS "Preheat PLA conf"
	#define MSG_PREHEAT_ABS0 "Preheat ABS 1"
	#define MSG_PREHEAT_ABS1 "Preheat ABS 2"
	#define MSG_PREHEAT_ABS2 "Preheat ABS 3"
	#define MSG_PREHEAT_ABS012 "Preheat ABS All"
	#define MSG_PREHEAT_ABS_BEDONLY "Preheat ABS Bed"
	#define MSG_SWITCH_PS_ON "Switch power on"
	#define MSG_SWITCH_PS_OFF "Switch power off"
	#define MSG_EXTRUDE "Extrude"
	#define MSG_RETRACT "Retract"
	#define MSG_MOVE_AXIS "Move axis"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED   "Puller mm/s"
	#define MSG_NOZZLE1 "Nozzle2"
	#define MSG_NOZZLE2 "Nozzle3"
	#define MSG_BED "Bed"
	#define MSG_FLOW "Flow"
	#define MSG_FLOW0 "Flow 0"
	#define MSG_FLOW1 "Flow 1"
	#define MSG_FLOW2 "Flow 2"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Fact"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_ACC  "Accel"
	#define MSG_VXY_JERK "Vxy-jerk" 
	#define MSG_VZ_JERK "Vz-jerk" 
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VTrav min"
	#define MSG_AMAX "Amax "
	#define MSG_XSTEPS "Xsteps/mm"
	#define MSG_YSTEPS "Ysteps/mm"
	#define MSG_ZSTEPS "Zsteps/mm"
	#define MSG_RECTRACT "Rectract"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_REFRESH "Refresh"
	#define MSG_PAUSE_PRINT "Pause print"
	#define MSG_RESUME_PRINT "Resume print"
	#define MSG_STOP_PRINT "Stop print"
	#define MSG_CARD_MENU "Print from SD"
	#define MSG_NO_CARD "No SD card"
	#define MSG_DWELL "Sleep..."
	#define MSG_USERWAIT "Wait for user..."
	#define MSG_RESUMING "Resuming print"
	#define MSG_NO_MOVE "No move."
	#define MSG_KILLED "KILLED. "
	#define MSG_STOPPED "STOPPED. "
	#define MSG_CONTROL_RETRACT  "Retract mm"
	#define MSG_CONTROL_RETRACTF "Retract  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Init. SD card"
	#define MSG_CNG_SDCARD "Change SD card"
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"

// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line: "
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line: "
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line: "
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Invalid extruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Invalid extruder "
	#define MSG_M221_INVALID_EXTRUDER "M221 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temperature"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done.       "
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Mackerel V1; Marlin mashup for Filament Extruders FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Count X: "
	#define MSG_ERR_KILLED "Printer halted. kill() called!"
	#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
	#define MSG_RESEND "Resend: "
	#define MSG_UNKNOWN_COMMAND "Unknown command: \""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Reporting endstop status"
	#define MSG_ENDSTOP_HIT "TRIGGERED"
	#define MSG_ENDSTOP_OPEN "open"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened: "
	#define MSG_SD_SIZE " Size: "
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir: "
	#define MSG_STEPPER_TOO_HIGH "Steprate too high: "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"

#endif



#if LANGUAGE_CHOICE == 8

// LCD Menu Messages
// Please note these are limited to 17 characters!
 #define MSG_DISPLAY_SensROmax "Sensor Max" //MK3
#define MSG_DISPLAY_SensROmin "Sensor Min" //MK3
#define MSG_DISPLAY_Pcirc "Wheel circ" //MK3
#define MSG_DISPLAY_Factor2 "Factor 2" //MK3
#define MSG_DISPLAY_Factor1 "Factor 1" //MK3
#define MSG_DISPLAY_Meter "m" //MK3
#define MSG_DISPLAY_Length " L:" //MK3
#define MSG_DISPLAY_S "S:" //MK3
#define MSG_DISPLAY_AV "  Avg:" //MK3
#define MSG_DISPLAY_MinWidth "  Min:" //MK3
#define MSG_DISPLAY_MaxWidth "  Max:" //MK3
#define MSG_DISPLAY_rpm2 " rpm " //MK3
#define MSG_DISPLAY_COLD "Cold" //MK3
#define MSG_DISPLAY_OFF "Off " //MK3
#define MSG_DISPLAY_E "E:" //MK3
#define MSG_DISPLAY_rpm "rpm " //MK3
#define MSG_DISPLAY_Puller "P:" //MK3
#define MSG_SAFETY_COOLDOWN "Safety Cooldown" //MK3
#define MSG_EX_WARM_UP "Extruder Warming Up" //MK3
#define MSG_EX_COOL "Extruder Cooling" //MK3
#define MSG_AUTOT_SEQU "Autotune Sequence" //MK3
#define MSG_AUTOT_COMPL "Autotune Complete" //MK3
#define MSG_MIN_TEMP "Mintemp" //MK3
#define MSG_MAX_TEMP "Maxtemp" //MK3
#define MSG_thermal_runaway "Heating Error" //MK3
#define MSG_sensor_runout "Sensor Error" //MK3
#define WELCOME_MSG MACHINE_NAME "   " //MK3
#define MSG_MAIN "Main menu" //MK3
#define MSG_PREHEAT_ABS "Preheat" //MK3
#define MSG_PREHEAT_ABS_SETTINGS "Preheat Setting" //MK3
#define MSG_COOLDOWN "Cooldown" //MK3
#define MSG_MOVE_E "Extruder" //MK3
#define MSG_MOVE_P "P" //MK3
#define MSG_EXT_RPM "Extruder rpm" //MK3
#define MSG_NOZZLE "Nozzle" //MK3
#define MSG_HEATER "Temperature" //MK3
#define MSG_LENGTH_CUTOFF "L Cutoff" //MK3
#define MSG_FILAMENT "Sensor Pos" //MK3
#define MSG_WINDER_SPEED "Fan Speed" //MK3
#define MSG_WINDER_RPM_FACTOR "Winder RPM Factor" //MK3
#define MSG_PID_P "PID-P" //MK3
#define MSG_PID_I "PID-I" //MK3
#define MSG_PID_D "PID-D" //MK3
#define MSG_PID_C "PID-C" //MK3
#define MSG_AUTOTUNE "PID Autotune" //MK3
#define MSG_CONTROL "Control" //MK3
#define MSG_VE_JERK "Ve-jerk" //MK3
#define MSG_E "e" //MK3
#define MSG_WATCH "Start Screen" //MK3
#define MSG_STATS "Filament Statistics" //MK3
#define MSG_PREPARE "Settings" //MK3
#define MSG_TUNE "Settings" //MK3
#define MSG_ESTEPS "Esteps/rev/100" //MK3
#define MSG_PSTEPS "Psteps/mm" //MK3
#define MSG_A_RETRACT "Motor Acc" //MK3
#define MSG_STORE_EPROM "Save Settings" //MK3
#define MSG_LOAD_EPROM "Load Settings" //MK3
#define MSG_RESTORE_FAILSAFE "Reset Settings" //MK3
#define MSG_TEMPERATURE "Temperature" //MK3
#define MSG_MOTION "Motion" //MK3
#define MSG_FILAMENT_PID "Pulling Unit" //MK3
#define MSG_PAUSE_EXTRUDER "STOP Extruder" //MK3
#define MSG_RESUME_EXTRUDER "START Extruder" //MK3
#define MSG_AUTO_EXTRUDER "Automatic Pulling" //MK3
#define MSG_MAN_EXTRUDER "Manually Pulling" //MK3
#define MSG_CLEAR_STATS "Clear Statistics" //MK3
#define MSG_ENABLE_STATS "Enable Statistics" //MK3
#define MSG_DISABLE_STATS "Pause Statistics" //MK3
#define MSG_VMAX "Vmax " //MK3
#define MSG_EXTRUDER_RUNNING "Extruder running" //MK3
#define MSG_EXTRUDER_STOPPED "Extruder stopped" //MK3
#define MSG_EXTRUDE_COMPLETE "Extrusion complete" //MK3
  // LCD Menu Messages ferz
  #define MSG_SD_INSERTED "Card inserted"           
	#define MSG_SD_REMOVED "Card removed"
	#define MSG_AUTOSTART "Autostart"
	#define MSG_DISABLE_STEPPERS "Disable steppers"
	#define MSG_AUTO_HOME "Auto home"
	#define MSG_SET_ORIGIN "Set origin"
	#define MSG_PREHEAT_PLA "Preheat PLA"
	#define MSG_PREHEAT_PLA0 "Preheat PLA 1"
	#define MSG_PREHEAT_PLA1 "Preheat PLA 2"
	#define MSG_PREHEAT_PLA2 "Preheat PLA 3"
	#define MSG_PREHEAT_PLA012 "Preheat PLA All"
	#define MSG_PREHEAT_PLA_BEDONLY "Preheat PLA Bed"
	#define MSG_PREHEAT_PLA_SETTINGS "Preheat PLA conf"
	#define MSG_PREHEAT_ABS0 "Preheat ABS 1"
	#define MSG_PREHEAT_ABS1 "Preheat ABS 2"
	#define MSG_PREHEAT_ABS2 "Preheat ABS 3"
	#define MSG_PREHEAT_ABS012 "Preheat ABS All"
	#define MSG_PREHEAT_ABS_BEDONLY "Preheat ABS Bed"
	#define MSG_SWITCH_PS_ON "Switch power on"
	#define MSG_SWITCH_PS_OFF "Switch power off"
	#define MSG_EXTRUDE "Extrude"
	#define MSG_RETRACT "Retract"
	#define MSG_MOVE_AXIS "Move axis"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED   "Puller mm/s"
	#define MSG_NOZZLE1 "Nozzle2"
	#define MSG_NOZZLE2 "Nozzle3"
	#define MSG_BED "Bed"
	#define MSG_FLOW "Flow"
	#define MSG_FLOW0 "Flow 0"
	#define MSG_FLOW1 "Flow 1"
	#define MSG_FLOW2 "Flow 2"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Fact"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_ACC  "Accel"
	#define MSG_VXY_JERK "Vxy-jerk" 
	#define MSG_VZ_JERK "Vz-jerk" 
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VTrav min"
	#define MSG_AMAX "Amax "
	#define MSG_XSTEPS "Xsteps/mm"
	#define MSG_YSTEPS "Ysteps/mm"
	#define MSG_ZSTEPS "Zsteps/mm"
	#define MSG_RECTRACT "Rectract"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_REFRESH "Refresh"
	#define MSG_PAUSE_PRINT "Pause print"
	#define MSG_RESUME_PRINT "Resume print"
	#define MSG_STOP_PRINT "Stop print"
	#define MSG_CARD_MENU "Print from SD"
	#define MSG_NO_CARD "No SD card"
	#define MSG_DWELL "Sleep..."
	#define MSG_USERWAIT "Wait for user..."
	#define MSG_RESUMING "Resuming print"
	#define MSG_NO_MOVE "No move."
	#define MSG_KILLED "KILLED. "
	#define MSG_STOPPED "STOPPED. "
	#define MSG_CONTROL_RETRACT  "Retract mm"
	#define MSG_CONTROL_RETRACTF "Retract  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Init. SD card"
	#define MSG_CNG_SDCARD "Change SD card"
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"

// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line: "
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line: "
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line: "
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Invalid extruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Invalid extruder "
	#define MSG_M221_INVALID_EXTRUDER "M221 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temperature"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done.       "
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Mackerel V1; Marlin mashup for Filament Extruders FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Count X: "
	#define MSG_ERR_KILLED "Printer halted. kill() called!"
	#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
	#define MSG_RESEND "Resend: "
	#define MSG_UNKNOWN_COMMAND "Unknown command: \""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Reporting endstop status"
	#define MSG_ENDSTOP_HIT "TRIGGERED"
	#define MSG_ENDSTOP_OPEN "open"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened: "
	#define MSG_SD_SIZE " Size: "
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir: "
	#define MSG_STEPPER_TOO_HIGH "Steprate too high: "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"

#endif

#if LANGUAGE_CHOICE == 9

// LCD Menu Messages
// Please note these are limited to 17 characters!
#define MSG_DISPLAY_SensROmax "Senzor Max" //MK3
#define MSG_DISPLAY_SensROmin "Senzor Min" //MK3
#define MSG_DISPLAY_Pcirc "Circ Rotii" //MK3
#define MSG_DISPLAY_Factor2 "Factor 2" //MK3
#define MSG_DISPLAY_Factor1 "Factor 1" //MK3
#define MSG_DISPLAY_Meter "m" //MK3
#define MSG_DISPLAY_Length " L:" //MK3
#define MSG_DISPLAY_S "S:" //MK3
#define MSG_DISPLAY_AV "  Med:" //MK3
#define MSG_DISPLAY_MinWidth "  Min:" //MK3
#define MSG_DISPLAY_MaxWidth "  Max:" //MK3
#define MSG_DISPLAY_rpm2 " rpm " //MK3
#define MSG_DISPLAY_COLD "Rece" //MK3
#define MSG_DISPLAY_OFF "Opr " //MK3
#define MSG_DISPLAY_E "E:" //MK3
#define MSG_DISPLAY_rpm "rpm " //MK3
#define MSG_DISPLAY_Puller "T:" //MK3
#define MSG_SAFETY_COOLDOWN "Racire de sig." //MK3
#define MSG_EX_WARM_UP "Incalzire extrudor" //MK3
#define MSG_EX_COOL "Racire extrudor" //MK3
#define MSG_AUTOT_SEQU "Secventa Autotune" //MK3
#define MSG_AUTOT_COMPL "Autotune Complet" //MK3
#define MSG_MIN_TEMP "Tempmin" //MK3
#define MSG_MAX_TEMP "Tempmax" //MK3
#define MSG_thermal_runaway "Er. Incalzire" //MK3
#define MSG_sensor_runout "Er. senzor" //MK3
#define WELCOME_MSG MACHINE_NAME "   " //MK3
#define MSG_MAIN "Meniu pr." //MK3
#define MSG_PREHEAT_ABS "PreInc." //MK3
#define MSG_PREHEAT_ABS_SETTINGS "Setare preInc." //MK3
#define MSG_COOLDOWN "Racire" //MK3
#define MSG_MOVE_E "Extrudor" //MK3
#define MSG_MOVE_P "T" //MK3
#define MSG_EXT_RPM "Rpm extrudor" //MK3
#define MSG_NOZZLE "Duza" //MK3
#define MSG_HEATER "Temperatura" //MK3
#define MSG_LENGTH_CUTOFF "L Taiere" //MK3
#define MSG_FILAMENT "Poz Senzor" //MK3
#define MSG_WINDER_SPEED "Vit. vent" //MK3
#define MSG_WINDER_RPM_FACTOR "Factor RPM Infas." //MK3
#define MSG_PID_P "PID-P" //MK3
#define MSG_PID_I "PID-I" //MK3
#define MSG_PID_D "PID-D" //MK3
#define MSG_PID_C "PiD-C" //MK3
#define MSG_AUTOTUNE "PID Autotune" //MK3
#define MSG_CONTROL "Control" //MK3
#define MSG_VE_JERK "Ve-jerk" //MK3
#define MSG_E "e" //MK3
#define MSG_WATCH "Ecran start" //MK3
#define MSG_STATS "Statistica filament" //MK3
#define MSG_PREPARE "Setari" //MK3
#define MSG_TUNE "Setari" //MK3
#define MSG_ESTEPS "Esteps/rev/100" //MK3
#define MSG_PSTEPS "Psteps/mm" //MK3
#define MSG_A_RETRACT "Acc Motor" //MK3
#define MSG_STORE_EPROM "Salv. setari" //MK3
#define MSG_LOAD_EPROM "Incarcati set" //MK3
#define MSG_RESTORE_FAILSAFE "Resetare set." //MK3
#define MSG_TEMPERATURE "Temperatura" //MK3
#define MSG_MOTION "Misc." //MK3
#define MSG_FILAMENT_PID "Unitate trac" //MK3
#define MSG_PAUSE_EXTRUDER "OPRIRE Extrudor" //MK3
#define MSG_RESUME_EXTRUDER "START Extrudor" //MK3
#define MSG_AUTO_EXTRUDER "Tractiune autom." //MK3
#define MSG_MAN_EXTRUDER "Tractiune man." //MK3
#define MSG_CLEAR_STATS "Sterge statist." //MK3
#define MSG_ENABLE_STATS "Activare statist." //MK3
#define MSG_DISABLE_STATS "Pauza Statistici" //MK3
#define MSG_VMAX "Vmax " //MK3
#define MSG_EXTRUDER_RUNNING "Extrudorul funct" //MK3
#define MSG_EXTRUDER_STOPPED "Extrudor oprit" //MK3
#define MSG_EXTRUDE_COMPLETE "Extrudare completa" //MK3
  // LCD Menu Messages ferz
  #define MSG_SD_INSERTED "Card inserted"           
	#define MSG_SD_REMOVED "Card removed"
	#define MSG_AUTOSTART "Autostart"
	#define MSG_DISABLE_STEPPERS "Disable steppers"
	#define MSG_AUTO_HOME "Auto home"
	#define MSG_SET_ORIGIN "Set origin"
	#define MSG_PREHEAT_PLA "Preheat PLA"
	#define MSG_PREHEAT_PLA0 "Preheat PLA 1"
	#define MSG_PREHEAT_PLA1 "Preheat PLA 2"
	#define MSG_PREHEAT_PLA2 "Preheat PLA 3"
	#define MSG_PREHEAT_PLA012 "Preheat PLA All"
	#define MSG_PREHEAT_PLA_BEDONLY "Preheat PLA Bed"
	#define MSG_PREHEAT_PLA_SETTINGS "Preheat PLA conf"
	#define MSG_PREHEAT_ABS0 "Preheat ABS 1"
	#define MSG_PREHEAT_ABS1 "Preheat ABS 2"
	#define MSG_PREHEAT_ABS2 "Preheat ABS 3"
	#define MSG_PREHEAT_ABS012 "Preheat ABS All"
	#define MSG_PREHEAT_ABS_BEDONLY "Preheat ABS Bed"
	#define MSG_SWITCH_PS_ON "Switch power on"
	#define MSG_SWITCH_PS_OFF "Switch power off"
	#define MSG_EXTRUDE "Extrude"
	#define MSG_RETRACT "Retract"
	#define MSG_MOVE_AXIS "Move axis"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED   "Puller mm/s"
	#define MSG_NOZZLE1 "Nozzle2"
	#define MSG_NOZZLE2 "Nozzle3"
	#define MSG_BED "Bed"
	#define MSG_FLOW "Flow"
	#define MSG_FLOW0 "Flow 0"
	#define MSG_FLOW1 "Flow 1"
	#define MSG_FLOW2 "Flow 2"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Fact"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_ACC  "Accel"
	#define MSG_VXY_JERK "Vxy-jerk" 
	#define MSG_VZ_JERK "Vz-jerk" 
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VTrav min"
	#define MSG_AMAX "Amax "
	#define MSG_XSTEPS "Xsteps/mm"
	#define MSG_YSTEPS "Ysteps/mm"
	#define MSG_ZSTEPS "Zsteps/mm"
	#define MSG_RECTRACT "Rectract"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_REFRESH "Refresh"
	#define MSG_PAUSE_PRINT "Pause print"
	#define MSG_RESUME_PRINT "Resume print"
	#define MSG_STOP_PRINT "Stop print"
	#define MSG_CARD_MENU "Print from SD"
	#define MSG_NO_CARD "No SD card"
	#define MSG_DWELL "Sleep..."
	#define MSG_USERWAIT "Wait for user..."
	#define MSG_RESUMING "Resuming print"
	#define MSG_NO_MOVE "No move."
	#define MSG_KILLED "KILLED. "
	#define MSG_STOPPED "STOPPED. "
	#define MSG_CONTROL_RETRACT  "Retract mm"
	#define MSG_CONTROL_RETRACTF "Retract  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Init. SD card"
	#define MSG_CNG_SDCARD "Change SD card"
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"

// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line: "
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line: "
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line: "
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Invalid extruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Invalid extruder "
	#define MSG_M221_INVALID_EXTRUDER "M221 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temperature"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done.       "
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Mackerel V1; Marlin mashup for Filament Extruders FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Count X: "
	#define MSG_ERR_KILLED "Printer halted. kill() called!"
	#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
	#define MSG_RESEND "Resend: "
	#define MSG_UNKNOWN_COMMAND "Unknown command: \""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Reporting endstop status"
	#define MSG_ENDSTOP_HIT "TRIGGERED"
	#define MSG_ENDSTOP_OPEN "open"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened: "
	#define MSG_SD_SIZE " Size: "
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir: "
	#define MSG_STEPPER_TOO_HIGH "Steprate too high: "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"

#endif

#if LANGUAGE_CHOICE == 10 //Dutch

// LCD Menu Messages
// Please note these are limited to 17 characters!
 #define MSG_DISPLAY_SensROmax "Sensor Max" //MK3
#define MSG_DISPLAY_SensROmin "Sensor Min" //MK3
#define MSG_DISPLAY_Pcirc "Wiel circ" //MK3
#define MSG_DISPLAY_Factor2 "Factor 2" //MK3
#define MSG_DISPLAY_Factor1 "Factor 1" //MK3
#define MSG_DISPLAY_Meter "m" //MK3
#define MSG_DISPLAY_Length "L:" //MK3
#define MSG_DISPLAY_S "S:" //MK3
#define MSG_DISPLAY_AV "Gem:" //MK3
#define MSG_DISPLAY_MinWidth "Min:" //MK3
#define MSG_DISPLAY_MaxWidth "Max:" //MK3
#define MSG_DISPLAY_rpm2 "rpm" //MK3
#define MSG_DISPLAY_COLD "Koud" //MK3
#define MSG_DISPLAY_OFF "Uit" //MK3
#define MSG_DISPLAY_E "E:" //MK3
#define MSG_DISPLAY_rpm "rpm" //MK3
#define MSG_DISPLAY_Puller "P:" //MK3
#define MSG_SAFETY_COOLDOWN "Koeling (vlghd)" //MK3
#define MSG_EX_WARM_UP "Extruder Opwarmen" //MK3
#define MSG_EX_COOL "Extruder Koelen" //MK3
#define MSG_AUTOT_SEQU "Autotune Sequence" //MK3
#define MSG_AUTOT_COMPL "Autotune Klaar" //MK3
#define MSG_MIN_TEMP "Mintemp" //MK3
#define MSG_MAX_TEMP "Maxtemp" //MK3
#define MSG_thermal_runaway "Warmtefout" //MK3
#define MSG_sensor_runout "Sensorfout" //MK3
#define WELCOME_MSG MACHINE_NAME "   " //MK3
#define MSG_MAIN "Hoofdmenu" //MK3
#define MSG_PREHEAT_ABS "Voorvrw" //MK3
#define MSG_PREHEAT_ABS_SETTINGS "Voorvrw Instl" //MK3
#define MSG_COOLDOWN "Koelen" //MK3
#define MSG_MOVE_E "Extruder" //MK3
#define MSG_MOVE_P "P" //MK3
#define MSG_EXT_RPM "Extruder rpm" //MK3
#define MSG_NOZZLE "Nozzle" //MK3
#define MSG_HEATER "Temperatuur" //MK3
#define MSG_LENGTH_CUTOFF "L Cutoff" //MK3
#define MSG_FILAMENT "Sensor Pos" //MK3
#define MSG_WINDER_SPEED "Fan Snelh" //MK3
#define MSG_WINDER_RPM_FACTOR "Winder RPM Factor" //MK3
#define MSG_PID_P "PID-P" //MK3
#define MSG_PID_I "PID-I" //MK3
#define MSG_PID_D "PID-D" //MK3
#define MSG_PID_C "PID-C" //MK3
#define MSG_AUTOTUNE "PID Autotune" //MK3
#define MSG_CONTROL "Control" //MK3
#define MSG_VE_JERK "Ve-jerk" //MK3
#define MSG_E "e" //MK3
#define MSG_WATCH "Startscherm" //MK3
#define MSG_STATS "Filament Stats" //MK3
#define MSG_PREPARE "Instel." //MK3
#define MSG_TUNE "Instel." //MK3
#define MSG_ESTEPS "Esteps/rev/100" //MK3
#define MSG_PSTEPS "Psteps/mm" //MK3
#define MSG_A_RETRACT "Motor Acc" //MK3
#define MSG_STORE_EPROM "Instel. Opsl." //MK3
#define MSG_LOAD_EPROM "Laad Instel." //MK3
#define MSG_RESTORE_FAILSAFE "Reset Instel." //MK3
#define MSG_TEMPERATURE "Temperatuur" //MK3
#define MSG_MOTION "Motion" //MK3
#define MSG_FILAMENT_PID "Trekunit" //MK3
#define MSG_PAUSE_EXTRUDER "STOP Extruder" //MK3
#define MSG_RESUME_EXTRUDER "START Extruder" //MK3
#define MSG_AUTO_EXTRUDER "Auto Trekken" //MK3
#define MSG_MAN_EXTRUDER "Handmat. Trekken" //MK3
#define MSG_CLEAR_STATS "Wis Stats" //MK3
#define MSG_ENABLE_STATS "Stats Inschak." //MK3
#define MSG_DISABLE_STATS "Stats Pauzeren" //MK3
#define MSG_VMAX "Vmax " //MK3
#define MSG_EXTRUDER_RUNNING "Extruder actief" //MK3
#define MSG_EXTRUDER_STOPPED "Extruder gestopt" //MK3
#define MSG_EXTRUDE_COMPLETE "Extrusion klaar" //MK3
  // LCD Menu Messages ferz
  #define MSG_SD_INSERTED "Card inserted"           
	#define MSG_SD_REMOVED "Card removed"
	#define MSG_AUTOSTART "Autostart"
	#define MSG_DISABLE_STEPPERS "Disable steppers"
	#define MSG_AUTO_HOME "Auto home"
	#define MSG_SET_ORIGIN "Set origin"
	#define MSG_PREHEAT_PLA "Preheat PLA"
	#define MSG_PREHEAT_PLA0 "Preheat PLA 1"
	#define MSG_PREHEAT_PLA1 "Preheat PLA 2"
	#define MSG_PREHEAT_PLA2 "Preheat PLA 3"
	#define MSG_PREHEAT_PLA012 "Preheat PLA All"
	#define MSG_PREHEAT_PLA_BEDONLY "Preheat PLA Bed"
	#define MSG_PREHEAT_PLA_SETTINGS "Preheat PLA conf"
	#define MSG_PREHEAT_ABS0 "Preheat ABS 1"
	#define MSG_PREHEAT_ABS1 "Preheat ABS 2"
	#define MSG_PREHEAT_ABS2 "Preheat ABS 3"
	#define MSG_PREHEAT_ABS012 "Preheat ABS All"
	#define MSG_PREHEAT_ABS_BEDONLY "Preheat ABS Bed"
	#define MSG_SWITCH_PS_ON "Switch power on"
	#define MSG_SWITCH_PS_OFF "Switch power off"
	#define MSG_EXTRUDE "Extrude"
	#define MSG_RETRACT "Retract"
	#define MSG_MOVE_AXIS "Move axis"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED   "Puller mm/s"
	#define MSG_NOZZLE1 "Nozzle2"
	#define MSG_NOZZLE2 "Nozzle3"
	#define MSG_BED "Bed"
	#define MSG_FLOW "Flow"
	#define MSG_FLOW0 "Flow 0"
	#define MSG_FLOW1 "Flow 1"
	#define MSG_FLOW2 "Flow 2"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Fact"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_ACC  "Accel"
	#define MSG_VXY_JERK "Vxy-jerk" 
	#define MSG_VZ_JERK "Vz-jerk" 
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VTrav min"
	#define MSG_AMAX "Amax "
	#define MSG_XSTEPS "Xsteps/mm"
	#define MSG_YSTEPS "Ysteps/mm"
	#define MSG_ZSTEPS "Zsteps/mm"
	#define MSG_RECTRACT "Rectract"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_REFRESH "Refresh"
	#define MSG_PAUSE_PRINT "Pause print"
	#define MSG_RESUME_PRINT "Resume print"
	#define MSG_STOP_PRINT "Stop print"
	#define MSG_CARD_MENU "Print from SD"
	#define MSG_NO_CARD "No SD card"
	#define MSG_DWELL "Sleep..."
	#define MSG_USERWAIT "Wait for user..."
	#define MSG_RESUMING "Resuming print"
	#define MSG_NO_MOVE "No move."
	#define MSG_KILLED "KILLED. "
	#define MSG_STOPPED "STOPPED. "
	#define MSG_CONTROL_RETRACT  "Retract mm"
	#define MSG_CONTROL_RETRACTF "Retract  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Init. SD card"
	#define MSG_CNG_SDCARD "Change SD card"
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"

// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line: "
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line: "
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line: "
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Invalid extruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Invalid extruder "
	#define MSG_M221_INVALID_EXTRUDER "M221 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temperature"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done.       "
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Mackerel V1; Marlin mashup for Filament Extruders FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Count X: "
	#define MSG_ERR_KILLED "Printer halted. kill() called!"
	#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
	#define MSG_RESEND "Resend: "
	#define MSG_UNKNOWN_COMMAND "Unknown command: \""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Reporting endstop status"
	#define MSG_ENDSTOP_HIT "TRIGGERED"
	#define MSG_ENDSTOP_OPEN "open"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened: "
	#define MSG_SD_SIZE " Size: "
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir: "
	#define MSG_STEPPER_TOO_HIGH "Steprate too high: "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"

#endif

#if LANGUAGE_CHOICE == 11

// LCD Menu Messages MK3 Hungarian
// Please note these are limited to 17 characters!
#define MSG_DISPLAY_SensROmax "erzekelo max" //MK3
#define MSG_DISPLAY_SensROmin "erzekelo min" //MK3
#define MSG_DISPLAY_Pcirc "Kerekmeret" //MK3
#define MSG_DISPLAY_Factor2 "Factor 2" //MK3
#define MSG_DISPLAY_Factor1 "Factor 1" //MK3
#define MSG_DISPLAY_Meter "m" //MK3
#define MSG_DISPLAY_Length " L:" //MK3
#define MSG_DISPLAY_S "S:" //MK3
#define MSG_DISPLAY_AV " atl:" //MK3
#define MSG_DISPLAY_MinWidth " Min:" //MK3
#define MSG_DISPLAY_MaxWidth " Max:" //MK3
#define MSG_DISPLAY_rpm2 " rpm " //MK3
#define MSG_DISPLAY_COLD "Hide" //MK3
#define MSG_DISPLAY_OFF "Ki " //MK3
#define MSG_DISPLAY_E "E:" //MK3
#define MSG_DISPLAY_rpm "rpm " //MK3
#define MSG_DISPLAY_Puller "H:" //MK3
#define MSG_SAFETY_COOLDOWN "Biztonsagi lehules" //MK3
#define MSG_EX_WARM_UP "Extruder melegites" //MK3
#define MSG_EX_COOL "Extruder hutes" //MK3
#define MSG_AUTOT_SEQU "Autotune szekvencia" //MK3
#define MSG_AUTOT_COMPL "Autotune Kesz" //MK3
#define MSG_MIN_TEMP "Minho" //MK3
#define MSG_MAX_TEMP "Maxho" //MK3
#define MSG_thermal_runaway "Futesi hiba" //MK3
#define MSG_sensor_runout "erzekelo hiba" //MK3
#define WELCOME_MSG MACHINE_NAME " " //MK3
#define MSG_MAIN "Fomenu" //MK3
#define MSG_PREHEAT_ABS "Elomelegites" //MK3
#define MSG_PREHEAT_ABS_SETTINGS "Elomeleg. Beall." //MK3
#define MSG_COOLDOWN "Lehules" //MK3
#define MSG_MOVE_E "Extruder" //MK3
#define MSG_MOVE_P "H" //MK3
#define MSG_EXT_RPM "Extruder rpm" //MK3
#define MSG_NOZZLE "Fuvoka" //MK3
#define MSG_HEATER "Homerseklet" //MK3
#define MSG_LENGTH_CUTOFF "Celhossz" //MK3
#define MSG_FILAMENT "Erzekelo pozicio" //MK3
#define MSG_WINDER_SPEED "Ventilator fordulatszam" //MK3
#define MSG_WINDER_RPM_FACTOR "Winder RPM Factor" //MK3
#define MSG_PID_P "PID-P" //MK3
#define MSG_PID_I "PID-I" //MK3
#define MSG_PID_D "PID-D" //MK3
#define MSG_PID_C "PiD-C" //MK3
#define MSG_AUTOTUNE "PID Autotune" //MK3
#define MSG_CONTROL "Vezerles" //MK3
#define MSG_VE_JERK "Ve-rugo" //MK3
#define MSG_E "e" //MK3
#define MSG_WATCH "Start kepernyo" //MK3
#define MSG_STATS "Szalstatisztika" //MK3
#define MSG_PREPARE "Beallitasok" //MK3
#define MSG_TUNE "Beallitasok" //MK3
#define MSG_ESTEPS "Esteps/rev/100" //MK3
#define MSG_PSTEPS "Psteps/mm" //MK3
#define MSG_A_RETRACT "Motor Acc" //MK3
#define MSG_STORE_EPROM "Beallitasok mentese" //MK3
#define MSG_LOAD_EPROM "Beallitasok betoltese" //MK3
#define MSG_RESTORE_FAILSAFE "Beallitasok visszaallitasa" //MK3
#define MSG_TEMPERATURE "Homerseklet" //MK3
#define MSG_MOTION "Mozgas" //MK3
#define MSG_FILAMENT_PID "Huzoegyseg" //MK3
#define MSG_PAUSE_EXTRUDER "STOP Extruder" //MK3
#define MSG_RESUME_EXTRUDER "INDITSD Extruder " //MK3
#define MSG_AUTO_EXTRUDER "Autom. huzas" //MK3
#define MSG_MAN_EXTRUDER "Kezi huzas" //MK3
#define MSG_CLEAR_STATS "Stat. torlese" //MK3
#define MSG_ENABLE_STATS "Stat. Enged." //MK3
#define MSG_DISABLE_STATS "Stat. Szün." //MK3
#define MSG_VMAX "Vmax " //MK3
#define MSG_EXTRUDER_RUNNING "Extruder fut" //MK3
#define MSG_EXTRUDER_STOPPED "Extruder leallitva" //MK3
#define MSG_EXTRUDE_COMPLETE "Extrudalas befejezve" //MK3
  // LCD Menu Messages ferz
  #define MSG_SD_INSERTED "Card inserted"           
	#define MSG_SD_REMOVED "Card removed"
	#define MSG_AUTOSTART "Autostart"
	#define MSG_DISABLE_STEPPERS "Disable steppers"
	#define MSG_AUTO_HOME "Auto home"
	#define MSG_SET_ORIGIN "Set origin"
	#define MSG_PREHEAT_PLA "Preheat PLA"
	#define MSG_PREHEAT_PLA0 "Preheat PLA 1"
	#define MSG_PREHEAT_PLA1 "Preheat PLA 2"
	#define MSG_PREHEAT_PLA2 "Preheat PLA 3"
	#define MSG_PREHEAT_PLA012 "Preheat PLA All"
	#define MSG_PREHEAT_PLA_BEDONLY "Preheat PLA Bed"
	#define MSG_PREHEAT_PLA_SETTINGS "Preheat PLA conf"
	#define MSG_PREHEAT_ABS0 "Preheat ABS 1"
	#define MSG_PREHEAT_ABS1 "Preheat ABS 2"
	#define MSG_PREHEAT_ABS2 "Preheat ABS 3"
	#define MSG_PREHEAT_ABS012 "Preheat ABS All"
	#define MSG_PREHEAT_ABS_BEDONLY "Preheat ABS Bed"
	#define MSG_SWITCH_PS_ON "Switch power on"
	#define MSG_SWITCH_PS_OFF "Switch power off"
	#define MSG_EXTRUDE "Extrude"
	#define MSG_RETRACT "Retract"
	#define MSG_MOVE_AXIS "Move axis"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED   "Puller mm/s"
	#define MSG_NOZZLE1 "Nozzle2"
	#define MSG_NOZZLE2 "Nozzle3"
	#define MSG_BED "Bed"
	#define MSG_FLOW "Flow"
	#define MSG_FLOW0 "Flow 0"
	#define MSG_FLOW1 "Flow 1"
	#define MSG_FLOW2 "Flow 2"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Fact"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_ACC  "Accel"
	#define MSG_VXY_JERK "Vxy-jerk" 
	#define MSG_VZ_JERK "Vz-jerk" 
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VTrav min"
	#define MSG_AMAX "Amax "
	#define MSG_XSTEPS "Xsteps/mm"
	#define MSG_YSTEPS "Ysteps/mm"
	#define MSG_ZSTEPS "Zsteps/mm"
	#define MSG_RECTRACT "Rectract"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_REFRESH "Refresh"
	#define MSG_PAUSE_PRINT "Pause print"
	#define MSG_RESUME_PRINT "Resume print"
	#define MSG_STOP_PRINT "Stop print"
	#define MSG_CARD_MENU "Print from SD"
	#define MSG_NO_CARD "No SD card"
	#define MSG_DWELL "Sleep..."
	#define MSG_USERWAIT "Wait for user..."
	#define MSG_RESUMING "Resuming print"
	#define MSG_NO_MOVE "No move."
	#define MSG_KILLED "KILLED. "
	#define MSG_STOPPED "STOPPED. "
	#define MSG_CONTROL_RETRACT  "Retract mm"
	#define MSG_CONTROL_RETRACTF "Retract  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Init. SD card"
	#define MSG_CNG_SDCARD "Change SD card"
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"

// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line: "
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line: "
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line: "
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Invalid extruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Invalid extruder "
	#define MSG_M221_INVALID_EXTRUDER "M221 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temperature"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done.       "
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Mackerel V1; Marlin mashup for Filament Extruders FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Count X: "
	#define MSG_ERR_KILLED "Printer halted. kill() called!"
	#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
	#define MSG_RESEND "Resend: "
	#define MSG_UNKNOWN_COMMAND "Unknown command: \""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Reporting endstop status"
	#define MSG_ENDSTOP_HIT "TRIGGERED"
	#define MSG_ENDSTOP_OPEN "open"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened: "
	#define MSG_SD_SIZE " Size: "
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir: "
	#define MSG_STEPPER_TOO_HIGH "Steprate too high: "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"

#endif


#if LANGUAGE_CHOICE == 12

// LCD Menu Messages MK3 Indonesian
// Please note these are limited to 17 characters!
#define MSG_DISPLAY_SensROmax "Sensor Max" //MK3
#define MSG_DISPLAY_SensROmin "Sensor Min" //MK3
#define MSG_DISPLAY_Pcirc "Kel. Roda" //MK3
#define MSG_DISPLAY_Factor2 "Faktor 2" //MK3
#define MSG_DISPLAY_Factor1 "Faktor 1" //MK3
#define MSG_DISPLAY_Meter "m" //MK3
#define MSG_DISPLAY_Length " P:" //MK3
#define MSG_DISPLAY_S "S:" //MK3
#define MSG_DISPLAY_AV "  Avg:" //MK3
#define MSG_DISPLAY_MinWidth "  Min:" //MK3
#define MSG_DISPLAY_MaxWidth "  Max:" //MK3
#define MSG_DISPLAY_rpm2 " rpm " //MK3
#define MSG_DISPLAY_COLD "Dngn" //MK3
#define MSG_DISPLAY_OFF "Off " //MK3
#define MSG_DISPLAY_E "E:" //MK3
#define MSG_DISPLAY_rpm "rpm " //MK3
#define MSG_DISPLAY_Puller "P:" //MK3
#define MSG_SAFETY_COOLDOWN "Penyejukan Aman" //MK3
#define MSG_EX_WARM_UP "Memanaskan Extruder" //MK3
#define MSG_EX_COOL "Sejukan Extruder" //MK3
#define MSG_AUTOT_SEQU "Urutan Autotune" //MK3
#define MSG_AUTOT_COMPL "Autotune Selesai" //MK3
#define MSG_MIN_TEMP "Mintemp" //MK3
#define MSG_MAX_TEMP "Maxtemp" //MK3
#define MSG_thermal_runaway "Memanasi Eror" //MK3
#define MSG_sensor_runout "Sensor Eror" //MK3
#define WELCOME_MSG MACHINE_NAME "   " //MK3
#define MSG_MAIN "Menu awal" //MK3
#define MSG_PREHEAT_ABS "Pns.awl" //MK3
#define MSG_PREHEAT_ABS_SETTINGS "Setelan Pns.awl" //MK3
#define MSG_COOLDOWN "Sejukan" //MK3
#define MSG_MOVE_E "Extruder" //MK3
#define MSG_MOVE_P "T" //MK3
#define MSG_EXT_RPM "Extruder rpm" //MK3
#define MSG_NOZZLE "Nozzle" //MK3
#define MSG_HEATER "Temperatur" //MK3
#define MSG_LENGTH_CUTOFF "Batas P" //MK3
#define MSG_FILAMENT "Sensor Pos" //MK3
#define MSG_WINDER_SPEED "Kec Kipas" //MK3
#define MSG_WINDER_RPM_FACTOR "Winder RPM Factor" //MK3
#define MSG_PID_P "PID-P" //MK3
#define MSG_PID_I "PID-I" //MK3
#define MSG_PID_D "PID-D" //MK3
#define MSG_PID_C "PiD-C" //MK3
#define MSG_AUTOTUNE "PID Autotune" //MK3
#define MSG_CONTROL "Kontrol" //MK3
#define MSG_VE_JERK "Ve-jerk" //MK3
#define MSG_E "e" //MK3
#define MSG_WATCH "Mulai Layar" //MK3
#define MSG_STATS "Statistik Filamen" //MK3
#define MSG_PREPARE "Setelan" //MK3
#define MSG_TUNE "Setelan" //MK3
#define MSG_ESTEPS "Esteps/rev/100" //MK3
#define MSG_PSTEPS "Psteps/mm" //MK3
#define MSG_A_RETRACT "Motor Acc" //MK3
#define MSG_STORE_EPROM "Simp. Setelan" //MK3
#define MSG_LOAD_EPROM "Muat Setelan" //MK3
#define MSG_RESTORE_FAILSAFE "Reset Setelan" //MK3
#define MSG_TEMPERATURE "Temperatur" //MK3
#define MSG_MOTION "Gerak" //MK3
#define MSG_FILAMENT_PID "Unit Penarik" //MK3
#define MSG_PAUSE_EXTRUDER "BERHENTI Extruder" //MK3
#define MSG_RESUME_EXTRUDER "MULAI Extruder" //MK3
#define MSG_AUTO_EXTRUDER "Penarik Otomatis" //MK3
#define MSG_MAN_EXTRUDER "Penarik Manual" //MK3
#define MSG_CLEAR_STATS "Hapus Statistik" //MK3
#define MSG_ENABLE_STATS "Mulai Statistik" //MK3
#define MSG_DISABLE_STATS "Jeda Statistik" //MK3
#define MSG_VMAX "Vmax " //MK3
#define MSG_EXTRUDER_RUNNING "Extruder aktif" //MK3
#define MSG_EXTRUDER_STOPPED "Extruder henti" //MK3
#define MSG_EXTRUDE_COMPLETE "Ekstrusi selesai" //MK3
  // LCD Menu Messages ferz
  #define MSG_SD_INSERTED "Card inserted"           
	#define MSG_SD_REMOVED "Card removed"
	#define MSG_AUTOSTART "Autostart"
	#define MSG_DISABLE_STEPPERS "Disable steppers"
	#define MSG_AUTO_HOME "Auto home"
	#define MSG_SET_ORIGIN "Set origin"
	#define MSG_PREHEAT_PLA "Preheat PLA"
	#define MSG_PREHEAT_PLA0 "Preheat PLA 1"
	#define MSG_PREHEAT_PLA1 "Preheat PLA 2"
	#define MSG_PREHEAT_PLA2 "Preheat PLA 3"
	#define MSG_PREHEAT_PLA012 "Preheat PLA All"
	#define MSG_PREHEAT_PLA_BEDONLY "Preheat PLA Bed"
	#define MSG_PREHEAT_PLA_SETTINGS "Preheat PLA conf"
	#define MSG_PREHEAT_ABS0 "Preheat ABS 1"
	#define MSG_PREHEAT_ABS1 "Preheat ABS 2"
	#define MSG_PREHEAT_ABS2 "Preheat ABS 3"
	#define MSG_PREHEAT_ABS012 "Preheat ABS All"
	#define MSG_PREHEAT_ABS_BEDONLY "Preheat ABS Bed"
	#define MSG_SWITCH_PS_ON "Switch power on"
	#define MSG_SWITCH_PS_OFF "Switch power off"
	#define MSG_EXTRUDE "Extrude"
	#define MSG_RETRACT "Retract"
	#define MSG_MOVE_AXIS "Move axis"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED   "Puller mm/s"
	#define MSG_NOZZLE1 "Nozzle2"
	#define MSG_NOZZLE2 "Nozzle3"
	#define MSG_BED "Bed"
	#define MSG_FLOW "Flow"
	#define MSG_FLOW0 "Flow 0"
	#define MSG_FLOW1 "Flow 1"
	#define MSG_FLOW2 "Flow 2"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Fact"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_ACC  "Accel"
	#define MSG_VXY_JERK "Vxy-jerk" 
	#define MSG_VZ_JERK "Vz-jerk" 
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VTrav min"
	#define MSG_AMAX "Amax "
	#define MSG_XSTEPS "Xsteps/mm"
	#define MSG_YSTEPS "Ysteps/mm"
	#define MSG_ZSTEPS "Zsteps/mm"
	#define MSG_RECTRACT "Rectract"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_REFRESH "Refresh"
	#define MSG_PAUSE_PRINT "Pause print"
	#define MSG_RESUME_PRINT "Resume print"
	#define MSG_STOP_PRINT "Stop print"
	#define MSG_CARD_MENU "Print from SD"
	#define MSG_NO_CARD "No SD card"
	#define MSG_DWELL "Sleep..."
	#define MSG_USERWAIT "Wait for user..."
	#define MSG_RESUMING "Resuming print"
	#define MSG_NO_MOVE "No move."
	#define MSG_KILLED "KILLED. "
	#define MSG_STOPPED "STOPPED. "
	#define MSG_CONTROL_RETRACT  "Retract mm"
	#define MSG_CONTROL_RETRACTF "Retract  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Init. SD card"
	#define MSG_CNG_SDCARD "Change SD card"
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"

// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line: "
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line: "
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line: "
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Invalid extruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Invalid extruder "
	#define MSG_M221_INVALID_EXTRUDER "M221 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temperature"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done.       "
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Mackerel V1; Marlin mashup for Filament Extruders FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Count X: "
	#define MSG_ERR_KILLED "Printer halted. kill() called!"
	#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
	#define MSG_RESEND "Resend: "
	#define MSG_UNKNOWN_COMMAND "Unknown command: \""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Reporting endstop status"
	#define MSG_ENDSTOP_HIT "TRIGGERED"
	#define MSG_ENDSTOP_OPEN "open"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened: "
	#define MSG_SD_SIZE " Size: "
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir: "
	#define MSG_STEPPER_TOO_HIGH "Steprate too high: "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"

#endif

#if LANGUAGE_CHOICE == 13

// LCD Menu Messages MK3 Turkish
// Please note these are limited to 17 characters!
#define MSG_DISPLAY_SensROmax "Sensor Mks" //MK3
#define MSG_DISPLAY_SensROmin "Sensor Min" //MK3
#define MSG_DISPLAY_Pcirc "Teker cevr" //MK3
#define MSG_DISPLAY_Factor2 "Faktor 2" //MK3
#define MSG_DISPLAY_Factor1 "Faktor 1" //MK3
#define MSG_DISPLAY_Meter "m" //MK3
#define MSG_DISPLAY_Length " U:" //MK3
#define MSG_DISPLAY_S "S:" //MK3
#define MSG_DISPLAY_AV "  Ort:" //MK3
#define MSG_DISPLAY_MinWidth "  Min:" //MK3
#define MSG_DISPLAY_MaxWidth "  Mks:" //MK3
#define MSG_DISPLAY_rpm2 " rpm " //MK3
#define MSG_DISPLAY_COLD "Sguk" //MK3
#define MSG_DISPLAY_OFF "Kpl " //MK3
#define MSG_DISPLAY_E "E:" //MK3
#define MSG_DISPLAY_rpm "rpm " //MK3
#define MSG_DISPLAY_Puller "c:" //MK3
#define MSG_SAFETY_COOLDOWN "Bekleme Suresi" //MK3
#define MSG_EX_WARM_UP "Ekstruder isinma" //MK3
#define MSG_EX_COOL "Ekstruder Soguma" //MK3
#define MSG_AUTOT_SEQU "Oto Ayar Sekansi" //MK3
#define MSG_AUTOT_COMPL "Oto Ayar Tamam" //MK3
#define MSG_MIN_TEMP "Minsick" //MK3
#define MSG_MAX_TEMP "Mkssick" //MK3
#define MSG_thermal_runaway "isinma Hatasi" //MK3
#define MSG_sensor_runout "Sensor Hata" //MK3
#define WELCOME_MSG MACHINE_NAME "   " //MK3
#define MSG_MAIN "Ana menu" //MK3
#define MSG_PREHEAT_ABS "On ist." //MK3
#define MSG_PREHEAT_ABS_SETTINGS "on isitma Ayari" //MK3
#define MSG_COOLDOWN "Bk Sresi" //MK3
#define MSG_MOVE_E "Ekstrudr" //MK3
#define MSG_MOVE_P "c" //MK3
#define MSG_EXT_RPM "Ekstrudr rpm" //MK3
#define MSG_NOZZLE "Nozul" //MK3
#define MSG_HEATER "Sicaklik" //MK3
#define MSG_LENGTH_CUTOFF "U Kesim" //MK3
#define MSG_FILAMENT "Sensor Knm" //MK3
#define MSG_WINDER_SPEED "Fan Hizi" //MK3
#define MSG_WINDER_RPM_FACTOR "Winder RPM Factor" //MK3
#define MSG_PID_P "PID-P" //MK3
#define MSG_PID_I "PID-I" //MK3
#define MSG_PID_D "PID-D" //MK3
#define MSG_PID_C "PiD-C" //MK3
#define MSG_AUTOTUNE "PID Oto Ayar" //MK3
#define MSG_CONTROL "Kontrol" //MK3
#define MSG_VE_JERK "Ve-jerk" //MK3
#define MSG_E "e" //MK3
#define MSG_WATCH "Ekran Baslat" //MK3
#define MSG_STATS "Filament Istatistk" //MK3
#define MSG_PREPARE "Ayarlar" //MK3
#define MSG_TUNE "Ayarlar" //MK3
#define MSG_ESTEPS "Esteps/rev/100" //MK3
#define MSG_PSTEPS "Psteps/mm" //MK3
#define MSG_A_RETRACT "Motor Acc" //MK3
#define MSG_STORE_EPROM "Ayari Kaydet" //MK3
#define MSG_LOAD_EPROM "Ayari Yukle" //MK3
#define MSG_RESTORE_FAILSAFE "Ayari Sifirla" //MK3
#define MSG_TEMPERATURE "Sicaklik" //MK3
#define MSG_MOTION "Harekt" //MK3
#define MSG_FILAMENT_PID "cekme Birimi" //MK3
#define MSG_PAUSE_EXTRUDER "Ekstru DURDUR" //MK3
#define MSG_RESUME_EXTRUDER "Ekstru BASLAT" //MK3
#define MSG_AUTO_EXTRUDER "Otomatik cekme" //MK3
#define MSG_MAN_EXTRUDER "Manuel cekme" //MK3
#define MSG_CLEAR_STATS "Istastk Temizle" //MK3
#define MSG_ENABLE_STATS "Istatistikleri Ac" //MK3
#define MSG_DISABLE_STATS "Istatistk Durdur" //MK3
#define MSG_VMAX "Vmax " //MK3
#define MSG_EXTRUDER_RUNNING "Ekstrd calisiyor" //MK3
#define MSG_EXTRUDER_STOPPED "Ekstruder durdu" //MK3
#define MSG_EXTRUDE_COMPLETE "Ekstruzyon bitti" //MK3
  // LCD Menu Messages ferz
  #define MSG_SD_INSERTED "Card inserted"           
	#define MSG_SD_REMOVED "Card removed"
	#define MSG_AUTOSTART "Autostart"
	#define MSG_DISABLE_STEPPERS "Disable steppers"
	#define MSG_AUTO_HOME "Auto home"
	#define MSG_SET_ORIGIN "Set origin"
	#define MSG_PREHEAT_PLA "Preheat PLA"
	#define MSG_PREHEAT_PLA0 "Preheat PLA 1"
	#define MSG_PREHEAT_PLA1 "Preheat PLA 2"
	#define MSG_PREHEAT_PLA2 "Preheat PLA 3"
	#define MSG_PREHEAT_PLA012 "Preheat PLA All"
	#define MSG_PREHEAT_PLA_BEDONLY "Preheat PLA Bed"
	#define MSG_PREHEAT_PLA_SETTINGS "Preheat PLA conf"
	#define MSG_PREHEAT_ABS0 "Preheat ABS 1"
	#define MSG_PREHEAT_ABS1 "Preheat ABS 2"
	#define MSG_PREHEAT_ABS2 "Preheat ABS 3"
	#define MSG_PREHEAT_ABS012 "Preheat ABS All"
	#define MSG_PREHEAT_ABS_BEDONLY "Preheat ABS Bed"
	#define MSG_SWITCH_PS_ON "Switch power on"
	#define MSG_SWITCH_PS_OFF "Switch power off"
	#define MSG_EXTRUDE "Extrude"
	#define MSG_RETRACT "Retract"
	#define MSG_MOVE_AXIS "Move axis"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED   "Puller mm/s"
	#define MSG_NOZZLE1 "Nozzle2"
	#define MSG_NOZZLE2 "Nozzle3"
	#define MSG_BED "Bed"
	#define MSG_FLOW "Flow"
	#define MSG_FLOW0 "Flow 0"
	#define MSG_FLOW1 "Flow 1"
	#define MSG_FLOW2 "Flow 2"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Fact"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_ACC  "Accel"
	#define MSG_VXY_JERK "Vxy-jerk" 
	#define MSG_VZ_JERK "Vz-jerk" 
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VTrav min"
	#define MSG_AMAX "Amax "
	#define MSG_XSTEPS "Xsteps/mm"
	#define MSG_YSTEPS "Ysteps/mm"
	#define MSG_ZSTEPS "Zsteps/mm"
	#define MSG_RECTRACT "Rectract"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_REFRESH "Refresh"
	#define MSG_PAUSE_PRINT "Pause print"
	#define MSG_RESUME_PRINT "Resume print"
	#define MSG_STOP_PRINT "Stop print"
	#define MSG_CARD_MENU "Print from SD"
	#define MSG_NO_CARD "No SD card"
	#define MSG_DWELL "Sleep..."
	#define MSG_USERWAIT "Wait for user..."
	#define MSG_RESUMING "Resuming print"
	#define MSG_NO_MOVE "No move."
	#define MSG_KILLED "KILLED. "
	#define MSG_STOPPED "STOPPED. "
	#define MSG_CONTROL_RETRACT  "Retract mm"
	#define MSG_CONTROL_RETRACTF "Retract  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Init. SD card"
	#define MSG_CNG_SDCARD "Change SD card"
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"

// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line: "
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line: "
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line: "
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Invalid extruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Invalid extruder "
	#define MSG_M221_INVALID_EXTRUDER "M221 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temperature"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done.       "
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Mackerel V1; Marlin mashup for Filament Extruders FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Count X: "
	#define MSG_ERR_KILLED "Printer halted. kill() called!"
	#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
	#define MSG_RESEND "Resend: "
	#define MSG_UNKNOWN_COMMAND "Unknown command: \""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Reporting endstop status"
	#define MSG_ENDSTOP_HIT "TRIGGERED"
	#define MSG_ENDSTOP_OPEN "open"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened: "
	#define MSG_SD_SIZE " Size: "
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir: "
	#define MSG_STEPPER_TOO_HIGH "Steprate too high: "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"

#endif

#endif // ifndef LANGUAGE_H
