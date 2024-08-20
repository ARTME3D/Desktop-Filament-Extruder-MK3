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
// 6  Russian
// 7  Italian
// 8  Portuguese
// 9  Finnish
// 10 Aragonese
// 11 Dutch

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
		#define MACHINE_NAME "ARTME 3D MK2.5   "
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
#define SPLASH3 "   Extruder MK2.5   "


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
#define WELCOME_MSG MACHINE_NAME "  " //MK3
#define MSG_MAIN "Main menu" //MK3
#define MSG_PREHEAT_ABS "Preheat" //MK3
#define MSG_PREHEAT_ABS_SETTINGS "Preheat Setting" //MK3
#define MSG_COOLDOWN "Cooldown" //MK3
#define MSG_MOVE_E "Extruder" //MK3
#define MSG_MOVE_P "P" //MK3
#define MSG_EXT_RPM "Extruder Speed" //MK3
#define MSG_NOZZLE "Nozzle" //MK3
#define MSG_HEATER "Temperature" //MK3
#define MSG_LENGTH_CUTOFF "Length Cutoff" //MK3
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

/* alt Polnisch
	#define WELCOME_MSG MACHINE_NAME " gotowy."
	#define MSG_SD_INSERTED "Karta wlozona"
	#define MSG_SD_REMOVED "Karta usunieta"
	#define MSG_MAIN "Menu glowne"
	#define MSG_AUTOSTART "Autostart"
	#define MSG_DISABLE_STEPPERS "Wylacz silniki"
	#define MSG_AUTO_HOME "Auto. poz. zerowa"
	#define MSG_SET_ORIGIN "Ustaw punkt zero"
	#define MSG_PREHEAT_PLA "Rozgrzej PLA"
	#define MSG_PREHEAT_PLA0 "Rozgrzej PLA 1"
	#define MSG_PREHEAT_PLA1 "Rozgrzej PLA 2"
	#define MSG_PREHEAT_PLA2 "Rozgrzej PLA 3"
	#define MSG_PREHEAT_PLA012 "Roz. PLA Wszystko"
	#define MSG_PREHEAT_PLA_BEDONLY "Rozgrzej PLA Loze"
	#define MSG_PREHEAT_PLA_SETTINGS "Ustaw. rozg. PLA"
	#define MSG_PREHEAT_ABS "Rozgrzej ABS"
	#define MSG_PREHEAT_ABS0 "Rozgrzej ABS 1"
	#define MSG_PREHEAT_ABS1 "Rozgrzej ABS 2"
	#define MSG_PREHEAT_ABS2 "Rozgrzej ABS 3"
	#define MSG_PREHEAT_ABS012 "Roz. ABS Wszystko"
	#define MSG_PREHEAT_ABS_BEDONLY "Rozgrzej ABS Loze"
	#define MSG_PREHEAT_ABS_SETTINGS "Ustaw. rozg. ABS"
	#define MSG_COOLDOWN "Chlodzenie"
	#define MSG_SWITCH_PS_ON "Wlacz zasilacz"
	#define MSG_SWITCH_PS_OFF "Wylacz zasilacz"
	#define MSG_EXTRUDE "Ekstruzja"
	#define MSG_RETRACT "Cofanie"
	#define MSG_MOVE_AXIS "Ruch osi"
	#define MSG_MOVE_X "Przesun w X"
	#define MSG_MOVE_Y "Przesun w Y"
	#define MSG_MOVE_Z "Przesun w Z"
	#define MSG_MOVE_E "Ekstruzja (os E)"
	#define MSG_MOVE_01MM "Przesuwaj co .1mm"
	#define MSG_MOVE_1MM "Przesuwaj co 1mm"
	#define MSG_MOVE_10MM "Przesuwaj co 10mm"
	#define MSG_SPEED "Predkosc"
	#define MSG_NOZZLE "Dysza"
	#define MSG_NOZZLE1 "Dysza 2"
	#define MSG_NOZZLE2 "Dysza 3"
	#define MSG_BED "Loze"
	#define MSG_FAN_SPEED "Obroty wiatraka"
	#define MSG_FLOW "Przeplyw"
	#define MSG_FLOW0 "Przeplyw 0"
	#define MSG_FLOW1 "Przeplyw 1"
	#define MSG_FLOW2 "Przeplyw 2"
	#define MSG_CONTROL "Kontrola"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Mnoznik"
	#define MSG_AUTOTEMP "Auto. temperatura"
	#define MSG_ON "Wl. "
	#define MSG_OFF "Wyl."
	#define MSG_PID_P "PID-P"
	#define MSG_PID_I "PID-I"
	#define MSG_PID_D "PID-D"
	#define MSG_PID_C "PID-C"
	#define MSG_ACC  "Przyspieszenie"
	#define MSG_VXY_JERK "Zryw Vxy"
	#define MSG_VZ_JERK "Zryw Vz"
	#define MSG_VE_JERK "Zryw Ve"
	#define MSG_VMAX "Vmax" 
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_E "e"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "Vskok min"
	#define MSG_AMAX "Amax"
	#define MSG_A_RETRACT "A-wycofanie"
	#define MSG_XSTEPS "krokiX/mm"
	#define MSG_YSTEPS "krokiY/mm"
	#define MSG_ZSTEPS "krokiZ/mm"
	#define MSG_ESTEPS "krokiE/mm"
	#define MSG_RECTRACT "Wycofanie"
	#define MSG_TEMPERATURE "Temperatura"
	#define MSG_MOTION "Ruch"
	#define MSG_CONTRAST "Kontrast LCD"
	#define MSG_STORE_EPROM "Zapisz w pamieci"
	#define MSG_LOAD_EPROM "Wczytaj z pamieci"
	#define MSG_RESTORE_FAILSAFE "Ustaw. fabryczne"
	#define MSG_REFRESH "\004Odswiez"
	#define MSG_WATCH "Ekran glowny"
	#define MSG_PREPARE "Przygotuj"
	#define MSG_CONTROL "Ustawienia"
	#define MSG_TUNE "Strojenie"
	#define MSG_PAUSE_PRINT "Pauza"
	#define MSG_RESUME_PRINT "Wznowienie"
	#define MSG_STOP_PRINT "Stop"
	#define MSG_CARD_MENU "Menu karty SD"
	#define MSG_NO_CARD "Brak karty"
	#define MSG_DWELL "Uspij..."
	#define MSG_USERWAIT "Oczekiwanie..."
	#define MSG_RESUMING "Wznawianie druku"
	#define MSG_NO_MOVE "Brak ruchu"
	#define MSG_KILLED "Ubity. "
	#define MSG_STOPPED "Zatrzymany. "
	#define MSG_STEPPER_RELEASED "Zwolniony."
	#define MSG_CONTROL_RETRACT  "Wycofaj mm"
	#define MSG_CONTROL_RETRACTF "Wycofaj  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Skok Z mm:"
	#define MSG_CONTROL_RETRACT_RECOVER "Cof. wycof. +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "Cof. wycof.  F"
	#define MSG_AUTORETRACT "Auto. wycofanie"
	#define MSG_FILAMENTCHANGE "Zmien filament"
	#define MSG_INIT_SDCARD "Inicjal. karty SD"
	#define MSG_CNG_SDCARD "Zmiana karty SD"
	#define MSG_ZPROBE_OUT "Sonda Z za lozem"
	#define MSG_POSITION_UNKNOWN "Wroc w XY przed Z"
	#define MSG_ZPROBE_ZOFFSET "Offset Z"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Blad wyl. kranc."
	#define MSG_CONTRAST "Kontrast"

// Serial Console Messages

	#define MSG_Enqueing "Kolejkowanie \""
	#define MSG_POWERUP "Zasilanie wlaczone"
	#define MSG_EXTERNAL_RESET " Reset (zewnetrzny)"
	#define MSG_BROWNOUT_RESET " Reset (spadek napiecia)"
	#define MSG_WATCHDOG_RESET " Reset (watchdog)"
	#define MSG_SOFTWARE_RESET " Reset (programowy)"
	#define MSG_AUTHOR " | Autor: "
	#define MSG_CONFIGURATION_VER " Ostatnia aktualizacja: "
	#define MSG_FREE_MEMORY " Wolna pamiec: "
	#define MSG_PLANNER_BUFFER_BYTES "  Bufor planisty krokow (w bajtach): "
	#define MSG_OK "OK"
	#define MSG_FILE_SAVED "Plik zapisany."
	#define MSG_ERR_LINE_NO "Numer linijki nie jest ostatnim numerem linijki+1; ostatnia linijka:"
	#define MSG_ERR_CHECKSUM_MISMATCH "Niezgodna suma kontrolna; ostatnia linijka: "
	#define MSG_ERR_NO_CHECKSUM "Brak sumy kontrolnej w linijce; ostatnia linijka:"
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "Brak numery linijki przy sumie kontrolnej; ostatnia linijka:"
	#define MSG_FILE_PRINTED "Ukonczono wydruk z pliku"
	#define MSG_BEGIN_FILE_LIST "Start listy plikow"
	#define MSG_END_FILE_LIST "Koniec listy plikow"
	#define MSG_M104_INVALID_EXTRUDER "M104 Niepoprawny ekstruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Niepoprawny ekstruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Niepoprawny ekstruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Niepoprawny ekstruder "
	#define MSG_M221_INVALID_EXTRUDER "M221 Niepoprawny ekstruder "
	#define MSG_ERR_NO_THERMISTORS "Brak termistorow - brak temperatury :("
	#define MSG_M109_INVALID_EXTRUDER "M109 Niepoprawny ekstruder "
	#define MSG_HEATING "Nagrzewanie ekstrudera..."
	#define MSG_HEATING_COMPLETE "Nagrzewanie ekstrudera zakonczone."
	#define MSG_BED_HEATING "Nagrzewanie loza..."
	#define MSG_BED_DONE "Nagrzewanie loza zakonczone."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Marlin V1; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Licznik X: "
	#define MSG_ERR_KILLED "Drukarka zatrzymana. Wywolano kill()"
	#define MSG_ERR_STOPPED "Drukarka zatrzymana z powodu bledu. Usun problem i zrestartuj drukartke komenda M999. (temperatura zostala zresetowana; ustaw temperature po restarcie)"
	#define MSG_RESEND "Wyslij ponownie: "
	#define MSG_UNKNOWN_COMMAND "Nieznane polecenie: \""
	#define MSG_ACTIVE_EXTRUDER "Aktywny ekstruder: "
	#define MSG_INVALID_EXTRUDER "Niepoprawny ekstruder"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Zgloszenie statusu wylacznikow krancowych"
	#define MSG_ENDSTOP_HIT "Wyzwolony"
	#define MSG_ENDSTOP_OPEN "Otwarty"
	#define MSG_HOTEND_OFFSET "Offsety dysz:"

	#define MSG_SD_CANT_OPEN_SUBDIR "Nie mozna otworzyc podkatalogu"
	#define MSG_SD_INIT_FAIL "Blad inicjalizacji karty SD"
	#define MSG_SD_VOL_INIT_FAIL "Blad inizjalizacji wolumenu"
	#define MSG_SD_OPENROOT_FAIL "Blad odczytywania katalogu glownego"
	#define MSG_SD_CARD_OK "Karta SD zainicjalizowana"
	#define MSG_SD_WORKDIR_FAIL "Blad odczytywania katalogu roboczego"
	#define MSG_SD_OPEN_FILE_FAIL "Nie mozna otworzyc pliku: "
	#define MSG_SD_FILE_OPENED "Otwarto plik:"
	#define MSG_SD_SIZE " Rozmiar:"
	#define MSG_SD_FILE_SELECTED "Wybrano plik"
	#define MSG_SD_WRITE_TO_FILE "Zapisywanie do pliku: "
	#define MSG_SD_PRINTING_BYTE "Drukowanie z karty SD, bajt "
	#define MSG_SD_NOT_PRINTING "Nie trwa drukowanie z karty SD"
	#define MSG_SD_ERR_WRITE_TO_FILE "Wystapil blad podczas zapisu do pliku"
	#define MSG_SD_CANT_ENTER_SUBDIR "Nie mozna odczytac podkatalogu: "

	#define MSG_STEPPER_TOO_HIGH "Za duza czestotliwosc krokow: "
	#define MSG_ENDSTOPS_HIT "Wylacznik krancowy zostal wyzwolony na pozycji: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " uniemozliwiono zimna ekstruzje"
	#define MSG_ERR_LONG_EXTRUDE_STOP " uniemozliwiono zbyt dluga ekstruzje"
	#define MSG_BABYSTEPPING_X "Babystepping w osi X"
	#define MSG_BABYSTEPPING_Y "Babystepping w osi Y"
	#define MSG_BABYSTEPPING_Z "Babystepping w osi Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"
*/
#endif


#if LANGUAGE_CHOICE == 3

// LCD Menu Messages
// Please note these are limited to 17 characters!

  #define MSG_DISPLAY_SensROmax "Sens RO Max" //MK3
  #define MSG_DISPLAY_SensROmin "Sens RO Min" //MK3
  #define MSG_DISPLAY_Pcirc "P circ" //MK3
  #define MSG_DISPLAY_Factor2 "Factor 2" //MK3
  #define MSG_DISPLAY_Factor1 "Factor 1" //MK3
  #define MSG_DISPLAY_Meter "m" //MK3
  #define MSG_DISPLAY_Length " L:" //MK3
  #define MSG_DISPLAY_S "S:" //MK3
  #define MSG_DISPLAY_AV " Av" //MK3
  #define MSG_DISPLAY_MinWidth " Mn" //MK3
  #define MSG_DISPLAY_MaxWidth " Mx" //MK3
  #define MSG_DISPLAY_rpm2 "rpm " //MK3
  #define MSG_DISPLAY_COLD "COLD" //MK3
  #define MSG_DISPLAY_OFF "OFF " //MK3
  #define MSG_DISPLAY_E "E:" //MK3
  #define MSG_DISPLAY_rpm "rpm     " //MK3
  #define MSG_DISPLAY_Puller "Puller:" //MK3
  #define MSG_SAFETY_COOLDOWN "SAFETY COOLDOWN" //MK3
  #define MSG_EX_WARM_UP "Extruder Warming Up" //MK3
  #define MSG_EX_COOL "Extruder Cooling" //MK3
  #define MSG_AUTOT_SEQU "Autotune Sequence" //MK3
  #define MSG_AUTOT_COMPL "Autotune Complete" //MK3
  #define MSG_MIN_TEMP "Err: MINTEMP" //MK3
  #define MSG_MAX_TEMP "Err: MAXTEMP" //MK3
  #define MSG_thermal_runaway "THERMAL RUNAWAY" //MK3
  #define MSG_sensor_runout "SENSOR RUNOUT" //MK3
	#define WELCOME_MSG MACHINE_NAME " OK" //MK3
	#define MSG_MAIN "Main" //MK3
  #define MSG_PREHEAT_ABS "Preheat"  //MK3
  #define MSG_PREHEAT_ABS_SETTINGS "Preheat config" //MK3
	#define MSG_COOLDOWN "Cooldown" //MK3
  #define MSG_MOVE_E "Extruder" //MK3
	#define MSG_MOVE_P "Puller" //MK3
  #define MSG_EXT_RPM "Extruder RPM" //MK3
	#define MSG_NOZZLE "Nozzle" //MK3
	#define MSG_HEATER "Extruder Temp" //MK3
  #define MSG_LENGTH_CUTOFF "L cutoff" //MK3
  #define MSG_FILAMENT "Sensor Pos." //MK3
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
  #define MSG_WATCH "Info screen" //MK3
  #define MSG_STATS "Filament Statistics" //MK3
	#define MSG_PREPARE "Prepare" //MK3
	#define MSG_TUNE "Tune" //MK3
  #define MSG_ESTEPS "Esteps/rev/100" //MK3
	#define MSG_PSTEPS "Psteps/mm" //MK3
  #define MSG_A_RETRACT "Motor Acc" //MK3
  #define MSG_STORE_EPROM "Store memory" //MK3
	#define MSG_LOAD_EPROM "Load memory" //MK3
	#define MSG_RESTORE_FAILSAFE "Restore failsafe" //MK3
  #define MSG_TEMPERATURE "Temperature" //MK3
	#define MSG_MOTION "Motion" //MK3
  #define MSG_FILAMENT_PID "Puller PID" //MK3
  #define MSG_PAUSE_EXTRUDER "STOP Extruder" //MK3
	#define MSG_RESUME_EXTRUDER "START Extruder" //MK3
  #define MSG_AUTO_EXTRUDER "Automatic pulling" //MK3
  #define MSG_MAN_EXTRUDER "Manually pulling" //MK3
	#define MSG_CLEAR_STATS "Clear Statistics" //MK3
	#define MSG_ENABLE_STATS "Enable Statistics" //MK3
	#define MSG_DISABLE_STATS "Pause Statistics" //MK3
  #define MSG_VMAX "Vmax " //MK3
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

/* alt
	#define WELCOME_MSG MACHINE_NAME " prete."
	#define MSG_SD_INSERTED "Carte inseree"
	#define MSG_SD_REMOVED "Carte retiree"
	#define MSG_MAIN "Menu principal"
	#define MSG_AUTOSTART "Demarrage auto"
	#define MSG_DISABLE_STEPPERS "Arreter moteurs"
	#define MSG_AUTO_HOME "Home auto."
	#define MSG_SET_ORIGIN "Regler origine"
	#define MSG_PREHEAT_PLA " Prechauffage PLA"
	#define MSG_PREHEAT_PLA0 "Prechauff. PLA 1"
  #define MSG_PREHEAT_PLA1 "Prechauff. PLA 2"
	#define MSG_PREHEAT_PLA2 "Prechauff. PLA 3"
	#define MSG_PREHEAT_PLA012 "Prech. PLA Tout"
	#define MSG_PREHEAT_PLA_BEDONLY "Prech. PLA Plateau"
	#define MSG_PREHEAT_PLA_SETTINGS "Regl. prech. PLA"
	#define MSG_PREHEAT_ABS "Prechauffage ABS"
	#define MSG_PREHEAT_ABS0 "Prechauff. ABS 1"
	#define MSG_PREHEAT_ABS1 "Prechauff. ABS 2"
	#define MSG_PREHEAT_ABS2 "Prechauff. ABS 3"
	#define MSG_PREHEAT_ABS012 "Prech. ABS Tout"
	#define MSG_PREHEAT_ABS_BEDONLY "Prech. ABS Plateau"
	#define MSG_PREHEAT_ABS_SETTINGS "Regl. prech. ABS"
	#define MSG_COOLDOWN "Refroidir"
	#define MSG_SWITCH_PS_ON "Allumer alim."
	#define MSG_SWITCH_PS_OFF "Eteindre alim."
	#define MSG_EXTRUDE "Extrusion"
	#define MSG_RETRACT "Retraction"
	#define MSG_PREHEAT_PLA "Prechauffage PLA"
	#define MSG_PREHEAT_ABS "Prechauffage ABS"
	#define MSG_MOVE_AXIS "Deplacer un axe"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_E "Extruder"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED " Vitesse"
	#define MSG_NOZZLE "Buse"
	#define MSG_NOZZLE1 "Buse2"
	#define MSG_NOZZLE2 "Buse3"
	#define MSG_BED "Plateau"
	#define MSG_FAN_SPEED "Vite. ventilateur"
	#define MSG_FLOW "Flux"
	#define MSG_FLOW0 "Flux 0"
	#define MSG_FLOW1 "Flux 1"
	#define MSG_FLOW2 "Flux 2"
	#define MSG_CONTROL "Controler"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Facteur"
	#define MSG_AUTOTEMP "Temp. Auto."
	#define MSG_ON "Marche "
	#define MSG_OFF "Arret"
	#define MSG_PID_P "PID-P"
	#define MSG_PID_I "PID-I"
	#define MSG_PID_D "PID-D"
	#define MSG_PID_C "PID-C"
	#define MSG_ACC "Accel"
	#define MSG_VXY_JERK "Vxy-jerk"
	#define MSG_VZ_JERK "Vz-jerk"
	#define MSG_VE_JERK "Ve-jerk"
	#define MSG_VMAX "Vmax" 
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_E "e"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "Vdepl min"
	#define MSG_AMAX "Amax "
	#define MSG_A_RETRACT "A-retract"
	#define MSG_XSTEPS "Xpas/mm"
	#define MSG_YSTEPS "Ypas/mm"
	#define MSG_ZSTEPS "Zpas/mm"
	#define MSG_ESTEPS "Epas/mm"
	#define MSG_TEMPERATURE "Temperature"
	#define MSG_MOTION "Mouvement"
	#define MSG_CONTRAST "Contraste LCD"
	#define MSG_STORE_EPROM "Sauver config"
	#define MSG_LOAD_EPROM "Lire config"
	#define MSG_RESTORE_FAILSAFE "Restaurer defauts"
	#define MSG_REFRESH "Actualiser"
	#define MSG_WATCH "Surveiller"
	#define MSG_PREPARE "Preparer"
	#define MSG_TUNE "Regler"
	#define MSG_PAUSE_PRINT "Interrompre impr."
	#define MSG_RESUME_PRINT "Reprendre impr."
	#define MSG_STOP_PRINT "Arreter impr."
	#define MSG_CARD_MENU "Impr. depuis SD"
	#define MSG_NO_CARD "Pas de carte"
	#define MSG_DWELL "Repos..."
	#define MSG_USERWAIT "Atten. de l'util."
	#define MSG_RESUMING "Repri. de l'impr."
	#define MSG_NO_MOVE "Aucun mouvement."
	#define MSG_KILLED "MORT."
	#define MSG_STOPPED "STOPPE."
	#define MSG_STEPPER_RELEASED "RELACHE."
	#define MSG_CONTROL_RETRACT "Retraction mm"
	#define MSG_CONTROL_RETRACTF "Retraction F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet F"
	#define MSG_AUTORETRACT "Retract. Auto."
	#define MSG_FILAMENTCHANGE "Changer filament"
	#define MSG_INIT_SDCARD "Init. la carte SD"
	#define MSG_CNG_SDCARD "Changer de carte"
	#define MSG_ZPROBE_OUT "Z sonde exte. lit"
	#define MSG_POSITION_UNKNOWN "Rev. dans XY av.Z"
	#define MSG_ZPROBE_ZOFFSET "Offset Z"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Butee abandon"
	#define MSG_CONTRAST "Contrast"

// Serial Console Messages

	#define MSG_Enqueing "Mise en tampon \""
	#define MSG_POWERUP "Allumage"
	#define MSG_EXTERNAL_RESET " RAZ Externe"
	#define MSG_BROWNOUT_RESET " RAZ defaut alim."
	#define MSG_WATCHDOG_RESET " RAZ Watchdog"
	#define MSG_SOFTWARE_RESET " RAZ logicielle"
	#define MSG_AUTHOR " | Auteur: "
	#define MSG_CONFIGURATION_VER " Derniere MaJ: "
	#define MSG_FREE_MEMORY " Memoire libre: "
	#define MSG_PLANNER_BUFFER_BYTES " PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Fichier enregistre."
	#define MSG_ERR_LINE_NO "Le numero de ligne n'est pas la derniere ligne + 1, derniere ligne: "
	#define MSG_ERR_CHECKSUM_MISMATCH "Erreur somme de controle, derniere ligne: "
	#define MSG_ERR_NO_CHECKSUM "Pas de somme de controle avec le numero de ligne, derniere ligne: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "Pas de numero de ligne avec somme de controle, derniere ligne: "
	#define MSG_FILE_PRINTED "Impression terminee"
	#define MSG_BEGIN_FILE_LIST "Debut de la liste de fichiers"
	#define MSG_END_FILE_LIST "Fin de la liste de fichiers"
	#define MSG_M104_INVALID_EXTRUDER "M104 Extruder invalide"
	#define MSG_M105_INVALID_EXTRUDER "M105 Extruder invalide"
	#define MSG_M200_INVALID_EXTRUDER "M200 Extruder invalide"
	#define MSG_M218_INVALID_EXTRUDER "M218 Extruder invalide"
	#define MSG_M221_INVALID_EXTRUDER "M221 Extruder invalide"
	#define MSG_ERR_NO_THERMISTORS "Pas de thermistor, pas de temperature"
	#define MSG_M109_INVALID_EXTRUDER "M109 Extruder invalide "
	#define MSG_HEATING "En chauffe..."
	#define MSG_HEATING_COMPLETE "Chauffe terminee."
	#define MSG_BED_HEATING "Chauffe du lit."
	#define MSG_BED_DONE "Chauffe du lit terminee."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Marlin V1; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Compteur X: "
	#define MSG_ERR_KILLED "Impression arretee. kill() appelee!"
	#define MSG_ERR_STOPPED "Impression arretee a cause d'erreurs. Corriger les erreurs et utiliser M999 pour la reprendre. (Temperature remise a zero. Reactivez la apres redemarrage)"
	#define MSG_RESEND "Renvoie: "
	#define MSG_UNKNOWN_COMMAND "Commande inconnue: \""
	#define MSG_ACTIVE_EXTRUDER "Extrudeur actif: "
	#define MSG_INVALID_EXTRUDER "Extrudeur invalide"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Affichage du status des fin de course"
	#define MSG_ENDSTOP_HIT "DECLENCHE"
	#define MSG_ENDSTOP_OPEN "OUVERT"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"

	#define MSG_SD_CANT_OPEN_SUBDIR "Impossible d'ouvrir le sous-repertoire"
	#define MSG_SD_INIT_FAIL "Echec de l'initialisation de la SD"
	#define MSG_SD_VOL_INIT_FAIL "Echec de volume.init"
	#define MSG_SD_OPENROOT_FAIL "Echec openRoot"
	#define MSG_SD_CARD_OK "Carte SD Ok"
	#define MSG_SD_WORKDIR_FAIL "Echec d'ouverture workDir"
	#define MSG_SD_OPEN_FILE_FAIL "Echec d'ouverture, Fichier: "
	#define MSG_SD_FILE_OPENED "Fichier ouvert: "
	#define MSG_SD_SIZE " Taille: "
	#define MSG_SD_FILE_SELECTED "Fichier selectionne"
	#define MSG_SD_WRITE_TO_FILE "Ecriture dans le fichier: "
	#define MSG_SD_PRINTING_BYTE "Octet impression SD "
	#define MSG_SD_NOT_PRINTING "Pas d'impression SD"
	#define MSG_SD_ERR_WRITE_TO_FILE "Erreur d'ecriture dans le fichier"
	#define MSG_SD_CANT_ENTER_SUBDIR "Impossible d'entrer dans le sous-repertoire: "

	#define MSG_STEPPER_TOO_HIGH "Steprate trop eleve: "
	#define MSG_ENDSTOPS_HIT "Fin de course atteint: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " Extrusion a froid evitee"
	#define MSG_ERR_LONG_EXTRUDE_STOP " Extrusion longue evitee"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"
*/
#endif


#if LANGUAGE_CHOICE == 4

// LCD Menu Messages
// Please note these are limited to 17 characters!
  #define MSG_DISPLAY_SensROmax "Sens RO Max" //MK3
  #define MSG_DISPLAY_SensROmin "Sens RO Min" //MK3
  #define MSG_DISPLAY_Pcirc "P circ" //MK3
  #define MSG_DISPLAY_Factor2 "Factor 2" //MK3
  #define MSG_DISPLAY_Factor1 "Factor 1" //MK3
  #define MSG_DISPLAY_Meter "m" //MK3
  #define MSG_DISPLAY_Length " L:" //MK3
  #define MSG_DISPLAY_S "S:" //MK3
  #define MSG_DISPLAY_AV " Av" //MK3
  #define MSG_DISPLAY_MinWidth " Mn" //MK3
  #define MSG_DISPLAY_MaxWidth " Mx" //MK3
  #define MSG_DISPLAY_rpm2 "rpm " //MK3
  #define MSG_DISPLAY_COLD "COLD" //MK3
  #define MSG_DISPLAY_OFF "OFF " //MK3
  #define MSG_DISPLAY_E "E:" //MK3
  #define MSG_DISPLAY_rpm "rpm     " //MK3
  #define MSG_DISPLAY_Puller "Puller:" //MK3
  #define MSG_SAFETY_COOLDOWN "SAFETY COOLDOWN" //MK3
  #define MSG_EX_WARM_UP "Extruder Warming Up" //MK3
  #define MSG_EX_COOL "Extruder Cooling" //MK3
  #define MSG_AUTOT_SEQU "Autotune Sequence" //MK3
  #define MSG_AUTOT_COMPL "Autotune Complete" //MK3
  #define MSG_MIN_TEMP "Err: MINTEMP" //MK3
  #define MSG_MAX_TEMP "Err: MAXTEMP" //MK3
  #define MSG_thermal_runaway "THERMAL RUNAWAY" //MK3
  #define MSG_sensor_runout "SENSOR RUNOUT" //MK3
	#define WELCOME_MSG MACHINE_NAME " OK" //MK3
	#define MSG_MAIN "Main" //MK3
  #define MSG_PREHEAT_ABS "Preheat"  //MK3
  #define MSG_PREHEAT_ABS_SETTINGS "Preheat config" //MK3
	#define MSG_COOLDOWN "Cooldown" //MK3
  #define MSG_MOVE_E "Extruder" //MK3
	#define MSG_MOVE_P "Puller" //MK3
  #define MSG_EXT_RPM "Extruder RPM" //MK3
	#define MSG_NOZZLE "Nozzle" //MK3
	#define MSG_HEATER "Extruder Temp" //MK3
  #define MSG_LENGTH_CUTOFF "L cutoff" //MK3
  #define MSG_FILAMENT "Sensor Pos." //MK3
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
  #define MSG_WATCH "Info screen" //MK3
  #define MSG_STATS "Filament Statistics" //MK3
	#define MSG_PREPARE "Prepare" //MK3
	#define MSG_TUNE "Tune" //MK3
  #define MSG_ESTEPS "Esteps/rev/100" //MK3
	#define MSG_PSTEPS "Psteps/mm" //MK3
  #define MSG_A_RETRACT "Motor Acc" //MK3
  #define MSG_STORE_EPROM "Store memory" //MK3
	#define MSG_LOAD_EPROM "Load memory" //MK3
	#define MSG_RESTORE_FAILSAFE "Restore failsafe" //MK3
  #define MSG_TEMPERATURE "Temperature" //MK3
	#define MSG_MOTION "Motion" //MK3
  #define MSG_FILAMENT_PID "Puller PID" //MK3
  #define MSG_PAUSE_EXTRUDER "STOP Extruder" //MK3
	#define MSG_RESUME_EXTRUDER "START Extruder" //MK3
  #define MSG_AUTO_EXTRUDER "Automatic pulling" //MK3
  #define MSG_MAN_EXTRUDER "Manually pulling" //MK3
	#define MSG_CLEAR_STATS "Clear Statistics" //MK3
	#define MSG_ENABLE_STATS "Enable Statistics" //MK3
	#define MSG_DISABLE_STATS "Pause Statistics" //MK3
  #define MSG_VMAX "Vmax " //MK3
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

/* alt deutsch
	#define WELCOME_MSG MACHINE_NAME " Bereit."

	#define MSG_SD_INSERTED      "SDKarte erkannt"
	#define MSG_SD_REMOVED       "SDKarte entfernt"
	#define MSG_MAIN             "HauptmenÃƒÆ’Ã‚Â¼"
	#define MSG_AUTOSTART        "Autostart"
	#define MSG_DISABLE_STEPPERS "Stepper abschalt."
	#define MSG_AUTO_HOME        "Auto Nullpunkt"
	#define MSG_SET_ORIGIN       "Setze Nullpunkt"
	#define MSG_PREHEAT_PLA      "VorwÃƒÆ’Ã‚Â¤rmen PLA"
	#define MSG_PREHEAT_PLA0     "VorwÃƒÆ’Ã‚Â¤rmen PLA 1"
	#define MSG_PREHEAT_PLA1     "VorwÃƒÆ’Ã‚Â¤rmen PLA 2"
	#define MSG_PREHEAT_PLA2     "VorwÃƒÆ’Ã‚Â¤rmen PLA 3"
	#define MSG_PREHEAT_PLA012   "Vorw. PLA Alle"
	#define MSG_PREHEAT_PLA_BEDONLY "Vorw. PLA Bett"
	#define MSG_PREHEAT_PLA_SETTINGS "VorwÃƒÆ’Ã‚Â¤rm. PLA Ein."
	#define MSG_PREHEAT_ABS      "VorwÃƒÆ’Ã‚Â¤rmen ABS"
	#define MSG_PREHEAT_ABS0     "VorwÃƒÆ’Ã‚Â¤rmen ABS 1"
	#define MSG_PREHEAT_ABS1     "VorwÃƒÆ’Ã‚Â¤rmen ABS 2"
	#define MSG_PREHEAT_ABS2     "VorwÃƒÆ’Ã‚Â¤rmen ABS 3"
	#define MSG_PREHEAT_ABS012   "Vorw. ABS Alle"
	#define MSG_PREHEAT_ABS_BEDONLY "Vorw. ABS Bett"
	#define MSG_PREHEAT_ABS_SETTINGS "VorwÃƒÆ’Ã‚Â¤rm. ABS Ein."
	#define MSG_COOLDOWN         "AbkÃƒÆ’Ã‚Â¼hlen"
	#define MSG_SWITCH_PS_ON     "Switch Power On"
	#define MSG_SWITCH_PS_OFF    "Switch Power Off"
	#define MSG_EXTRUDE          "Extrude"
	#define MSG_RETRACT          "Retract"
	#define MSG_MOVE_AXIS        "Achsen bewegen"
	#define MSG_MOVE_X           "X bewegen"
	#define MSG_MOVE_Y           "Y bewegen"
	#define MSG_MOVE_Z           "Z bewegen"
	#define MSG_MOVE_E           "Extruder"
	#define MSG_MOVE_01MM        "0.1mm bewegen"
	#define MSG_MOVE_1MM         "1mm bewegen"
	#define MSG_MOVE_10MM        "10mm bewegen"
	#define MSG_SPEED            "Geschw"
	#define MSG_NOZZLE           "DÃƒÆ’Ã‚Â¼se"
	#define MSG_NOZZLE1          "DÃƒÆ’Ã‚Â¼se2"
	#define MSG_NOZZLE2          "DÃƒÆ’Ã‚Â¼se3"
	#define MSG_BED              "Bett"
	#define MSG_FAN_SPEED        "LÃƒÆ’Ã‚Â¼ftergeschw."
	#define MSG_FLOW             "Fluss"
	#define MSG_FLOW0            "Fluss 0"
	#define MSG_FLOW1            "Fluss 1"
	#define MSG_FLOW2            "Fluss 2"
	#define MSG_CONTROL          "Einstellungen"
	#define MSG_MIN              "\002 Min"
	#define MSG_MAX              "\002 Max"
	#define MSG_FACTOR           "\002 Faktor"
	#define MSG_AUTOTEMP         "AutoTemp"
	#define MSG_ON               "Ein"
	#define MSG_OFF              "Aus"
	#define MSG_PID_P            "PID-P"
	#define MSG_PID_I            "PID-I"
	#define MSG_PID_D            "PID-D"
	#define MSG_PID_C            "PID-C"
	#define MSG_ACC              "Acc"
	#define MSG_VXY_JERK         "Vxy-jerk"
	#define MSG_VZ_JERK          "Vz-jerk"
	#define MSG_VE_JERK          "Ve-jerk"
	#define MSG_VMAX             "Vmax "
	#define MSG_X                "x"
	#define MSG_Y                "y"
	#define MSG_Z                "z"
	#define MSG_E                "e"
	#define MSG_VMIN             "Vmin"
	#define MSG_VTRAV_MIN        "VTrav min"
	#define MSG_AMAX             "Amax "
	#define MSG_A_RETRACT        "A-Retract"
	#define MSG_XSTEPS           "Xsteps/mm"
	#define MSG_YSTEPS           "Ysteps/mm"
	#define MSG_ZSTEPS           "Zsteps/mm"
	#define MSG_ESTEPS           "Esteps/mm"
	#define MSG_RECTRACT_WIDE    "Rectract"
	#define MSG_WATCH            "Beobachten"
	#define MSG_TEMPERATURE      "Temperatur"
	#define MSG_MOTION           "Bewegung"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_STORE_EPROM      "EPROM speichern"
	#define MSG_LOAD_EPROM       "EPROM laden"
	#define MSG_RESTORE_FAILSAFE "Standardkonfig."
	#define MSG_REFRESH          "Aktualisieren"
	#define MSG_PREPARE          "Vorbereitung"
	#define MSG_CONTROL          "Einstellungen"
	#define MSG_TUNE             "Justierung"
	#define MSG_PAUSE_PRINT      "Druck anhalten"
	#define MSG_RESUME_PRINT     "Druck fortsetz"
	#define MSG_STOP_PRINT       "Druck stoppen"
	#define MSG_CARD_MENU        "SDKarten MenÃƒÆ’Ã‚Â¼"
	#define MSG_NO_CARD          "Keine SDKarte"
	#define MSG_DWELL            "Warten..."
	#define MSG_USERWAIT         "Warte auf Nutzer"
	#define MSG_RESUMING         "Druck fortsetzung"
	#define MSG_NO_MOVE          "Kein Zug."
	#define MSG_KILLED           "KILLED"
	#define MSG_STOPPED          "GESTOPPT"
	#define MSG_STEPPER_RELEASED "Stepper frei"
	#define MSG_CONTROL_RETRACT  "Retract mm"
	#define MSG_CONTROL_RETRACTF "Retract  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT      "AutoRetr."
	#define MSG_FILAMENTCHANGE "Filament wechseln"
	#define MSG_INIT_SDCARD "Init. SD-Card"
	#define MSG_CNG_SDCARD "Change SD-Card"
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"
	#define MSG_CONTRAST "Contrast"

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
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line:"
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line:"
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line:"
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line:"
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Invalid extruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Invalid extruder "
	#define MSG_M221_INVALID_EXTRUDER "M221 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temp"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done."
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Marlin V1; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Count X:"
	#define MSG_ERR_KILLED "Printer halted. kill() called !!"
	#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart!"
	#define MSG_RESEND "Resend:"
	#define MSG_UNKNOWN_COMMAND "Unknown command:\""
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
	#define MSG_SD_FILE_OPENED "File opened:"
	#define MSG_SD_SIZE " Size:"
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir:"

	#define MSG_STEPPER_TOO_HIGH "Steprate too high : "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"
*/
#endif


#if LANGUAGE_CHOICE == 5

// LCD Menu Messages
// Please note these are limited to 17 characters!
  #define MSG_DISPLAY_SensROmax "Sens RO Max" //MK3
  #define MSG_DISPLAY_SensROmin "Sens RO Min" //MK3
  #define MSG_DISPLAY_Pcirc "P circ" //MK3
  #define MSG_DISPLAY_Factor2 "Factor 2" //MK3
  #define MSG_DISPLAY_Factor1 "Factor 1" //MK3
  #define MSG_DISPLAY_Meter "m" //MK3
  #define MSG_DISPLAY_Length " L:" //MK3
  #define MSG_DISPLAY_S "S:" //MK3
  #define MSG_DISPLAY_AV " Av" //MK3
  #define MSG_DISPLAY_MinWidth " Mn" //MK3
  #define MSG_DISPLAY_MaxWidth " Mx" //MK3
  #define MSG_DISPLAY_rpm2 "rpm " //MK3
  #define MSG_DISPLAY_COLD "COLD" //MK3
  #define MSG_DISPLAY_OFF "OFF " //MK3
  #define MSG_DISPLAY_E "E:" //MK3
  #define MSG_DISPLAY_rpm "rpm     " //MK3
  #define MSG_DISPLAY_Puller "Puller:" //MK3
  #define MSG_SAFETY_COOLDOWN "SAFETY COOLDOWN" //MK3
  #define MSG_EX_WARM_UP "Extruder Warming Up" //MK3
  #define MSG_EX_COOL "Extruder Cooling" //MK3
  #define MSG_AUTOT_SEQU "Autotune Sequence" //MK3
  #define MSG_AUTOT_COMPL "Autotune Complete" //MK3
  #define MSG_MIN_TEMP "Err: MINTEMP" //MK3
  #define MSG_MAX_TEMP "Err: MAXTEMP" //MK3
  #define MSG_thermal_runaway "THERMAL RUNAWAY" //MK3
  #define MSG_sensor_runout "SENSOR RUNOUT" //MK3
	#define WELCOME_MSG MACHINE_NAME " OK" //MK3
	#define MSG_MAIN "Main" //MK3
  #define MSG_PREHEAT_ABS "Preheat"  //MK3
  #define MSG_PREHEAT_ABS_SETTINGS "Preheat config" //MK3
	#define MSG_COOLDOWN "Cooldown" //MK3
  #define MSG_MOVE_E "Extruder" //MK3
	#define MSG_MOVE_P "Puller" //MK3
  #define MSG_EXT_RPM "Extruder RPM" //MK3
	#define MSG_NOZZLE "Nozzle" //MK3
	#define MSG_HEATER "Extruder Temp" //MK3
  #define MSG_LENGTH_CUTOFF "L cutoff" //MK3
  #define MSG_FILAMENT "Sensor Pos." //MK3
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
  #define MSG_WATCH "Info screen" //MK3
  #define MSG_STATS "Filament Statistics" //MK3
	#define MSG_PREPARE "Prepare" //MK3
	#define MSG_TUNE "Tune" //MK3
  #define MSG_ESTEPS "Esteps/rev/100" //MK3
	#define MSG_PSTEPS "Psteps/mm" //MK3
  #define MSG_A_RETRACT "Motor Acc" //MK3
  #define MSG_STORE_EPROM "Store memory" //MK3
	#define MSG_LOAD_EPROM "Load memory" //MK3
	#define MSG_RESTORE_FAILSAFE "Restore failsafe" //MK3
  #define MSG_TEMPERATURE "Temperature" //MK3
	#define MSG_MOTION "Motion" //MK3
  #define MSG_FILAMENT_PID "Puller PID" //MK3
  #define MSG_PAUSE_EXTRUDER "STOP Extruder" //MK3
	#define MSG_RESUME_EXTRUDER "START Extruder" //MK3
  #define MSG_AUTO_EXTRUDER "Automatic pulling" //MK3
  #define MSG_MAN_EXTRUDER "Manually pulling" //MK3
	#define MSG_CLEAR_STATS "Clear Statistics" //MK3
	#define MSG_ENABLE_STATS "Enable Statistics" //MK3
	#define MSG_DISABLE_STATS "Pause Statistics" //MK3
  #define MSG_VMAX "Vmax " //MK3
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

/* alt
	#define WELCOME_MSG MACHINE_NAME " lista."
	#define MSG_SD_INSERTED "Tarjeta colocada"
	#define MSG_SD_REMOVED "Tarjeta retirada"
	#define MSG_MAIN "Menu principal"
	#define MSG_AUTOSTART " Autostart"
	#define MSG_DISABLE_STEPPERS "Apagar motores"
	#define MSG_AUTO_HOME "Llevar al origen"
	#define MSG_SET_ORIGIN "Establecer cero"
	#define MSG_PREHEAT_PLA "Precalentar PLA"
	#define MSG_PREHEAT_PLA0 "Precalentar PLA 1"
	#define MSG_PREHEAT_PLA1 "Precalentar PLA 2"
	#define MSG_PREHEAT_PLA2 "Precalentar PLA 3"
	#define MSG_PREHEAT_PLA012 "Precal. PLA Todo"
	#define MSG_PREHEAT_PLA_BEDONLY "Precal. PLA Base"
	#define MSG_PREHEAT_PLA_SETTINGS "Ajustar temp. PLA"
	#define MSG_PREHEAT_ABS "Precalentar ABS"
	#define MSG_PREHEAT_ABS0 "Precalentar ABS 1"
	#define MSG_PREHEAT_ABS1 "Precalentar ABS 2"
	#define MSG_PREHEAT_ABS2 "Precalentar ABS 3"
	#define MSG_PREHEAT_ABS012 "Precal. ABS Todo"
	#define MSG_PREHEAT_ABS_BEDONLY "Precal. ABS Base"
	#define MSG_PREHEAT_ABS_SETTINGS "Ajustar temp. ABS"
	#define MSG_COOLDOWN "Enfriar"
	#define MSG_SWITCH_PS_ON "Switch Power On"
	#define MSG_SWITCH_PS_OFF "Switch Power Off"
	#define MSG_EXTRUDE "Extruir"
	#define MSG_RETRACT "Retraer"
	#define MSG_MOVE_AXIS "Mover ejes"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_E "Extruder"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED "Velocidad"
	#define MSG_NOZZLE "Nozzle"
	#define MSG_NOZZLE1 "Nozzle2"
	#define MSG_NOZZLE2 "Nozzle3"
	#define MSG_BED "Base"
	#define MSG_FAN_SPEED "Ventilador"
	#define MSG_FLOW "Flujo"
	#define MSG_FLOW0 "Flujo 0"
	#define MSG_FLOW1 "Flujo 1"
	#define MSG_FLOW2 "Flujo 2"
	#define MSG_CONTROL "Control"
	#define MSG_MIN "\002 Min"
	#define MSG_MAX "\002 Max"
	#define MSG_FACTOR "\002 Fact"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "On"
	#define MSG_OFF "Off"
	#define MSG_PID_P "PID-P"
	#define MSG_PID_I "PID-I"
	#define MSG_PID_D "PID-D"
	#define MSG_PID_C "PID-C"
	#define MSG_ACC  "Acel"
	#define MSG_VXY_JERK "Vxy-jerk"
	#define MSG_VZ_JERK "Vz-jerk"
	#define MSG_VE_JERK "Ve-jerk"
	#define MSG_VMAX "Vmax"
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_E "e"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VTrav min"
	#define MSG_AMAX "Amax"
	#define MSG_A_RETRACT "A-retrac."
	#define MSG_XSTEPS "X pasos/mm"
	#define MSG_YSTEPS "Y pasos/mm"
	#define MSG_ZSTEPS "Z pasos/mm"
	#define MSG_ESTEPS "E pasos/mm"
	#define MSG_RECTRACT "Retraer"
	#define MSG_TEMPERATURE "Temperatura"
	#define MSG_MOTION "Movimiento"
	#define MSG_STORE_EPROM "Guardar memoria"
	#define MSG_LOAD_EPROM "Cargar memoria"
	#define MSG_RESTORE_FAILSAFE "Rest. de emergen."
	#define MSG_REFRESH "Volver a cargar"
	#define MSG_WATCH "Monitorizar"
	#define MSG_PREPARE "Preparar"
	#define MSG_TUNE "Ajustar"
	#define MSG_PAUSE_PRINT "Pausar impresion"
	#define MSG_RESUME_PRINT "Reanudar impres."
	#define MSG_STOP_PRINT "Detener impresion"
	#define MSG_CARD_MENU "Menu de SD"
	#define MSG_NO_CARD "No hay tarjeta SD"
	#define MSG_DWELL "Reposo..."
	#define MSG_USERWAIT "Esperando ordenes"
	#define MSG_RESUMING "Resumiendo impre."
	#define MSG_NO_MOVE "Sin movimiento"
	#define MSG_KILLED "PARADA DE EMERG."
	#define MSG_STOPPED "PARADA"
	#define MSG_CONTROL_RETRACT  "Retraer mm"
	#define MSG_CONTROL_RETRACTF "Retraer  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Levantar mm"
	#define MSG_CONTROL_RETRACT_RECOVER "DesRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "DesRet F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Iniciando tarjeta"
	#define MSG_CNG_SDCARD "Cambiar tarjeta"
	#define MSG_RECTRACT_WIDE "Retraer"
	#define MSG_TEMPERATURE_WIDE "Temperatura"
	#define MSG_TEMPERATURE_RTN  "Temperatura"
	#define MSG_MAIN_WIDE "Menu principal"
	#define MSG_MOTION_WIDE "Movimiento"
	#define MSG_PREPARE_ALT "Preparar"
	#define MSG_CONTROL_ARROW "Control"
	#define MSG_RETRACT_ARROW "Retraer"
	#define MSG_STEPPER_RELEASED "Desacoplada."
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"
	#define MSG_CONTRAST "Contrast"

// Serial Console Messages

	#define MSG_Enqueing "En cola \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " Reset Externo"
	#define MSG_BROWNOUT_RESET " Reset por Voltaje Incorrecto"
	#define MSG_WATCHDOG_RESET " Reset por Bloqueo"
	#define MSG_SOFTWARE_RESET " Reset por Software"
	#define MSG_AUTHOR " | Autor: "
	#define MSG_CONFIGURATION_VER " Ultima actualizacion: "
	#define MSG_FREE_MEMORY " Memoria libre: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Guardado."
	#define MSG_ERR_LINE_NO "El Numero de Linea no es igual al Ultimo Numero de Linea+1, Ultima Linea:"
	#define MSG_ERR_CHECKSUM_MISMATCH "el checksum no coincide, Ultima Linea:"
	#define MSG_ERR_NO_CHECKSUM "No se pudo hallar el Checksum con el numero de linea, Ultima Linea:"
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No se hallo el Numero de Linea con el Checksum, Ultima Linea:"
	#define MSG_FILE_PRINTED "Impresion terminada"
	#define MSG_BEGIN_FILE_LIST "Comienzo de la lista de archivos"
	#define MSG_END_FILE_LIST "Fin de la lista de archivos"
	#define MSG_M104_INVALID_EXTRUDER "M104 Extrusor Invalido "
	#define MSG_M105_INVALID_EXTRUDER "M105 Extrusor Invalido "
	#define MSG_M200_INVALID_EXTRUDER "M200 Extrusor Invalido "
	#define MSG_M218_INVALID_EXTRUDER "M218 Extrusor Invalido "
	#define MSG_M221_INVALID_EXTRUDER "M221 Extrusor Invalido "
	#define MSG_ERR_NO_THERMISTORS "No hay termistores - no temp"
	#define MSG_M109_INVALID_EXTRUDER "M109 Extrusor Invalido "
	#define MSG_HEATING "Calentando..."
	#define MSG_HEATING_COMPLETE "Calentamiento Hecho."
	#define MSG_BED_HEATING "Calentando la base."
	#define MSG_BED_DONE "Base Caliente."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Marlin V1; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Cuenta X:"
	#define MSG_ERR_KILLED "Ãƒâ€šÃ‚Â¡Ãƒâ€šÃ‚Â¡Impresora Parada con kill()!!"
	#define MSG_ERR_STOPPED "Ãƒâ€šÃ‚Â¡Impresora parada por errores. Arregle el error y use M999 Para reiniciar!. (La temperatura se reestablece. Ajustela antes de continuar)"
	#define MSG_RESEND "Reenviar:"
	#define MSG_UNKNOWN_COMMAND "Comando Desconocido:\""
	#define MSG_ACTIVE_EXTRUDER "Extrusor Activo: "
	#define MSG_INVALID_EXTRUDER "Extrusor Invalido"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Comprobando fines de carrera."
	#define MSG_ENDSTOP_HIT "PULSADO"
	#define MSG_ENDSTOP_OPEN "abierto"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR "No se pudo abrir la subcarpeta."
	#define MSG_SD_INIT_FAIL "Fallo al iniciar la SD"
	#define MSG_SD_VOL_INIT_FAIL "Fallo al montar el volumen"
	#define MSG_SD_OPENROOT_FAIL "Fallo al abrir la carpeta raiz"
	#define MSG_SD_CARD_OK "Tarjeta SD OK"
	#define MSG_SD_WORKDIR_FAIL "Fallo al abrir la carpeta de trabajo"
	#define MSG_SD_OPEN_FILE_FAIL "Error al abrir, Archivo: "
	#define MSG_SD_FILE_OPENED "Archivo abierto:"
	#define MSG_SD_SIZE " TamaÃƒÆ’Ã‚Â±o:"
	#define MSG_SD_FILE_SELECTED "Archivo Seleccionado"
	#define MSG_SD_WRITE_TO_FILE "Escribiendo en el archivo: "
	#define MSG_SD_PRINTING_BYTE "SD imprimiendo el byte "
	#define MSG_SD_NOT_PRINTING "No se esta imprimiendo con SD"
	#define MSG_SD_ERR_WRITE_TO_FILE "Error al escribir en el archivo"
	#define MSG_SD_CANT_ENTER_SUBDIR "No se puede abrir la carpeta:"

	#define MSG_STEPPER_TOO_HIGH "Steprate demasiado alto : "
	#define MSG_ENDSTOPS_HIT "Se ha tocado el fin de carril: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " extrusion fria evitada"
	#define MSG_ERR_LONG_EXTRUDE_STOP " extrusion demasiado larga evitada"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"
*/
#endif

#if LANGUAGE_CHOICE == 6


// LCD Menu Messages
// Please note these are limited to 17 characters!
  #define MSG_DISPLAY_SensROmax "Sens RO Max" //MK3
  #define MSG_DISPLAY_SensROmin "Sens RO Min" //MK3
  #define MSG_DISPLAY_Pcirc "P circ" //MK3
  #define MSG_DISPLAY_Factor2 "Factor 2" //MK3
  #define MSG_DISPLAY_Factor1 "Factor 1" //MK3
  #define MSG_DISPLAY_Meter "m" //MK3
  #define MSG_DISPLAY_Length " L:" //MK3
  #define MSG_DISPLAY_S "S:" //MK3
  #define MSG_DISPLAY_AV " Av" //MK3
  #define MSG_DISPLAY_MinWidth " Mn" //MK3
  #define MSG_DISPLAY_MaxWidth " Mx" //MK3
  #define MSG_DISPLAY_rpm2 "rpm " //MK3
  #define MSG_DISPLAY_COLD "COLD" //MK3
  #define MSG_DISPLAY_OFF "OFF " //MK3
  #define MSG_DISPLAY_E "E:" //MK3
  #define MSG_DISPLAY_rpm "rpm     " //MK3
  #define MSG_DISPLAY_Puller "Puller:" //MK3
  #define MSG_SAFETY_COOLDOWN "SAFETY COOLDOWN" //MK3
  #define MSG_EX_WARM_UP "Extruder Warming Up" //MK3
  #define MSG_EX_COOL "Extruder Cooling" //MK3
  #define MSG_AUTOT_SEQU "Autotune Sequence" //MK3
  #define MSG_AUTOT_COMPL "Autotune Complete" //MK3
  #define MSG_MIN_TEMP "Err: MINTEMP" //MK3
  #define MSG_MAX_TEMP "Err: MAXTEMP" //MK3
  #define MSG_thermal_runaway "THERMAL RUNAWAY" //MK3
  #define MSG_sensor_runout "SENSOR RUNOUT" //MK3
	#define WELCOME_MSG MACHINE_NAME " OK" //MK3
	#define MSG_MAIN "Main" //MK3
  #define MSG_PREHEAT_ABS "Preheat"  //MK3
  #define MSG_PREHEAT_ABS_SETTINGS "Preheat config" //MK3
	#define MSG_COOLDOWN "Cooldown" //MK3
  #define MSG_MOVE_E "Extruder" //MK3
	#define MSG_MOVE_P "Puller" //MK3
  #define MSG_EXT_RPM "Extruder RPM" //MK3
	#define MSG_NOZZLE "Nozzle" //MK3
	#define MSG_HEATER "Extruder Temp" //MK3
  #define MSG_LENGTH_CUTOFF "L cutoff" //MK3
  #define MSG_FILAMENT "Sensor Pos." //MK3
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
  #define MSG_WATCH "Info screen" //MK3
  #define MSG_STATS "Filament Statistics" //MK3
	#define MSG_PREPARE "Prepare" //MK3
	#define MSG_TUNE "Tune" //MK3
  #define MSG_ESTEPS "Esteps/rev/100" //MK3
	#define MSG_PSTEPS "Psteps/mm" //MK3
  #define MSG_A_RETRACT "Motor Acc" //MK3
  #define MSG_STORE_EPROM "Store memory" //MK3
	#define MSG_LOAD_EPROM "Load memory" //MK3
	#define MSG_RESTORE_FAILSAFE "Restore failsafe" //MK3
  #define MSG_TEMPERATURE "Temperature" //MK3
	#define MSG_MOTION "Motion" //MK3
  #define MSG_FILAMENT_PID "Puller PID" //MK3
  #define MSG_PAUSE_EXTRUDER "STOP Extruder" //MK3
	#define MSG_RESUME_EXTRUDER "START Extruder" //MK3
  #define MSG_AUTO_EXTRUDER "Automatic pulling" //MK3
  #define MSG_MAN_EXTRUDER "Manually pulling" //MK3
	#define MSG_CLEAR_STATS "Clear Statistics" //MK3
	#define MSG_ENABLE_STATS "Enable Statistics" //MK3
	#define MSG_DISABLE_STATS "Pause Statistics" //MK3
  #define MSG_VMAX "Vmax " //MK3
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

/* alt russisch
	#define WELCOME_MSG MACHINE_NAME			        "Ãƒï¿½Ã¢â‚¬Å“Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â²."
	#define MSG_SD_INSERTED						"Ãƒï¿½Ã…Â¡Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â° Ãƒï¿½Ã‚Â²Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°"
	#define MSG_SD_REMOVED						"Ãƒï¿½Ã…Â¡Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â° Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Â¡Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°"
	#define MSG_MAIN							"Ãƒï¿½Ã…â€œÃƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â½Ãƒâ€˜Ã…Â½ \003"
	#define MSG_AUTOSTART						"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚Â²Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã¢â‚¬Å¡"
	#define MSG_DISABLE_STEPPERS 				"Ãƒï¿½Ã¢â‚¬â„¢Ãƒâ€˜Ã¢â‚¬Â¹Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â». Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â³Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â»Ãƒï¿½Ã‚Â¸"
	#define MSG_AUTO_HOME						"Ãƒï¿½Ã…Â¸Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â°"
	#define MSG_SET_ORIGIN						"Ãƒï¿½Ã¢â‚¬â€�Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â¼Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™ Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â»Ãƒâ€˜Ã…â€™"
	#define MSG_PREHEAT_PLA 					"Ãƒï¿½Ã…Â¸Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â² PLA"
	#define MSG_PREHEAT_PLA0					"Ãƒï¿½Ã…Â¸Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â² PLA0"
	#define MSG_PREHEAT_PLA1					"Ãƒï¿½Ã…Â¸Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â² PLA1"
	#define MSG_PREHEAT_PLA2					"Ãƒï¿½Ã…Â¸Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â² PLA2"
	#define MSG_PREHEAT_PLA012 					"Ãƒï¿½Ã…Â¸Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³. PLA Ãƒï¿½Ã‚Â²Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Âµ"
	#define MSG_PREHEAT_PLA_BEDONLY 			"Ãƒï¿½Ã…Â¸Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´. PLA Ãƒï¿½Ã…Â¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™"
	#define MSG_PREHEAT_PLA_SETTINGS  			"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â¹Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¸ PLA"
	#define MSG_PREHEAT_ABS						"Ãƒï¿½Ã…Â¸Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â² ABS"
	#define MSG_PREHEAT_ABS0					"Ãƒï¿½Ã…Â¸Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â² ABS0"
	#define MSG_PREHEAT_ABS1					"Ãƒï¿½Ã…Â¸Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â² ABS1"
	#define MSG_PREHEAT_ABS2					"Ãƒï¿½Ã…Â¸Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â² ABS2"
	#define MSG_PREHEAT_ABS012 					"Ãƒï¿½Ã…Â¸Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³. ABS Ãƒï¿½Ã‚Â²Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Âµ "
	#define MSG_PREHEAT_ABS_BEDONLY 			"Ãƒï¿½Ã…Â¸Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´. ABS Ãƒï¿½Ã…Â¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™"
	#define MSG_PREHEAT_ABS_SETTINGS  			"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â¹Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¸ ABS"
	#define MSG_COOLDOWN						"Ãƒï¿½Ã…Â¾Ãƒâ€˜Ã¢â‚¬Â¦Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¶Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Âµ"
	#define MSG_SWITCH_PS_ON					"Switch Power On"
	#define MSG_SWITCH_PS_OFF					"Switch Power Off"
	#define MSG_EXTRUDE							"Ãƒï¿½Ã‚Â­Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¯Â¿Â½"
	#define MSG_RETRACT							"Ãƒï¿½Ã…Â¾Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡"
	#define MSG_MOVE_AXIS  						"Ãƒï¿½Ã¢â‚¬ï¿½Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â¶Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Âµ Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â¾ Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â¼"
	#define MSG_MOVE_X                          "Move X"
	#define MSG_MOVE_Y                          "Move Y"
	#define MSG_MOVE_Z                          "Move Z"
	#define MSG_MOVE_E                          "Extruder"
	#define MSG_MOVE_01MM                       "Move 0.1mm"
	#define MSG_MOVE_1MM                        "Move 1mm"
	#define MSG_MOVE_10MM                       "Move 10mm"
	#define MSG_SPEED							"Ãƒï¿½Ã‚Â¡Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™:"
	#define MSG_NOZZLE							"\002 Ãƒï¿½Ã‚Â¤Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â»Ãƒâ€˜Ã…â€™Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â°:"
	#define MSG_NOZZLE1							"\002 Ãƒï¿½Ã‚Â¤Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â»Ãƒâ€˜Ã…â€™Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â°2:"
	#define MSG_NOZZLE2							"\002 Ãƒï¿½Ã‚Â¤Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â»Ãƒâ€˜Ã…â€™Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â°3:"
	#define MSG_BED								"\002 Ãƒï¿½Ã…Â¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™:"
	#define MSG_FAN_SPEED						"Ãƒï¿½Ã…Â¡Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬:"
	#define MSG_FLOW							"Ãƒï¿½Ã…Â¸Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Âº:"
	#define MSG_FLOW0 " Ãƒï¿½Ã…Â¸Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Âº0:"
	#define MSG_FLOW1 " Ãƒï¿½Ã…Â¸Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Âº1:"
	#define MSG_FLOW2 " Ãƒï¿½Ã…Â¸Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Âº2:"
	#define MSG_CONTROL							"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â¹Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¸ \003"
	#define MSG_MIN								"\002 Ãƒï¿½Ã…â€œÃƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â¼Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â¼:"
	#define MSG_MAX								"\002 Ãƒï¿½Ã…â€œÃƒï¿½Ã‚Â°Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â¼Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â¼:"
	#define MSG_FACTOR							"\002 Ãƒï¿½Ã‚Â¤Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â€šÂ¬:"
	#define MSG_AUTOTEMP						"Autotemp:"
	#define MSG_ON								"Ãƒï¿½Ã¢â‚¬â„¢Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â». "
	#define MSG_OFF								"Ãƒï¿½Ã¢â‚¬â„¢Ãƒâ€˜Ã¢â‚¬Â¹Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â». "
	#define MSG_PID_P							"PID-P: "
	#define MSG_PID_I							"PID-I: "
	#define MSG_PID_D							"PID-D: "
	#define MSG_PID_C							"PID-C: "
	#define MSG_ACC								"Acc:"
	#define MSG_VXY_JERK						"Vxy-jerk: "
	#define MSG_VZ_JERK                         "Vz-jerk"
	#define MSG_VE_JERK                         "Ve-jerk"
	#define MSG_VMAX							"Vmax "
	#define MSG_X								"x:"
	#define MSG_Y								"y:"
	#define MSG_Z								"z:"
	#define MSG_E								"e:"
	#define MSG_VMIN							"Vmin:"
	#define MSG_VTRAV_MIN						"VTrav min:"
	#define MSG_AMAX							"Amax "
	#define MSG_A_RETRACT						"A-retract:"
	#define MSG_XSTEPS							"X Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³/mm:"
	#define MSG_YSTEPS							"Y Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³/mm:"
	#define MSG_ZSTEPS							"Z Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³/mm:"
	#define MSG_ESTEPS							"E Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³/mm:"
	#define MSG_RECTRACT    					"Ãƒï¿½Ã…Â¾Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡ Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Â¡Ãƒï¿½Ã‚Â¸    \x7E"
	#define MSG_TEMPERATURE  					"Ãƒï¿½Ã‚Â¢Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â¼Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã†â€™Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â°     \x7E"
	#define MSG_MOTION							"Ãƒï¿½Ã‚Â¡Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¸        \x7E"
	#define MSG_CONTRAST  						"LCD contrast"
	#define MSG_STORE_EPROM  					"Ãƒï¿½Ã‚Â¡Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â‚¬Â¦Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™ Ãƒï¿½Ã‚Â² EPROM"
	#define MSG_LOAD_EPROM  					"Ãƒï¿½Ã¢â‚¬â€�Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â·. Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â· EPROM"
	#define MSG_RESTORE_FAILSAFE				"Ãƒï¿½Ã‚Â¡Ãƒï¿½Ã‚Â±Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½ Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Âº"
	#define MSG_REFRESH							"\004Ãƒï¿½Ã…Â¾Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™"
	#define MSG_WATCH							"Ãƒï¿½Ã…Â¾Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â€šÂ¬           \003"
	#define MSG_PREPARE							"Ãƒï¿½Ã¢â‚¬ï¿½Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â¹Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¯Â¿Â½        \x7E"
	#define MSG_TUNE							"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â¹Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¸       \x7E"
	#define MSG_PAUSE_PRINT  					"Ãƒï¿½Ã…Â¸Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚Â¶Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™ Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Â¡Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™"
	#define MSG_RESUME_PRINT					"Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚Â½. Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Â¡Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™"
	#define MSG_STOP_PRINT 						"Ãƒï¿½Ã…Â¾Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™ Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Â¡Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™"
	#define MSG_CARD_MENU						"Ãƒï¿½Ã…â€œÃƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â½Ãƒâ€˜Ã…Â½ Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â‚¬Â¹      \x7E"
	#define MSG_NO_CARD							"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Å¡ Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â‚¬Â¹"
	#define MSG_DWELL							"Ãƒï¿½Ã‚Â¡Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â½..."
	#define MSG_USERWAIT  						"Ãƒï¿½Ã…Â¾Ãƒï¿½Ã‚Â¶Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Âµ"
	#define MSG_RESUMING 						"Resuming print"
	#define MSG_NO_MOVE							"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Å¡ Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â¶Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¯Â¿Â½."
	#define MSG_KILLED							"Ãƒï¿½Ã‚Â£Ãƒï¿½Ã¢â‚¬ËœÃƒï¿½Ã‹Å“Ãƒï¿½Ã‚Â¢Ãƒï¿½Ã…Â¾."
	#define MSG_STOPPED							"Ãƒï¿½Ã…Â¾Ãƒï¿½Ã‚Â¡Ãƒï¿½Ã‚Â¢Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã…Â¾Ãƒï¿½Ã¢â‚¬â„¢Ãƒï¿½Ã¢â‚¬ÂºÃƒï¿½Ã¢â‚¬Â¢Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã…Â¾."
	#define MSG_CONTROL_RETRACT					"Ãƒï¿½Ã…Â¾Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡ mm:"
	#define MSG_CONTROL_RETRACTF				"Ãƒï¿½Ã…Â¾Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡  F:"
	#define MSG_CONTROL_RETRACT_ZLIFT			"Ãƒï¿½Ã…Â¸Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã¢â‚¬Â¹Ãƒï¿½Ã‚Â¶Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Âº mm:"
	#define MSG_CONTROL_RETRACT_RECOVER			"Ãƒï¿½Ã¢â‚¬â„¢Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â²Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡ +mm:"
	#define MSG_CONTROL_RETRACT_RECOVERF		"Ãƒï¿½Ã¢â‚¬â„¢Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â²Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡  F:"
	#define MSG_AUTORETRACT						"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚Â²Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã…Â¾Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡:"
	#define MSG_FILAMENTCHANGE 					"Change filament"
	#define MSG_INIT_SDCARD 					"Init. SD-Card"
	#define MSG_CNG_SDCARD 						"Change SD-Card"
	#define MSG_ZPROBE_OUT 						"Z probe out. bed"
	#define MSG_POSITION_UNKNOWN 				"Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET 					"Z Offset"
	#define MSG_BABYSTEP_X 						"Babystep X"
	#define MSG_BABYSTEP_Y 						"Babystep Y"
	#define MSG_BABYSTEP_Z 						"Babystep Z"
	#define MSG_ENDSTOP_ABORT 					"Endstop abort"
	#define MSG_CONTRAST 						"Contrast"

// Serial Console Messages

	#define MSG_Enqueing						"Ãƒï¿½Ã¢â‚¬â€�Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¾ \""
	#define MSG_POWERUP							"Ãƒï¿½Ã¢â‚¬â„¢Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â»Ãƒâ€˜Ã…Â½Ãƒâ€˜Ã¢â‚¬Â¡Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Âµ Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¯Â¿Â½"
	#define MSG_EXTERNAL_RESET					" Ãƒï¿½Ã¢â‚¬â„¢Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â¹ Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â±Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½"
	#define MSG_BROWNOUT_RESET					" Brown out Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â±Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½"
	#define MSG_WATCHDOG_RESET					" Watchdog Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â±Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½"
	#define MSG_SOFTWARE_RESET					" Ãƒï¿½Ã‚Â¿Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â³Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¼Ãƒï¿½Ã‚Â¼Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¢â‚¬Â¹Ãƒï¿½Ã‚Â¹ Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â±Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½"
	#define MSG_AUTHOR							" | Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚Â²Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â€šÂ¬: "
	#define MSG_CONFIGURATION_VER				" Ãƒï¿½Ã…Â¸Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Âµ Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Âµ: "
	#define MSG_FREE_MEMORY						" Ãƒï¿½Ã…Â¸Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¼Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¸ Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¾: "
	#define MSG_PLANNER_BUFFER_BYTES			"  Ãƒï¿½Ã¢â‚¬ËœÃƒâ€˜Ã†â€™Ãƒâ€˜Ã¢â‚¬Å¾Ãƒâ€˜Ã¢â‚¬Å¾Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬ Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â‚¬Â¡Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â¸ Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â¼Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â´ Bytes: "
	#define MSG_OK								"ok"
	#define MSG_FILE_SAVED						"Ãƒï¿½Ã‚Â¤Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¹Ãƒï¿½Ã‚Â» Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â½."
	#define MSG_ERR_LINE_NO						"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â¼Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â½ Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¸ Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¾ Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Âµ Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¯Â¿Â½ Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â°+1, Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¯Â¿Â½ Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â°:"
	#define MSG_ERR_CHECKSUM_MISMATCH			"Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â»Ãƒâ€˜Ã…â€™Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¯Â¿Â½ Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â¼Ãƒï¿½Ã‚Â¼Ãƒï¿½Ã‚Â° Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Âµ Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Å¡, Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¯Â¿Â½ Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â°:"
	#define MSG_ERR_NO_CHECKSUM					"Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Å¡ Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â»Ãƒâ€˜Ã…â€™Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â¹ Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â¼Ãƒï¿½Ã‚Â¼Ãƒâ€˜Ã¢â‚¬Â¹ Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â»Ãƒâ€˜Ã¯Â¿Â½ Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¸, Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¯Â¿Â½ Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â°:"
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM	"Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Å¡ Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¸ Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â»Ãƒâ€˜Ã¯Â¿Â½ Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â»Ãƒâ€˜Ã…â€™Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â¹ Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â¼Ãƒï¿½Ã‚Â¼Ãƒâ€˜Ã¢â‚¬Â¹, Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¯Â¿Â½ Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â°:"
	#define MSG_FILE_PRINTED					"Ãƒï¿½Ã…Â¸Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Â¡Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™ Ãƒâ€˜Ã¢â‚¬Å¾Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¹Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚Â° Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°"
	#define MSG_BEGIN_FILE_LIST					"Ãƒï¿½Ã‚Â¡Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Âº Ãƒâ€˜Ã¢â‚¬Å¾Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¹Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â²"
	#define MSG_END_FILE_LIST					"Ãƒï¿½Ã…Â¡Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Â  Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â° Ãƒâ€˜Ã¢â‚¬Å¾Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¹Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â²"
	#define MSG_M104_INVALID_EXTRUDER			"M104 Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â° Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â° "
	#define MSG_M105_INVALID_EXTRUDER			"M105 Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â° Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â° "
	#define MSG_M200_INVALID_EXTRUDER			"M200 Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â° Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â° "
	#define MSG_M218_INVALID_EXTRUDER			"M218 Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â° Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â° "
	#define MSG_M221_INVALID_EXTRUDER			"M221 Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â° Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â° "
	#define MSG_ERR_NO_THERMISTORS				"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Å¡ Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¼Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â° - Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Å¡ Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â¼Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã†â€™Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã¢â‚¬Â¹"
	#define MSG_M109_INVALID_EXTRUDER			"M109 Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â° Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â° "
	#define MSG_HEATING							"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â²...  "
	#define MSG_HEATING_COMPLETE				"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â³Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¾.    "
	#define MSG_BED_HEATING						"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â² Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚Â°...     "
	#define MSG_BED_DONE						"Ãƒï¿½Ã‚Â¡Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â» Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Å¡.        "
	#define MSG_M115_REPORT						"FIRMWARE_NAME:Marlin V1; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X							" Count X:"
	#define MSG_ERR_KILLED						"Ãƒï¿½Ã…Â¸Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬ Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â½. Ãƒï¿½Ã‚Â²Ãƒâ€˜Ã¢â‚¬Â¹Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â² kill() !!"
	#define MSG_ERR_STOPPED						" ""
	#define MSG_RESEND							""
	#define MSG_UNKNOWN_COMMAND					"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¯Â¿Â½ Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â¼Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â°:\""
	#define MSG_ACTIVE_EXTRUDER					"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¢â‚¬Â¹Ãƒï¿½Ã‚Â¹ Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬: "
	#define MSG_INVALID_EXTRUDER				"Ãƒï¿½Ã…Â¾Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â° Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â°"
	#define MSG_X_MIN							"x_min:"
	#define MSG_X_MAX							"x_max:"
	#define MSG_Y_MIN							"y_min:"
	#define MSG_Y_MAX							"y_max:"
	#define MSG_Z_MIN							"z_min:"
	#define MSG_Z_MAX							"z_max:"
	#define MSG_M119_REPORT						"Ãƒï¿½Ã‚Â¡Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã†â€™Ãƒâ€˜Ã¯Â¿Â½ Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¢â‚¬Â Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â²"
	#define MSG_ENDSTOP_HIT						"Ãƒï¿½Ã‚Â¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â‚¬Â¹Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Âµ Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¢â‚¬Â Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â°"
	#define MSG_ENDSTOP_OPEN					"Ãƒï¿½Ã…Â¡Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¢â‚¬Â Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Âº Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â¶Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â½"
	#define MSG_HOTEND_OFFSET					"Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR				"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚Âµ Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã¢â‚¬Â¹Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™ Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã†â€™"
	#define MSG_SD_INIT_FAIL					"Ãƒï¿½Ã…Â¾Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â° Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¢â‚¬Â Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Â Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â¸ SD"
	#define MSG_SD_VOL_INIT_FAIL				"Ãƒï¿½Ã…Â¾Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â° Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¢â‚¬Â Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Â Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â¸ Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â»Ãƒï¿½Ã‚Â°"
	#define MSG_SD_OPENROOT_FAIL				"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚Âµ Ãƒï¿½Ã‚Â¿Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â‚¬Â¡Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™ Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â¶Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â¼Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Âµ Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¯Â¿Â½"
	#define MSG_SD_CARD_OK						"SD Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â° Ãƒï¿½Ã‚Â² Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Âµ"
	#define MSG_SD_WORKDIR_FAIL					"Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Âµ Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã¢â‚¬Â¹Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™ Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â‚¬Â¡Ãƒâ€˜Ã†â€™Ãƒâ€˜Ã…Â½ Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã†â€™"
	#define MSG_SD_OPEN_FILE_FAIL				"Ãƒï¿½Ã…Â¾Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â° Ãƒâ€˜Ã¢â‚¬Â¡Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¯Â¿Â½, Ãƒâ€˜Ã¢â‚¬Å¾Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¹Ãƒï¿½Ã‚Â»: "
	#define MSG_SD_FILE_OPENED					"Ãƒï¿½Ã‚Â¤Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¹Ãƒï¿½Ã‚Â» Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã¢â‚¬Â¹Ãƒâ€˜Ã¢â‚¬Å¡:"
	#define MSG_SD_SIZE							" Ãƒï¿½Ã‚Â Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â¼Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â€šÂ¬:"
	#define MSG_SD_FILE_SELECTED				"Ãƒï¿½Ã‚Â¤Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¹Ãƒï¿½Ã‚Â» Ãƒï¿½Ã‚Â²Ãƒâ€˜Ã¢â‚¬Â¹Ãƒï¿½Ã‚Â±Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â½"
	#define MSG_SD_WRITE_TO_FILE				"Ãƒï¿½Ã¢â‚¬â€�Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã…â€™ Ãƒï¿½Ã‚Â² Ãƒâ€˜Ã¢â‚¬Å¾Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¹Ãƒï¿½Ã‚Â»: "
	#define MSG_SD_PRINTING_BYTE				"SD Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Â¡Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã…â€™ byte "
	#define MSG_SD_NOT_PRINTING					"Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Å¡ SD Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚ÂµÃƒâ€˜Ã¢â‚¬Â¡Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¸"
	#define MSG_SD_ERR_WRITE_TO_FILE			"Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â° Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â¸ Ãƒï¿½Ã‚Â² Ãƒâ€˜Ã¢â‚¬Å¾Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¹Ãƒï¿½Ã‚Â»"
	#define MSG_SD_CANT_ENTER_SUBDIR			"Ãƒï¿½Ã¯Â¿Â½Ãƒï¿½Ã‚Âµ Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¹Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¸ Ãƒï¿½Ã‚Â² Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â¿Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã†â€™:"
	#define MSG_STEPPER_TOO_HIGH				"Ãƒï¿½Ã‚Â§Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â° Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â³Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â² Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â‚¬Â¡Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â½Ãƒâ€˜Ã…â€™ Ãƒï¿½Ã‚Â²Ãƒâ€˜Ã¢â‚¬Â¹Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â° : "
	#define MSG_ENDSTOPS_HIT					"Ãƒï¿½Ã‚ÂºÃƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¢â‚¬Â Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â²Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Âº Ãƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â±Ãƒï¿½Ã‚Â¾Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â°Ãƒï¿½Ã‚Â»: "
	#define MSG_ERR_COLD_EXTRUDE_STOP			" Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Â°Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â° Ãƒâ€˜Ã¢â‚¬Â¦Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¾Ãƒï¿½Ã‚Â¹ Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â¸"
	#define MSG_ERR_LONG_EXTRUDE_STOP			" Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â°Ãƒâ€˜Ã¢â‚¬Â°Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¢â‚¬Å¡Ãƒï¿½Ã‚Â° Ãƒï¿½Ã‚Â¿Ãƒâ€˜Ã¢â€šÂ¬Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â²Ãƒâ€˜Ã¢â‚¬Â¹Ãƒâ€˜Ã‹â€ Ãƒï¿½Ã‚ÂµÃƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â¸Ãƒâ€˜Ã¯Â¿Â½ Ãƒï¿½Ã‚Â´Ãƒï¿½Ã‚Â»Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â½Ãƒï¿½Ã‚Â½Ãƒâ€˜Ã¢â‚¬Â¹ Ãƒâ€˜Ã¯Â¿Â½Ãƒï¿½Ã‚ÂºÃƒâ€˜Ã¯Â¿Â½Ãƒâ€˜Ã¢â‚¬Å¡Ãƒâ€˜Ã¢â€šÂ¬Ãƒâ€˜Ã†â€™Ãƒï¿½Ã‚Â·Ãƒï¿½Ã‚Â¸Ãƒï¿½Ã‚Â¸"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"
*/
#endif


#if LANGUAGE_CHOICE == 7

// LCD Menu Messages
// Please note these are limited to 17 characters!
  #define MSG_DISPLAY_SensROmax "Sens RO Max" //MK3
  #define MSG_DISPLAY_SensROmin "Sens RO Min" //MK3
  #define MSG_DISPLAY_Pcirc "P circ" //MK3
  #define MSG_DISPLAY_Factor2 "Factor 2" //MK3
  #define MSG_DISPLAY_Factor1 "Factor 1" //MK3
  #define MSG_DISPLAY_Meter "m" //MK3
  #define MSG_DISPLAY_Length " L:" //MK3
  #define MSG_DISPLAY_S "S:" //MK3
  #define MSG_DISPLAY_AV " Av" //MK3
  #define MSG_DISPLAY_MinWidth " Mn" //MK3
  #define MSG_DISPLAY_MaxWidth " Mx" //MK3
  #define MSG_DISPLAY_rpm2 "rpm " //MK3
  #define MSG_DISPLAY_COLD "COLD" //MK3
  #define MSG_DISPLAY_OFF "OFF " //MK3
  #define MSG_DISPLAY_E "E:" //MK3
  #define MSG_DISPLAY_rpm "rpm     " //MK3
  #define MSG_DISPLAY_Puller "Puller:" //MK3
  #define MSG_SAFETY_COOLDOWN "SAFETY COOLDOWN" //MK3
  #define MSG_EX_WARM_UP "Extruder Warming Up" //MK3
  #define MSG_EX_COOL "Extruder Cooling" //MK3
  #define MSG_AUTOT_SEQU "Autotune Sequence" //MK3
  #define MSG_AUTOT_COMPL "Autotune Complete" //MK3
  #define MSG_MIN_TEMP "Err: MINTEMP" //MK3
  #define MSG_MAX_TEMP "Err: MAXTEMP" //MK3
  #define MSG_thermal_runaway "THERMAL RUNAWAY" //MK3
  #define MSG_sensor_runout "SENSOR RUNOUT" //MK3
	#define WELCOME_MSG MACHINE_NAME " OK" //MK3
	#define MSG_MAIN "Main" //MK3
  #define MSG_PREHEAT_ABS "Preheat"  //MK3
  #define MSG_PREHEAT_ABS_SETTINGS "Preheat config" //MK3
	#define MSG_COOLDOWN "Cooldown" //MK3
  #define MSG_MOVE_E "Extruder" //MK3
	#define MSG_MOVE_P "Puller" //MK3
  #define MSG_EXT_RPM "Extruder RPM" //MK3
	#define MSG_NOZZLE "Nozzle" //MK3
	#define MSG_HEATER "Extruder Temp" //MK3
  #define MSG_LENGTH_CUTOFF "L cutoff" //MK3
  #define MSG_FILAMENT "Sensor Pos." //MK3
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
  #define MSG_WATCH "Info screen" //MK3
  #define MSG_STATS "Filament Statistics" //MK3
	#define MSG_PREPARE "Prepare" //MK3
	#define MSG_TUNE "Tune" //MK3
  #define MSG_ESTEPS "Esteps/rev/100" //MK3
	#define MSG_PSTEPS "Psteps/mm" //MK3
  #define MSG_A_RETRACT "Motor Acc" //MK3
  #define MSG_STORE_EPROM "Store memory" //MK3
	#define MSG_LOAD_EPROM "Load memory" //MK3
	#define MSG_RESTORE_FAILSAFE "Restore failsafe" //MK3
  #define MSG_TEMPERATURE "Temperature" //MK3
	#define MSG_MOTION "Motion" //MK3
  #define MSG_FILAMENT_PID "Puller PID" //MK3
  #define MSG_PAUSE_EXTRUDER "STOP Extruder" //MK3
	#define MSG_RESUME_EXTRUDER "START Extruder" //MK3
  #define MSG_AUTO_EXTRUDER "Automatic pulling" //MK3
  #define MSG_MAN_EXTRUDER "Manually pulling" //MK3
	#define MSG_CLEAR_STATS "Clear Statistics" //MK3
	#define MSG_ENABLE_STATS "Enable Statistics" //MK3
	#define MSG_DISABLE_STATS "Pause Statistics" //MK3
  #define MSG_VMAX "Vmax " //MK3
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
/* alt
	#define WELCOME_MSG MACHINE_NAME " pronto."
	#define MSG_SD_INSERTED          "SD Card inserita"
	#define MSG_SD_REMOVED           "SD Card rimossa"
	#define MSG_MAIN                 "Menu principale"
	#define MSG_AUTOSTART            "Autostart"
	#define MSG_DISABLE_STEPPERS     "Disabilita Motori"
	#define MSG_AUTO_HOME            "Auto Home"
	#define MSG_SET_ORIGIN           "Imposta Origine"
	#define MSG_PREHEAT_PLA          "Preriscalda PLA"
	#define MSG_PREHEAT_PLA0         "Preriscalda PLA 1"
	#define MSG_PREHEAT_PLA1         "Preriscalda PLA 2"
	#define MSG_PREHEAT_PLA2         "Preriscalda PLA 3"
	#define MSG_PREHEAT_PLA012       "Preris. PLA Tutto"
	#define MSG_PREHEAT_PLA_BEDONLY  "Preri. PLA Piatto"
	#define MSG_PREHEAT_PLA_SETTINGS "Preris. PLA Conf"
	#define MSG_PREHEAT_ABS          "Preriscalda ABS"
	#define MSG_PREHEAT_ABS0         "Preriscalda ABS 1"
	#define MSG_PREHEAT_ABS1         "Preriscalda ABS 2"
	#define MSG_PREHEAT_ABS2         "Preriscalda ABS 3"
	#define MSG_PREHEAT_ABS012       "Preris. ABS Tutto"
	#define MSG_PREHEAT_ABS_BEDONLY  "Preri. ABS Piatto"
	#define MSG_PREHEAT_ABS_SETTINGS "Preris. ABS Conf"
	#define MSG_COOLDOWN             "Raffredda"
	#define MSG_SWITCH_PS_ON         "Switch Power On"
	#define MSG_SWITCH_PS_OFF        "Switch Power Off"
	#define MSG_EXTRUDE              "Estrudi"
	#define MSG_RETRACT              "Ritrai"
	#define MSG_MOVE_AXIS            "Muovi Asse"
	#define MSG_MOVE_X               "Move X"
	#define MSG_MOVE_Y               "Move Y"
	#define MSG_MOVE_Z               "Move Z"
	#define MSG_MOVE_E               "Extruder"
	#define MSG_MOVE_01MM            "Move 0.1mm"
	#define MSG_MOVE_1MM             "Move 1mm"
	#define MSG_MOVE_10MM            "Move 10mm"
	#define MSG_SPEED                "VelcitÃƒÆ’Ã‚Â "
	#define MSG_NOZZLE               "Ugello"
	#define MSG_NOZZLE1              "Ugello2"
	#define MSG_NOZZLE2              "Ugello3"
	#define MSG_BED                  "Piatto"
	#define MSG_FAN_SPEED            "Ventola"
	#define MSG_FLOW                 "Flusso"
	#define MSG_FLOW0                "Flusso 0"
	#define MSG_FLOW1                "Flusso 1"
	#define MSG_FLOW2                "Flusso 2"
	#define MSG_CONTROL              "Controllo"
	#define MSG_MIN                  " \002 Min:"
	#define MSG_MAX                  " \002 Max:"
	#define MSG_FACTOR               " \002 Fact:"
	#define MSG_AUTOTEMP             "Autotemp"
	#define MSG_ON                   "On "
	#define MSG_OFF                  "Off"
	#define MSG_PID_P                "PID-P"
	#define MSG_PID_I                "PID-I"
	#define MSG_PID_D                "PID-D"
	#define MSG_PID_C                "PID-C"
	#define MSG_ACC                  "Accel"
	#define MSG_VXY_JERK             "Vxy-jerk"
	#define MSG_VZ_JERK              "Vz-jerk"
	#define MSG_VE_JERK              "Ve-jerk"
	#define MSG_VMAX                 "Vmax"
	#define MSG_X                    "x"
	#define MSG_Y                    "y"
	#define MSG_Z                    "z"
	#define MSG_E                    "e"
	#define MSG_VMIN                 "Vmin"
	#define MSG_VTRAV_MIN            "VTrav min"
	#define MSG_AMAX                 "Amax"
	#define MSG_A_RETRACT            "A-retract"
	#define MSG_XSTEPS               "Xpassi/mm"
	#define MSG_YSTEPS               "Ypassi/mm"
	#define MSG_ZSTEPS               "Zpassi/mm"
	#define MSG_ESTEPS               "Epassi/mm"
	#define MSG_RECTRACT             "Ritrai"
	#define MSG_TEMPERATURE          "Temperatura"
	#define MSG_MOTION               "Movimento"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_STORE_EPROM          "Salva in EEPROM"
	#define MSG_LOAD_EPROM           "Carica da EEPROM"
	#define MSG_RESTORE_FAILSAFE     "Impostaz. default"
	#define MSG_REFRESH              "Aggiorna"
	#define MSG_WATCH                "Guarda"
	#define MSG_PREPARE              "Prepara"
	#define MSG_TUNE                 "Adatta"
	#define MSG_PAUSE_PRINT          "Pausa"
	#define MSG_RESUME_PRINT         "Riprendi Stampa"
	#define MSG_STOP_PRINT           "Arresta Stampa"
	#define MSG_CARD_MENU            "SD Card Menu"
	#define MSG_NO_CARD              "No SD Card"
	#define MSG_DWELL                "Sospensione..."
	#define MSG_USERWAIT             "Attendi Utente..."
	#define MSG_RESUMING             "Riprendi Stampa"
	#define MSG_NO_MOVE              "Nessun Movimento."
	#define MSG_KILLED               "UCCISO. "
	#define MSG_STOPPED              "ARRESTATO. "
	#define MSG_CONTROL_RETRACT      "Ritrai mm"
	#define MSG_CONTROL_RETRACTF     "Ritrai  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Salta mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT          "AutoArretramento"
	#define MSG_FILAMENTCHANGE       "Cambia filamento"
	#define MSG_INIT_SDCARD          "Iniz. SD-Card"
	#define MSG_CNG_SDCARD           "Cambia SD-Card"
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"
	#define MSG_CONTRAST "Contrast"

// Serial Console Messages

	#define MSG_Enqueing             "accodamento \""
	#define MSG_POWERUP              "Accensione"
	#define MSG_EXTERNAL_RESET       " Reset Esterno"
	#define MSG_BROWNOUT_RESET       " Brown out Reset"
	#define MSG_WATCHDOG_RESET       " Watchdog Reset"
	#define MSG_SOFTWARE_RESET       " Software Reset"
	#define MSG_AUTHOR               " | Autore: "
	#define MSG_CONFIGURATION_VER    " Ultimo Aggiornamento: "
	#define MSG_FREE_MEMORY          " Memoria Libera: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK                   "ok"
	#define MSG_FILE_SAVED           "File Salvato."
	#define MSG_ERR_LINE_NO          "Il Numero della Linea non corrisponde al Numero dell'Ultima Linea+1, Ultima Linea: "
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum non corrispondente, Ultima Linea: "
	#define MSG_ERR_NO_CHECKSUM      "Nessun Checksum con Numero di Linea, Ultima Linea: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "Nessun Numero di Linea con Checksum, Ultima Linea: "
	#define MSG_FILE_PRINTED         "File stampato"
	#define MSG_BEGIN_FILE_LIST      "Inizio Lista File"
	#define MSG_END_FILE_LIST        "Fine Lista File"
	#define MSG_M104_INVALID_EXTRUDER "M104 Estrusore non valido "
	#define MSG_M105_INVALID_EXTRUDER "M105 Estrusore non valido "
	#define MSG_M200_INVALID_EXTRUDER "M200 Estrusore non valido "
	#define MSG_M218_INVALID_EXTRUDER "M218 Estrusore non valido "
	#define MSG_M221_INVALID_EXTRUDER "M221 Estrusore non valido "
	#define MSG_ERR_NO_THERMISTORS   "Nessun Termistore - nessuna temperatura"
	#define MSG_M109_INVALID_EXTRUDER "M109 Estrusore non valido "
	#define MSG_HEATING              "Riscaldamento..."
	#define MSG_HEATING_COMPLETE     "Stampante Calda."
	#define MSG_BED_HEATING          "Riscaldamento Piatto."
	#define MSG_BED_DONE             "Piatto Pronto."
	#define MSG_M115_REPORT          "FIRMWARE_NAME:Marlin V1; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X              " Calcola X: "
	#define MSG_ERR_KILLED           "Stampante Calda. kill() chiamata !!"
	#define MSG_ERR_STOPPED          "Stampante fermata a causa di errori. Risolvi l'errore e usa M999 per ripartire!. (Reset temperatura. Impostala prima di ripartire)"
	#define MSG_RESEND               "Reinviato:"
	#define MSG_UNKNOWN_COMMAND      "Comando sconosciuto: \""
	#define MSG_ACTIVE_EXTRUDER      "Attiva Estrusore: "
	#define MSG_INVALID_EXTRUDER     "Estrusore non valido"
	#define MSG_X_MIN                "x_min: "
	#define MSG_X_MAX                "x_max: "
	#define MSG_Y_MIN                "y_min: "
	#define MSG_Y_MAX                "y_max: "
	#define MSG_Z_MIN                "z_min: "
	#define MSG_Z_MAX                "z_max: "
	#define MSG_M119_REPORT          "Segnalazione stato degli endstop"
	#define MSG_ENDSTOP_HIT          "INNESCATO"
	#define MSG_ENDSTOP_OPEN         "aperto"
	#define MSG_HOTEND_OFFSET        "Hotend offsets:"

	#define MSG_SD_CANT_OPEN_SUBDIR  "Impossibile aprire sottocartella"
	#define MSG_SD_INIT_FAIL         "Fallita Inizializzazione SD"
	#define MSG_SD_VOL_INIT_FAIL     "Fallito il montaggio del Volume"
	#define MSG_SD_OPENROOT_FAIL     "Fallita l'apertura Cartella Principale"
	#define MSG_SD_CARD_OK           "SD card ok"
	#define MSG_SD_WORKDIR_FAIL      "Fallita l'apertura Cartella di Lavoro"
	#define MSG_SD_OPEN_FILE_FAIL    "Fallita l'apertura del File: "
	#define MSG_SD_FILE_OPENED       "File aperto: "
	#define MSG_SD_SIZE              " Dimensione: "
	#define MSG_SD_FILE_SELECTED     "File selezionato"
	#define MSG_SD_WRITE_TO_FILE     "Scrittura su file: "
	#define MSG_SD_PRINTING_BYTE     "Si sta scrivendo il byte su SD "
	#define MSG_SD_NOT_PRINTING      "Non si sta scrivendo su SD"
	#define MSG_SD_ERR_WRITE_TO_FILE "Errore nella scrittura su file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Impossibile entrare nella sottocartella: "

	#define MSG_STEPPER_TOO_HIGH     "Steprate troppo alto: "
	#define MSG_ENDSTOPS_HIT         "Raggiunto il fondo carrello: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " prevenuta estrusione fredda"
	#define MSG_ERR_LONG_EXTRUDE_STOP " prevenuta estrusione troppo lunga"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Qualcosa non va in MenuStructure."
*/
#endif


#if LANGUAGE_CHOICE == 8

// LCD Menu Messages
// Please note these are limited to 17 characters!
  #define MSG_DISPLAY_SensROmax "Sens RO Max" //MK3
  #define MSG_DISPLAY_SensROmin "Sens RO Min" //MK3
  #define MSG_DISPLAY_Pcirc "P circ" //MK3
  #define MSG_DISPLAY_Factor2 "Factor 2" //MK3
  #define MSG_DISPLAY_Factor1 "Factor 1" //MK3
  #define MSG_DISPLAY_Meter "m" //MK3
  #define MSG_DISPLAY_Length " L:" //MK3
  #define MSG_DISPLAY_S "S:" //MK3
  #define MSG_DISPLAY_AV " Av" //MK3
  #define MSG_DISPLAY_MinWidth " Mn" //MK3
  #define MSG_DISPLAY_MaxWidth " Mx" //MK3
  #define MSG_DISPLAY_rpm2 "rpm " //MK3
  #define MSG_DISPLAY_COLD "COLD" //MK3
  #define MSG_DISPLAY_OFF "OFF " //MK3
  #define MSG_DISPLAY_E "E:" //MK3
  #define MSG_DISPLAY_rpm "rpm     " //MK3
  #define MSG_DISPLAY_Puller "Puller:" //MK3
  #define MSG_SAFETY_COOLDOWN "SAFETY COOLDOWN" //MK3
  #define MSG_EX_WARM_UP "Extruder Warming Up" //MK3
  #define MSG_EX_COOL "Extruder Cooling" //MK3
  #define MSG_AUTOT_SEQU "Autotune Sequence" //MK3
  #define MSG_AUTOT_COMPL "Autotune Complete" //MK3
  #define MSG_MIN_TEMP "Err: MINTEMP" //MK3
  #define MSG_MAX_TEMP "Err: MAXTEMP" //MK3
  #define MSG_thermal_runaway "THERMAL RUNAWAY" //MK3
  #define MSG_sensor_runout "SENSOR RUNOUT" //MK3
	#define WELCOME_MSG MACHINE_NAME " OK" //MK3
	#define MSG_MAIN "Main" //MK3
  #define MSG_PREHEAT_ABS "Preheat"  //MK3
  #define MSG_PREHEAT_ABS_SETTINGS "Preheat config" //MK3
	#define MSG_COOLDOWN "Cooldown" //MK3
  #define MSG_MOVE_E "Extruder" //MK3
	#define MSG_MOVE_P "Puller" //MK3
  #define MSG_EXT_RPM "Extruder RPM" //MK3
	#define MSG_NOZZLE "Nozzle" //MK3
	#define MSG_HEATER "Extruder Temp" //MK3
  #define MSG_LENGTH_CUTOFF "L cutoff" //MK3
  #define MSG_FILAMENT "Sensor Pos." //MK3
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
  #define MSG_WATCH "Info screen" //MK3
  #define MSG_STATS "Filament Statistics" //MK3
	#define MSG_PREPARE "Prepare" //MK3
	#define MSG_TUNE "Tune" //MK3
  #define MSG_ESTEPS "Esteps/rev/100" //MK3
	#define MSG_PSTEPS "Psteps/mm" //MK3
  #define MSG_A_RETRACT "Motor Acc" //MK3
  #define MSG_STORE_EPROM "Store memory" //MK3
	#define MSG_LOAD_EPROM "Load memory" //MK3
	#define MSG_RESTORE_FAILSAFE "Restore failsafe" //MK3
  #define MSG_TEMPERATURE "Temperature" //MK3
	#define MSG_MOTION "Motion" //MK3
  #define MSG_FILAMENT_PID "Puller PID" //MK3
  #define MSG_PAUSE_EXTRUDER "STOP Extruder" //MK3
	#define MSG_RESUME_EXTRUDER "START Extruder" //MK3
  #define MSG_AUTO_EXTRUDER "Automatic pulling" //MK3
  #define MSG_MAN_EXTRUDER "Manually pulling" //MK3
	#define MSG_CLEAR_STATS "Clear Statistics" //MK3
	#define MSG_ENABLE_STATS "Enable Statistics" //MK3
	#define MSG_DISABLE_STATS "Pause Statistics" //MK3
  #define MSG_VMAX "Vmax " //MK3
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
/* alt
	#define WELCOME_MSG MACHINE_NAME " pronto."
	#define MSG_SD_INSERTED "Cartao inserido"
	#define MSG_SD_REMOVED "Cartao removido"
	#define MSG_MAIN " Menu principal \003"
	#define MSG_AUTOSTART "Autostart"
	#define MSG_DISABLE_STEPPERS " Apagar motores"
	#define MSG_AUTO_HOME "Ir para origen"
	#define MSG_SET_ORIGIN "Estabelecer orig."
	#define MSG_PREHEAT_PLA "Pre-aquecer PLA"
	#define MSG_PREHEAT_PLA0 " pre-aquecer PLA 1"
	#define MSG_PREHEAT_PLA1 " pre-aquecer PLA 2"
	#define MSG_PREHEAT_PLA2 " pre-aquecer PLA 3"
	#define MSG_PREHEAT_PLA012 " pre-aq. PLA Tudo"
	#define MSG_PREHEAT_PLA_BEDONLY  " pre-aq. PLA \002Base"
	#define MSG_PREHEAT_PLA_SETTINGS "PLA setting"
	#define MSG_PREHEAT_ABS "Pre-aquecer ABS"
	#define MSG_PREHEAT_ABS0 " pre-aquecer ABS 1"
	#define MSG_PREHEAT_ABS1 " pre-aquecer ABS 2"
	#define MSG_PREHEAT_ABS2 " pre-aquecer ABS 3"
	#define MSG_PREHEAT_ABS012 " pre-aq. ABS Tudo"
	#define MSG_PREHEAT_ABS_BEDONLY  " pre-aq. ABS \002Base"
	#define MSG_PREHEAT_ABS_SETTINGS "ABS setting"
	#define MSG_COOLDOWN "Esfriar"
	#define MSG_SWITCH_PS_ON "Switch Power On"
	#define MSG_SWITCH_PS_OFF "Switch Power Off"
	#define MSG_EXTRUDE "Extrudar"
	#define MSG_RETRACT "Retrair"
	#define MSG_PREHEAT_PLA "Pre-aquecer PLA"
	#define MSG_PREHEAT_ABS "Pre-aquecer ABS"
	#define MSG_MOVE_AXIS "Mover eixo      \x7E"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_E "Extruder"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED "Velocidade:"
	#define MSG_NOZZLE "\002Nozzle:"
	#define MSG_NOZZLE1 "\002Nozzle2:"
	#define MSG_NOZZLE2 "\002Nozzle3:"
	#define MSG_BED "\002Base:"
	#define MSG_FAN_SPEED "Velocidade vento."
	#define MSG_FLOW "Fluxo:"
	#define MSG_FLOW0 "Fluxo0:"
	#define MSG_FLOW1 "Fluxo1:"
	#define MSG_FLOW2 "Fluxo2:"
	#define MSG_CONTROL "Controle \003"
	#define MSG_MIN "\002 Min:"
	#define MSG_MAX "\002 Max:"
	#define MSG_FACTOR "\002 Fact:"
	#define MSG_AUTOTEMP "Autotemp:"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_PID_P "PID-P: "
	#define MSG_PID_I "PID-I: "
	#define MSG_PID_D "PID-D: "
	#define MSG_PID_C "PID-C: "
	#define MSG_ACC  "Acc:"
	#define MSG_VXY_JERK "Vxy-jerk: "
	#define MSG_VZ_JERK "Vz-jerk"
	#define MSG_VE_JERK "Ve-jerk"
	#define MSG_VMAX " Vmax "
	#define MSG_X "x:"
	#define MSG_Y "y:"
	#define MSG_Z "z:"
	#define MSG_E "e:"
	#define MSG_VMIN "Vmin:"
	#define MSG_VTRAV_MIN "VTrav min:"
	#define MSG_AMAX "Amax "
	#define MSG_A_RETRACT "A-retract:"
	#define MSG_XSTEPS "Xpasso/mm:"
	#define MSG_YSTEPS "Ypasso/mm:"
	#define MSG_ZSTEPS "Zpasso/mm:"
	#define MSG_ESTEPS "Epasso/mm:"
	#define MSG_MAIN_WIDE "Menu Principal  \003"
	#define MSG_RECTRACT "Retrair"
	#define MSG_TEMPERATURE "Temperatura"
	#define MSG_MOTION "Movimento"
	#define MSG_STORE_EPROM "Guardar memoria"
	#define MSG_LOAD_EPROM "Carregar memoria"
	#define MSG_RESTORE_FAILSAFE "Rest. de emergen."
	#define MSG_REFRESH "\004Recarregar"
	#define MSG_WATCH "Monitorar   \003"
	#define MSG_PREPARE "Preparar \x7E"
	#define MSG_PREPARE_ALT "Preparar \003"
	#define MSG_CONTROL_ARROW "Controle \x7E"
	#define MSG_RETRACT_ARROW "Retrair \x7E"
	#define MSG_TUNE "Tune    \x7E"
	#define MSG_PAUSE_PRINT "Pausar impressao"
	#define MSG_RESUME_PRINT "Resumir impressao"
	#define MSG_STOP_PRINT "Parar impressao"
	#define MSG_CARD_MENU "Menu cartao SD"
	#define MSG_NO_CARD "Sem cartao SD"
	#define MSG_DWELL "Repouso..."
	#define MSG_USERWAIT "Esperando ordem"
	#define MSG_RESUMING "Resuming print"
	#define MSG_NO_MOVE "Sem movimento"
	#define MSG_KILLED "PARADA DE EMERG."
	#define MSG_STOPPED "PARADA. "
	#define MSG_STEPPER_RELEASED "Lancado."
	#define MSG_CONTROL_RETRACT  " Retrair mm:"
	#define MSG_CONTROL_RETRACTF " Retrair  F:"
	#define MSG_CONTROL_RETRACT_ZLIFT " Levantar mm:"
	#define MSG_CONTROL_RETRACT_RECOVER " DesRet +mm:"
	#define MSG_CONTROL_RETRACT_RECOVERF " DesRet  F:"
	#define MSG_AUTORETRACT " AutoRetr.:"
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Init. SD-Card"
	#define MSG_CNG_SDCARD "Change SD-Card"
	#define MSG_ZPROBE_OUT "Son. fora da mesa"
	#define MSG_POSITION_UNKNOWN "XY antes de Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"
	#define MSG_CONTRAST "Contrast"

// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " Reset Externo"
	#define MSG_BROWNOUT_RESET " Reset por voltagem incorreta"
	#define MSG_WATCHDOG_RESET " Reset por Bloqueio"
	#define MSG_SOFTWARE_RESET " Reset por Software"
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Ultima atualizacao: "
	#define MSG_FREE_MEMORY " memoria Livre: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Guardado."
	#define MSG_ERR_LINE_NO "O Numero da linha Nao e igual ao ultimo Numero da linha+1, Ultima linha:"
	#define MSG_ERR_CHECKSUM_MISMATCH "O checksum Nao coincide, Ultima linha:"
	#define MSG_ERR_NO_CHECKSUM "Nao foi possivel encontrar o checksum com o numero da linha, Ultima linha :"
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "Nao ha o numero da linha com o checksum, Ultima linha:"
	#define MSG_FILE_PRINTED "Impressao terminada"
	#define MSG_BEGIN_FILE_LIST "ComeÃƒÆ’Ã‚Â§o da lista de arquivos"
	#define MSG_END_FILE_LIST "Fim da lista de arquivos"
	#define MSG_M104_INVALID_EXTRUDER "M104 Extrusor invÃƒÆ’Ã‚Â¡lido "
	#define MSG_M105_INVALID_EXTRUDER "M105 Extrusor invÃƒÆ’Ã‚Â¡lido "
	#define MSG_M200_INVALID_EXTRUDER "M200 Extrusor invÃƒÆ’Ã‚Â¡lido "
	#define MSG_M218_INVALID_EXTRUDER "M218 Extrusor invÃƒÆ’Ã‚Â¡lido "
	#define MSG_M221_INVALID_EXTRUDER "M221 Extrusor invÃƒÆ’Ã‚Â¡lido "
	#define MSG_ERR_NO_THERMISTORS "Nao ha termistor - no temp"
	#define MSG_M109_INVALID_EXTRUDER "M109 Extrusor invÃƒÆ’Ã‚Â¡lido "
	#define MSG_HEATING "Aquecendo..."
	#define MSG_HEATING_COMPLETE "Aquecido."
	#define MSG_BED_HEATING "Aquecendo a Base."
	#define MSG_BED_DONE "Base quente."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Marlin V1; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Conta X:"
	#define MSG_ERR_KILLED "Impressora parada com kill() !!"
	#define MSG_ERR_STOPPED "Impressora parada por erros. Coserte o erro e use M999 para recomeÃƒÆ’Ã‚Â§ar!. (Temperatura reiniciada. Ajuste antes de recomeÃƒÆ’Ã‚Â§ar)"
	#define MSG_RESEND "Reenviar:"
	#define MSG_UNKNOWN_COMMAND "Comando desconhecido:\""
	#define MSG_ACTIVE_EXTRUDER "Extrusor ativo: "
	#define MSG_INVALID_EXTRUDER "Extrusor invalido"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Relatando estado do ponto final"
	#define MSG_ENDSTOP_HIT "PULSADO"
	#define MSG_ENDSTOP_OPEN "Aberto"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"

	#define MSG_SD_CANT_OPEN_SUBDIR "Nao pode abrir sub diretorio"
	#define MSG_SD_INIT_FAIL "Falha ao iniciar SD"
	#define MSG_SD_VOL_INIT_FAIL "Falha ao montar volume"
	#define MSG_SD_OPENROOT_FAIL "Falha ao abrir diretorio raiz"
	#define MSG_SD_CARD_OK "cartao SD ok"
	#define MSG_SD_WORKDIR_FAIL "Falha ao abrir diretorio de trabalho"
	#define MSG_SD_OPEN_FILE_FAIL "Erro ao abrir, Arquivo: "
	#define MSG_SD_FILE_OPENED "Arquivo aberto:"
	#define MSG_SD_SIZE " Size:"
	#define MSG_SD_FILE_SELECTED "Arquivo selecionado"
	#define MSG_SD_WRITE_TO_FILE "Escrevendo no arquivo: "
	#define MSG_SD_PRINTING_BYTE "SD imprimindo o byte "
	#define MSG_SD_NOT_PRINTING "Nao esta se imprimindo com o SD"
	#define MSG_SD_ERR_WRITE_TO_FILE "Erro ao escrever no arquivo"
	#define MSG_SD_CANT_ENTER_SUBDIR "Nao pode abrir o sub diretorio:"

	#define MSG_STEPPER_TOO_HIGH "Steprate muito alto : "
	#define MSG_ENDSTOPS_HIT "O ponto final foi tocado: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " Extrusao a frio evitada"
	#define MSG_ERR_LONG_EXTRUDE_STOP " Extrusao muito larga evitada"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Algo esta errado na estrutura do Menu."
*/
#endif



#if LANGUAGE_CHOICE == 9

// LCD Menu Messages
// Please note these are limited to 17 characters!
  #define MSG_DISPLAY_SensROmax "Sens RO Max" //MK3
  #define MSG_DISPLAY_SensROmin "Sens RO Min" //MK3
  #define MSG_DISPLAY_Pcirc "P circ" //MK3
  #define MSG_DISPLAY_Factor2 "Factor 2" //MK3
  #define MSG_DISPLAY_Factor1 "Factor 1" //MK3
  #define MSG_DISPLAY_Meter "m" //MK3
  #define MSG_DISPLAY_Length " L:" //MK3
  #define MSG_DISPLAY_S "S:" //MK3
  #define MSG_DISPLAY_AV " Av" //MK3
  #define MSG_DISPLAY_MinWidth " Mn" //MK3
  #define MSG_DISPLAY_MaxWidth " Mx" //MK3
  #define MSG_DISPLAY_rpm2 "rpm " //MK3
  #define MSG_DISPLAY_COLD "COLD" //MK3
  #define MSG_DISPLAY_OFF "OFF " //MK3
  #define MSG_DISPLAY_E "E:" //MK3
  #define MSG_DISPLAY_rpm "rpm     " //MK3
  #define MSG_DISPLAY_Puller "Puller:" //MK3
  #define MSG_SAFETY_COOLDOWN "SAFETY COOLDOWN" //MK3
  #define MSG_EX_WARM_UP "Extruder Warming Up" //MK3
  #define MSG_EX_COOL "Extruder Cooling" //MK3
  #define MSG_AUTOT_SEQU "Autotune Sequence" //MK3
  #define MSG_AUTOT_COMPL "Autotune Complete" //MK3
  #define MSG_MIN_TEMP "Err: MINTEMP" //MK3
  #define MSG_MAX_TEMP "Err: MAXTEMP" //MK3
  #define MSG_thermal_runaway "THERMAL RUNAWAY" //MK3
  #define MSG_sensor_runout "SENSOR RUNOUT" //MK3
	#define WELCOME_MSG MACHINE_NAME " OK" //MK3
	#define MSG_MAIN "Main" //MK3
  #define MSG_PREHEAT_ABS "Preheat"  //MK3
  #define MSG_PREHEAT_ABS_SETTINGS "Preheat config" //MK3
	#define MSG_COOLDOWN "Cooldown" //MK3
  #define MSG_MOVE_E "Extruder" //MK3
	#define MSG_MOVE_P "Puller" //MK3
  #define MSG_EXT_RPM "Extruder RPM" //MK3
	#define MSG_NOZZLE "Nozzle" //MK3
	#define MSG_HEATER "Extruder Temp" //MK3
  #define MSG_LENGTH_CUTOFF "L cutoff" //MK3
  #define MSG_FILAMENT "Sensor Pos." //MK3
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
  #define MSG_WATCH "Info screen" //MK3
  #define MSG_STATS "Filament Statistics" //MK3
	#define MSG_PREPARE "Prepare" //MK3
	#define MSG_TUNE "Tune" //MK3
  #define MSG_ESTEPS "Esteps/rev/100" //MK3
	#define MSG_PSTEPS "Psteps/mm" //MK3
  #define MSG_A_RETRACT "Motor Acc" //MK3
  #define MSG_STORE_EPROM "Store memory" //MK3
	#define MSG_LOAD_EPROM "Load memory" //MK3
	#define MSG_RESTORE_FAILSAFE "Restore failsafe" //MK3
  #define MSG_TEMPERATURE "Temperature" //MK3
	#define MSG_MOTION "Motion" //MK3
  #define MSG_FILAMENT_PID "Puller PID" //MK3
  #define MSG_PAUSE_EXTRUDER "STOP Extruder" //MK3
	#define MSG_RESUME_EXTRUDER "START Extruder" //MK3
  #define MSG_AUTO_EXTRUDER "Automatic pulling" //MK3
  #define MSG_MAN_EXTRUDER "Manually pulling" //MK3
	#define MSG_CLEAR_STATS "Clear Statistics" //MK3
	#define MSG_ENABLE_STATS "Enable Statistics" //MK3
	#define MSG_DISABLE_STATS "Pause Statistics" //MK3
  #define MSG_VMAX "Vmax " //MK3
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
/*alt
	#define WELCOME_MSG MACHINE_NAME " valmis."
	#define MSG_SD_INSERTED "Kortti asetettu"
	#define MSG_SD_REMOVED "Kortti poistettu"
	#define MSG_MAIN "Palaa"
	#define MSG_AUTOSTART "Automaatti"
	#define MSG_DISABLE_STEPPERS "Vapauta moottorit"
	#define MSG_AUTO_HOME "Aja referenssiin"
	#define MSG_SET_ORIGIN "Aseta origo"
	#define MSG_PREHEAT_PLA "Esilammita PLA"
	#define MSG_PREHEAT_PLA0 "Esilammita PLA 1"
	#define MSG_PREHEAT_PLA1 "Esilammita PLA 2"
	#define MSG_PREHEAT_PLA2 "Esilammita PLA 3"
	#define MSG_PREHEAT_PLA012 "Esila. PLA Kaikki"
	#define MSG_PREHEAT_PLA_BEDONLY  "Esila. PLA Alusta"
	#define MSG_PREHEAT_PLA_SETTINGS "Esilamm. PLA konf"
	#define MSG_PREHEAT_ABS "Esilammita ABS"
	#define MSG_PREHEAT_ABS0 "Esilammita ABS 1"
	#define MSG_PREHEAT_ABS1 "Esilammita ABS 2"
	#define MSG_PREHEAT_ABS2 "Esilammita ABS 3"
	#define MSG_PREHEAT_ABS012 "Esila. ABS Kaikki"
	#define MSG_PREHEAT_ABS_BEDONLY  "Esila. ABS Alusta"
	#define MSG_PREHEAT_ABS_SETTINGS "Esilamm. ABS konf"
	#define MSG_COOLDOWN "Jaahdyta"
	#define MSG_SWITCH_PS_ON "Virta paalle"
	#define MSG_SWITCH_PS_OFF "Virta pois"
	#define MSG_EXTRUDE "Pursota"
	#define MSG_RETRACT "Veda takaisin"
	#define MSG_MOVE_AXIS "Liikuta akseleita"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_E "Extruder"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED "Nopeus"
	#define MSG_NOZZLE "Suutin"
	#define MSG_NOZZLE1 "Suutin2"
	#define MSG_NOZZLE2 "Suutin3"
	#define MSG_BED "Alusta"
	#define MSG_FAN_SPEED "Tuul. nopeus"
	#define MSG_FLOW "Virtaus"
	#define MSG_FLOW0 "Virtaus 0"
	#define MSG_FLOW1 "Virtaus 1"
	#define MSG_FLOW2 "Virtaus 2"
	#define MSG_CONTROL "Kontrolli"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Kerr"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_PID_P "PID-P"
	#define MSG_PID_I "PID-I"
	#define MSG_PID_D "PID-D"
	#define MSG_PID_C "PID-C"
	#define MSG_ACC  "Kiihtyv"
	#define MSG_VXY_JERK "Vxy-jerk"
	#define MSG_VZ_JERK "Vz-jerk"
	#define MSG_VE_JERK "Ve-jerk"
	#define MSG_VMAX "Vmax "
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_E "e"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VLiike min"
	#define MSG_AMAX "Amax "
	#define MSG_A_RETRACT "A-peruuta"
	#define MSG_XSTEPS "Xsteps/mm"
	#define MSG_YSTEPS "Ysteps/mm"
	#define MSG_ZSTEPS "Zsteps/mm"
	#define MSG_ESTEPS "Esteps/mm"
	#define MSG_RECTRACT "Veda takaisin"
	#define MSG_TEMPERATURE "Lampotila"
	#define MSG_MOTION "Liike"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_STORE_EPROM "Tallenna muistiin"
	#define MSG_LOAD_EPROM "Lataa muistista"
	#define MSG_RESTORE_FAILSAFE "Palauta oletus"
	#define MSG_REFRESH "Paivita"
	#define MSG_WATCH "Seuraa"
	#define MSG_PREPARE "Valmistele"
	#define MSG_TUNE "Saada"
	#define MSG_PAUSE_PRINT "Keskeyta tulostus"
	#define MSG_RESUME_PRINT "Jatka tulostusta"
	#define MSG_STOP_PRINT "Pysayta tulostus"
	#define MSG_CARD_MENU "Korttivalikko"
	#define MSG_NO_CARD "Ei korttia"
	#define MSG_DWELL "Nukkumassa..."
	#define MSG_USERWAIT "Odotet. valintaa"
	#define MSG_RESUMING "Jatke. tulostusta"
	#define MSG_NO_MOVE "Ei liiketta."
	#define MSG_KILLED "KILLED. "
	#define MSG_STOPPED "STOPPED. "
	#define MSG_CONTROL_RETRACT  "Veda mm"
	#define MSG_CONTROL_RETRACTF "Veda F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Z mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT "AutoVeto."
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Init. SD-Card"
	#define MSG_CNG_SDCARD "Change SD-Card"
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"

// Serial Console Messages

	#define MSG_Enqueing "jonoon \""
	#define MSG_POWERUP "Kaynnistys"
	#define MSG_EXTERNAL_RESET " Ulkoinen Reset"
	#define MSG_BROWNOUT_RESET " Alajannite Reset"
	#define MSG_WATCHDOG_RESET " Vahtikoira Reset"
	#define MSG_SOFTWARE_RESET " Ohjelmisto Reset"
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Paivitetty viimeksi: "
	#define MSG_FREE_MEMORY " Vapaata muistia: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Tiedosto tallennettu."
	#define MSG_ERR_LINE_NO "Rivinumero ei ole Viimeisin rivi+1, Viimeisin rivi: "
	#define MSG_ERR_CHECKSUM_MISMATCH "Tarkistesummassa virhe, Viimeisin rivi: "
	#define MSG_ERR_NO_CHECKSUM "Rivilla ei tarkistesummaa, Viimeisin rivi: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "Ei rivinumeroa tarkistesumman kanssa, Viimeisin rivi: "
	#define MSG_FILE_PRINTED "Tiedoston tulostus valmis"
	#define MSG_BEGIN_FILE_LIST "Tiedostolistauksen alku"
	#define MSG_END_FILE_LIST "Tiedostolistauksen loppu"
	#define MSG_M104_INVALID_EXTRUDER "M104 Virheellinen suutin "
	#define MSG_M105_INVALID_EXTRUDER "M105 Virheellinen suutin "
	#define MSG_M200_INVALID_EXTRUDER "M200 Virheellinen suutin "
	#define MSG_M218_INVALID_EXTRUDER "M218 Virheellinen suutin "
	#define MSG_M221_INVALID_EXTRUDER "M221 Virheellinen suutin "
	#define MSG_ERR_NO_THERMISTORS "Ei termistoreja - ei lampotiloja"
	#define MSG_M109_INVALID_EXTRUDER "M109 Virheellinen suutin "
	#define MSG_HEATING "Lammitan..."
	#define MSG_HEATING_COMPLETE "Lammitys valmis."
	#define MSG_BED_HEATING "Alusta lampiaa."
	#define MSG_BED_DONE "Alusta valmis."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Marlin V1; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Laskuri X: "
	#define MSG_ERR_KILLED "Tulostin pysaytetty. kill():ia kutsuttu!"
	#define MSG_ERR_STOPPED "Tulostin pysaytetty virheiden vuoksi. Korjaa virheet ja kayta M999 kaynnistaaksesi uudelleen. (Lampotila nollattiin. Aseta lampotila sen jalkeen kun jatkat.)"
	#define MSG_RESEND "Uudelleenlahetys: "
	#define MSG_UNKNOWN_COMMAND "Tuntematon komento: \""
	#define MSG_ACTIVE_EXTRUDER "Aktiivinen suutin: "
	#define MSG_INVALID_EXTRUDER "Virheellinen suutin"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Rajakytkimien tilaraportti"
	#define MSG_ENDSTOP_HIT "AKTIIVISENA"
	#define MSG_ENDSTOP_OPEN "avoinna"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"

	#define MSG_SD_CANT_OPEN_SUBDIR "Alihakemistoa ei voitu avata"
	#define MSG_SD_INIT_FAIL "SD alustus epaonnistui"
	#define MSG_SD_VOL_INIT_FAIL "volume.init epaonnistui"
	#define MSG_SD_OPENROOT_FAIL "openRoot epaonnistui"
	#define MSG_SD_CARD_OK "SD kortti ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open epaonnistui"
	#define MSG_SD_OPEN_FILE_FAIL "avaus epaonnistui, Tiedosto: "
	#define MSG_SD_FILE_OPENED "Tiedosto avattu: "
	#define MSG_SD_SIZE " Koko: "
	#define MSG_SD_FILE_SELECTED "Tiedosto valittu"
	#define MSG_SD_WRITE_TO_FILE "Kirjoitetaan tiedostoon: "
	#define MSG_SD_PRINTING_BYTE "SD tulostus byte "
	#define MSG_SD_NOT_PRINTING "Ei SD tulostus"
	#define MSG_SD_ERR_WRITE_TO_FILE "virhe kirjoitettaessa tiedostoon"
	#define MSG_SD_CANT_ENTER_SUBDIR "Alihakemistoon ei voitu siirtya: "

	#define MSG_STEPPER_TOO_HIGH "Askellustaajuus liian suuri: "
	#define MSG_ENDSTOPS_HIT "paatyrajat aktivoitu: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " kylmana pursotus estetty"
	#define MSG_ERR_LONG_EXTRUDE_STOP " liian pitka pursotus estetty"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"
	#define MSG_CONTRAST "Kontrasti"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Virhe valikon rakenteessa"
*/
#endif

#if LANGUAGE_CHOICE == 10

// LCD Menu Messages
// Please note these are limited to 17 characters!
  #define MSG_DISPLAY_SensROmax "Sens RO Max" //MK3
  #define MSG_DISPLAY_SensROmin "Sens RO Min" //MK3
  #define MSG_DISPLAY_Pcirc "P circ" //MK3
  #define MSG_DISPLAY_Factor2 "Factor 2" //MK3
  #define MSG_DISPLAY_Factor1 "Factor 1" //MK3
  #define MSG_DISPLAY_Meter "m" //MK3
  #define MSG_DISPLAY_Length " L:" //MK3
  #define MSG_DISPLAY_S "S:" //MK3
  #define MSG_DISPLAY_AV " Av" //MK3
  #define MSG_DISPLAY_MinWidth " Mn" //MK3
  #define MSG_DISPLAY_MaxWidth " Mx" //MK3
  #define MSG_DISPLAY_rpm2 "rpm " //MK3
  #define MSG_DISPLAY_COLD "COLD" //MK3
  #define MSG_DISPLAY_OFF "OFF " //MK3
  #define MSG_DISPLAY_E "E:" //MK3
  #define MSG_DISPLAY_rpm "rpm     " //MK3
  #define MSG_DISPLAY_Puller "Puller:" //MK3
  #define MSG_SAFETY_COOLDOWN "SAFETY COOLDOWN" //MK3
  #define MSG_EX_WARM_UP "Extruder Warming Up" //MK3
  #define MSG_EX_COOL "Extruder Cooling" //MK3
  #define MSG_AUTOT_SEQU "Autotune Sequence" //MK3
  #define MSG_AUTOT_COMPL "Autotune Complete" //MK3
  #define MSG_MIN_TEMP "Err: MINTEMP" //MK3
  #define MSG_MAX_TEMP "Err: MAXTEMP" //MK3
  #define MSG_thermal_runaway "THERMAL RUNAWAY" //MK3
  #define MSG_sensor_runout "SENSOR RUNOUT" //MK3
	#define WELCOME_MSG MACHINE_NAME " OK" //MK3
	#define MSG_MAIN "Main" //MK3
  #define MSG_PREHEAT_ABS "Preheat"  //MK3
  #define MSG_PREHEAT_ABS_SETTINGS "Preheat config" //MK3
	#define MSG_COOLDOWN "Cooldown" //MK3
  #define MSG_MOVE_E "Extruder" //MK3
	#define MSG_MOVE_P "Puller" //MK3
  #define MSG_EXT_RPM "Extruder RPM" //MK3
	#define MSG_NOZZLE "Nozzle" //MK3
	#define MSG_HEATER "Extruder Temp" //MK3
  #define MSG_LENGTH_CUTOFF "L cutoff" //MK3
  #define MSG_FILAMENT "Sensor Pos." //MK3
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
  #define MSG_WATCH "Info screen" //MK3
  #define MSG_STATS "Filament Statistics" //MK3
	#define MSG_PREPARE "Prepare" //MK3
	#define MSG_TUNE "Tune" //MK3
  #define MSG_ESTEPS "Esteps/rev/100" //MK3
	#define MSG_PSTEPS "Psteps/mm" //MK3
  #define MSG_A_RETRACT "Motor Acc" //MK3
  #define MSG_STORE_EPROM "Store memory" //MK3
	#define MSG_LOAD_EPROM "Load memory" //MK3
	#define MSG_RESTORE_FAILSAFE "Restore failsafe" //MK3
  #define MSG_TEMPERATURE "Temperature" //MK3
	#define MSG_MOTION "Motion" //MK3
  #define MSG_FILAMENT_PID "Puller PID" //MK3
  #define MSG_PAUSE_EXTRUDER "STOP Extruder" //MK3
	#define MSG_RESUME_EXTRUDER "START Extruder" //MK3
  #define MSG_AUTO_EXTRUDER "Automatic pulling" //MK3
  #define MSG_MAN_EXTRUDER "Manually pulling" //MK3
	#define MSG_CLEAR_STATS "Clear Statistics" //MK3
	#define MSG_ENABLE_STATS "Enable Statistics" //MK3
	#define MSG_DISABLE_STATS "Pause Statistics" //MK3
  #define MSG_VMAX "Vmax " //MK3
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
/* alt
	#define WELCOME_MSG MACHINE_NAME " parada."
	#define MSG_SD_INSERTED "Tarcheta colocada"
	#define MSG_SD_REMOVED "Tarcheta retirada"
	#define MSG_MAIN "Menu prencipal"
	#define MSG_AUTOSTART " Autostart"
	#define MSG_DISABLE_STEPPERS "Amortar motors"
	#define MSG_AUTO_HOME "Levar a l'orichen"
	#define MSG_SET_ORIGIN "Establir zero"
	#define MSG_PREHEAT_PLA "Precalentar PLA"
	#define MSG_PREHEAT_PLA0 "Precalentar PLA0"
	#define MSG_PREHEAT_PLA1 "Precalentar PLA1"
	#define MSG_PREHEAT_PLA2 "Precalentar PLA2"
	#define MSG_PREHEAT_PLA012 "Precalentar PLA a"
	#define MSG_PREHEAT_PLA_BEDONLY  "Prec. PLA Base"
	#define MSG_PREHEAT_PLA_SETTINGS "Achustar tem. PLA"
	#define MSG_PREHEAT_ABS "Precalentar ABS"
	#define MSG_PREHEAT_ABS0 "Precalentar ABS0"
	#define MSG_PREHEAT_ABS1 "Precalentar ABS1"
	#define MSG_PREHEAT_ABS2 "Precalentar ABS2"
	#define MSG_PREHEAT_ABS012 "Precalentar ABS a"
	#define MSG_PREHEAT_ABS_BEDONLY  "Prec. ABS Base"
	#define MSG_PREHEAT_ABS_SETTINGS "Achustar tem. ABS"
	#define MSG_COOLDOWN "Enfriar"
	#define MSG_SWITCH_PS_ON "Enchegar Fuent"
	#define MSG_SWITCH_PS_OFF "Desenchegar Fuent"
	#define MSG_EXTRUDE "Extruir"
	#define MSG_RETRACT "Retraer"
	#define MSG_MOVE_AXIS "Mover Eixes"
	#define MSG_MOVE_X "Move X"
	#define MSG_MOVE_Y "Move Y"
	#define MSG_MOVE_Z "Move Z"
	#define MSG_MOVE_E "Extruder"
	#define MSG_MOVE_01MM "Move 0.1mm"
	#define MSG_MOVE_1MM "Move 1mm"
	#define MSG_MOVE_10MM "Move 10mm"
	#define MSG_SPEED "Velocidat"
	#define MSG_NOZZLE "Nozzle"
	#define MSG_NOZZLE1 "Nozzle2"
	#define MSG_NOZZLE2 "Nozzle3"
	#define MSG_BED "Base"
	#define MSG_FAN_SPEED "Ixoriador"
	#define MSG_FLOW "Fluxo"
	#define MSG_FLOW0 "Fluxo 0"
	#define MSG_FLOW1 "Fluxo 1"
	#define MSG_FLOW2 "Fluxo 2"
	#define MSG_CONTROL "Control"
	#define MSG_MIN "\002 Min"
	#define MSG_MAX "\002 Max"
	#define MSG_FACTOR "\002 Fact"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "On"
	#define MSG_OFF "Off"
	#define MSG_PID_P "PID-P"
	#define MSG_PID_I "PID-I"
	#define MSG_PID_D "PID-D"
	#define MSG_PID_C "PID-C"
	#define MSG_ACC  "Acel"
	#define MSG_VXY_JERK "Vxy-jerk"
	#define MSG_VZ_JERK "Vz-jerk"
	#define MSG_VE_JERK "Ves-jerk"
	#define MSG_VMAX "Vmax"
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_E "y"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VTrav min"
	#define MSG_AMAX "Amax"
	#define MSG_A_RETRACT "A-retrac."
	#define MSG_XSTEPS "X trangos/mm"
	#define MSG_YSTEPS "Y trangos/mm"
	#define MSG_ZSTEPS "Z trangos/mm"
	#define MSG_ESTEPS "E trangos/mm"
	#define MSG_RECTRACT "Retraer"
	#define MSG_TEMPERATURE "Temperatura"
	#define MSG_MOTION "Movimiento"
	#define MSG_STORE_EPROM "Alzar Memoria"
	#define MSG_LOAD_EPROM "Cargar Memoria"
	#define MSG_RESTORE_FAILSAFE "Rest. d'emerchen."
	#define MSG_REFRESH "Tornar a cargar"
	#define MSG_WATCH "Monitorizar"
	#define MSG_PREPARE "Preparar"
	#define MSG_TUNE "Achustar"
	#define MSG_PAUSE_PRINT "Pausar impresion"
	#define MSG_RESUME_PRINT "Contin. impresion"
	#define MSG_STOP_PRINT "Detener Impresion"
	#define MSG_CARD_MENU "Menu de SD"
	#define MSG_NO_CARD "No i hai tarcheta"
	#define MSG_DWELL "Reposo..."
	#define MSG_USERWAIT "Asperan. ordines"
	#define MSG_RESUMING "Contin. impresion"
	#define MSG_NO_MOVE "Sin movimiento"
	#define MSG_KILLED "ATURADA D'EMERCH."
	#define MSG_STOPPED "ATURADA."
	#define MSG_CONTROL_RETRACT  "Retraer mm"
	#define MSG_CONTROL_RETRACTF "Retraer  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Devantar mm"
	#define MSG_CONTROL_RETRACT_RECOVER "DesRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "DesRet F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Cambear"
	#define MSG_INIT_SDCARD "Encetan. tarcheta"
	#define MSG_CNG_SDCARD "Cambiar tarcheta"
	#define MSG_RECTRACT_WIDE "Retraer"
	#define MSG_TEMPERATURE_WIDE "Temperatura"
	#define MSG_TEMPERATURE_RTN  "Temperatura"
	#define MSG_MAIN_WIDE "Menu Prencipal"
	#define MSG_MOTION_WIDE "Movimiento"
	#define MSG_PREPARE_ALT "Preparar"
	#define MSG_CONTROL_ARROW "Control"
	#define MSG_RETRACT_ARROW "Retraer"
	#define MSG_STEPPER_RELEASED "Desacoplada."
	#define MSG_ZPROBE_OUT "Z probe out. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystep X"
	#define MSG_BABYSTEP_Y "Babystep Y"
	#define MSG_BABYSTEP_Z "Babystep Z"
	#define MSG_ENDSTOP_ABORT "Endstop abort"
	#define MSG_CONTRAST "Contrast"

// Serial Console Messages

	#define MSG_Enqueing "En coda \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " Reset Externo"
	#define MSG_BROWNOUT_RESET " Reset por Voltaje Incorrecto"
	#define MSG_WATCHDOG_RESET " Reset por Bloqueo"
	#define MSG_SOFTWARE_RESET " Reset por Software"
	#define MSG_AUTHOR " | Autor: "
	#define MSG_CONFIGURATION_VER " Zaguer esvielle: "
	#define MSG_FREE_MEMORY " Memoria libre: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Guardau."
	#define MSG_ERR_LINE_NO "O Numero de Linea no ye igual a l'Ultimo Numero de Linea+1, Ultima Linea:"
	#define MSG_ERR_CHECKSUM_MISMATCH "o checksum no coincide, Ultima Linea:"
	#define MSG_ERR_NO_CHECKSUM "No se podiÃƒÆ’Ã‚Â³ trobar o Checksum con o numero de linea, Ultima Linea:"
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No se trobo o Numero de Linea con o Checksum, Ultima Linea:"
	#define MSG_FILE_PRINTED "Impresion rematada"
	#define MSG_BEGIN_FILE_LIST "Prencipio d'a lista de fichero"
	#define MSG_END_FILE_LIST "Fin d'a lista de fichero"
	#define MSG_M104_INVALID_EXTRUDER "M104 Extrusor Invalido "
	#define MSG_M105_INVALID_EXTRUDER "M105 Extrusor Invalido "
	#define MSG_M200_INVALID_EXTRUDER "M200 Extrusor Invalido "
	#define MSG_M218_INVALID_EXTRUDER "M218 Extrusor Invalido "
	#define MSG_M221_INVALID_EXTRUDER "M221 Extrusor Invalido "
	#define MSG_ERR_NO_THERMISTORS "No i hai termistores - no temp"
	#define MSG_M109_INVALID_EXTRUDER "M109 Extrusor Invalido "
	#define MSG_HEATING "Calentando..."
	#define MSG_HEATING_COMPLETE "Calentamiento Feito."
	#define MSG_BED_HEATING "Calentando la base."
	#define MSG_BED_DONE "Base Calient."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Marlin V1; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Cuenta X:"
	#define MSG_ERR_KILLED "Impresora Aturada con kill()!!"
	#define MSG_ERR_STOPPED "Impresora aturada por errors. Apanye a error y use M999 Ta reiniciar!. (a temperatura se reestablece. Ajustela antes de continar)"
	#define MSG_RESEND "Reninviar:"
	#define MSG_UNKNOWN_COMMAND "Comando Desconoixiu:\""
	#define MSG_ACTIVE_EXTRUDER "Extrusor Activo: "
	#define MSG_INVALID_EXTRUDER "Extrusor Invalido"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Comprobando fins de corrida."
	#define MSG_ENDSTOP_HIT "PULSAU"
	#define MSG_ENDSTOP_OPEN "ubierto"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR "No se podiÃƒÆ’Ã‚Â³ ubrir a subcarpeta."
	#define MSG_SD_INIT_FAIL "Fallo en encetar a SD"
	#define MSG_SD_VOL_INIT_FAIL "Fallo en amontar o volumen"
	#define MSG_SD_OPENROOT_FAIL "Fallo en ubrir a carpeta raiz"
	#define MSG_SD_CARD_OK "Tarcheta SD OK"
	#define MSG_SD_WORKDIR_FAIL "Fallo en ubrir a carpeta de treballo"
	#define MSG_SD_OPEN_FILE_FAIL "Error en ubrir, Fichero: "
	#define MSG_SD_FILE_OPENED "Fichero ubierto:"
	#define MSG_SD_SIZE " Grandaria:"
	#define MSG_SD_FILE_SELECTED "Fichero Seleccionau"
	#define MSG_SD_WRITE_TO_FILE "Escribindo en o fichero: "
	#define MSG_SD_PRINTING_BYTE "SD imprentando o byte "
	#define MSG_SD_NOT_PRINTING "No se ye imprentando con SD"
	#define MSG_SD_ERR_WRITE_TO_FILE "Error en escribir en o fichero"
	#define MSG_SD_CANT_ENTER_SUBDIR "No se puede ubrir a carpeta:"

	#define MSG_STEPPER_TOO_HIGH "Steprate masiau alto : "
	#define MSG_ENDSTOPS_HIT "S'ha tocau a fin de carril: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " extrusion fria privada"
	#define MSG_ERR_LONG_EXTRUDE_STOP " extrusion masiau larga privada"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"
*/
#endif

#if LANGUAGE_CHOICE == 11 //Dutch

// LCD Menu Messages
// Please note these are limited to 17 characters!
  #define MSG_DISPLAY_SensROmax "Sens RO Max" //MK3
  #define MSG_DISPLAY_SensROmin "Sens RO Min" //MK3
  #define MSG_DISPLAY_Pcirc "P circ" //MK3
  #define MSG_DISPLAY_Factor2 "Factor 2" //MK3
  #define MSG_DISPLAY_Factor1 "Factor 1" //MK3
  #define MSG_DISPLAY_Meter "m" //MK3
  #define MSG_DISPLAY_Length " L:" //MK3
  #define MSG_DISPLAY_S "S:" //MK3
  #define MSG_DISPLAY_AV " Av" //MK3
  #define MSG_DISPLAY_MinWidth " Mn" //MK3
  #define MSG_DISPLAY_MaxWidth " Mx" //MK3
  #define MSG_DISPLAY_rpm2 "rpm " //MK3
  #define MSG_DISPLAY_COLD "COLD" //MK3
  #define MSG_DISPLAY_OFF "OFF " //MK3
  #define MSG_DISPLAY_E "E:" //MK3
  #define MSG_DISPLAY_rpm "rpm     " //MK3
  #define MSG_DISPLAY_Puller "Puller:" //MK3
  #define MSG_SAFETY_COOLDOWN "SAFETY COOLDOWN" //MK3
  #define MSG_EX_WARM_UP "Extruder Warming Up" //MK3
  #define MSG_EX_COOL "Extruder Cooling" //MK3
  #define MSG_AUTOT_SEQU "Autotune Sequence" //MK3
  #define MSG_AUTOT_COMPL "Autotune Complete" //MK3
  #define MSG_MIN_TEMP "Err: MINTEMP" //MK3
  #define MSG_MAX_TEMP "Err: MAXTEMP" //MK3
  #define MSG_thermal_runaway "THERMAL RUNAWAY" //MK3
  #define MSG_sensor_runout "SENSOR RUNOUT" //MK3
	#define WELCOME_MSG MACHINE_NAME " OK" //MK3
	#define MSG_MAIN "Main" //MK3
  #define MSG_PREHEAT_ABS "Preheat"  //MK3
  #define MSG_PREHEAT_ABS_SETTINGS "Preheat config" //MK3
	#define MSG_COOLDOWN "Cooldown" //MK3
  #define MSG_MOVE_E "Extruder" //MK3
	#define MSG_MOVE_P "Puller" //MK3
  #define MSG_EXT_RPM "Extruder RPM" //MK3
	#define MSG_NOZZLE "Nozzle" //MK3
	#define MSG_HEATER "Extruder Temp" //MK3
  #define MSG_LENGTH_CUTOFF "L cutoff" //MK3
  #define MSG_FILAMENT "Sensor Pos." //MK3
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
  #define MSG_WATCH "Info screen" //MK3
  #define MSG_STATS "Filament Statistics" //MK3
	#define MSG_PREPARE "Prepare" //MK3
	#define MSG_TUNE "Tune" //MK3
  #define MSG_ESTEPS "Esteps/rev/100" //MK3
	#define MSG_PSTEPS "Psteps/mm" //MK3
  #define MSG_A_RETRACT "Motor Acc" //MK3
  #define MSG_STORE_EPROM "Store memory" //MK3
	#define MSG_LOAD_EPROM "Load memory" //MK3
	#define MSG_RESTORE_FAILSAFE "Restore failsafe" //MK3
  #define MSG_TEMPERATURE "Temperature" //MK3
	#define MSG_MOTION "Motion" //MK3
  #define MSG_FILAMENT_PID "Puller PID" //MK3
  #define MSG_PAUSE_EXTRUDER "STOP Extruder" //MK3
	#define MSG_RESUME_EXTRUDER "START Extruder" //MK3
  #define MSG_AUTO_EXTRUDER "Automatic pulling" //MK3
  #define MSG_MAN_EXTRUDER "Manually pulling" //MK3
	#define MSG_CLEAR_STATS "Clear Statistics" //MK3
	#define MSG_ENABLE_STATS "Enable Statistics" //MK3
	#define MSG_DISABLE_STATS "Pause Statistics" //MK3
  #define MSG_VMAX "Vmax " //MK3
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
/* alt
	#define WELCOME_MSG MACHINE_NAME " gereed."
	#define MSG_SD_INSERTED "Kaart ingestoken"
	#define MSG_SD_REMOVED "Kaart verwijderd"
	#define MSG_MAIN "Main"
	#define MSG_AUTOSTART "Autostart"
	#define MSG_DISABLE_STEPPERS "Motoren uit"
	#define MSG_AUTO_HOME "Auto home"
	#define MSG_SET_ORIGIN "Nulpunt instellen"
	#define MSG_PREHEAT_PLA "PLA voorverwarmen"
	#define MSG_PREHEAT_PLA0 "PLA voorverw. 0"
	#define MSG_PREHEAT_PLA1 "PLA voorverw. 1"
	#define MSG_PREHEAT_PLA2 "PLA voorverw. 2"
	#define MSG_PREHEAT_PLA012 "PLA voorverw. aan"
	#define MSG_PREHEAT_PLA_BEDONLY  "PLA voorverw. Bed"
	#define MSG_PREHEAT_PLA_SETTINGS "PLA verw. conf"
	#define MSG_PREHEAT_ABS "ABS voorverwarmen"
	#define MSG_PREHEAT_ABS0 "ABS voorverw. 0"
	#define MSG_PREHEAT_ABS1 "ABS voorverw. 1"
	#define MSG_PREHEAT_ABS2 "ABS voorverw. 2"
	#define MSG_PREHEAT_ABS012 "ABS voorverw. aan"
	#define MSG_PREHEAT_ABS_BEDONLY  "ABS voorverw. Bed"
	#define MSG_PREHEAT_ABS_SETTINGS "ABS verw. conf"
	#define MSG_COOLDOWN "Afkoelen"
	#define MSG_SWITCH_PS_ON "Stroom aan"
	#define MSG_SWITCH_PS_OFF "Stroom uit"
	#define MSG_EXTRUDE "Extrude"
	#define MSG_RETRACT "Retract"
	#define MSG_MOVE_AXIS "As verplaatsen"
	#define MSG_MOVE_X "Verplaats X"
	#define MSG_MOVE_Y "Verplaats Y"
	#define MSG_MOVE_Z "Verplaats Z"
	#define MSG_MOVE_E "Extruder"
	#define MSG_MOVE_01MM "Verplaats 0.1mm"
	#define MSG_MOVE_1MM "Verplaats 1mm"
	#define MSG_MOVE_10MM "Verplaats 10mm"
	#define MSG_SPEED "Snelheid"
	#define MSG_NOZZLE "Nozzle"
	#define MSG_NOZZLE1 "Nozzle2"
	#define MSG_NOZZLE2 "Nozzle3"
	#define MSG_BED "Bed"
	#define MSG_FAN_SPEED "Fan snelheid"
	#define MSG_FLOW "Flow"
	#define MSG_FLOW0 "Flow 0"
	#define MSG_FLOW1 "Flow 1"
	#define MSG_FLOW2 "Flow 2"
	#define MSG_CONTROL "Control"
	#define MSG_MIN " \002 Min"
	#define MSG_MAX " \002 Max"
	#define MSG_FACTOR " \002 Fact"
	#define MSG_AUTOTEMP "Autotemp"
	#define MSG_ON "Aan "
	#define MSG_OFF "Uit"
	#define MSG_PID_P "PID-P"
	#define MSG_PID_I "PID-I"
	#define MSG_PID_D "PID-D"
	#define MSG_PID_C "PID-C"
	#define MSG_ACC  "Versn"
	#define MSG_VXY_JERK "Vxy-jerk"
	#define MSG_VZ_JERK "Vz-jerk"
	#define MSG_VE_JERK "Ve-jerk"
	#define MSG_VMAX "Vmax "
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_E "e"
	#define MSG_VMIN "Vmin"
	#define MSG_VTRAV_MIN "VTrav min"
	#define MSG_AMAX "Amax "
	#define MSG_A_RETRACT "A-retract"
	#define MSG_XSTEPS "Xsteps/mm"
	#define MSG_YSTEPS "Ysteps/mm"
	#define MSG_ZSTEPS "Zsteps/mm"
	#define MSG_ESTEPS "Esteps/mm"
	#define MSG_RECTRACT "Terugtrekken"
	#define MSG_TEMPERATURE "Temperatuur"
	#define MSG_MOTION "Beweging"
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_STORE_EPROM "Geheugen opslaan"
	#define MSG_LOAD_EPROM "Geheugen laden"
	#define MSG_RESTORE_FAILSAFE "Noodstop reset"
	#define MSG_REFRESH "Ververs"
	#define MSG_WATCH "Info scherm"
	#define MSG_PREPARE "Voorbereiden"
	#define MSG_TUNE "Afstellen"
	#define MSG_PAUSE_PRINT "Print pauzeren"
	#define MSG_RESUME_PRINT "Print hervatten"
	#define MSG_STOP_PRINT "Print stoppen"
	#define MSG_CARD_MENU "Print van SD"
	#define MSG_NO_CARD "Geen SD kaart"
	#define MSG_DWELL "Slapen..."
	#define MSG_USERWAIT "Wachten..."
	#define MSG_RESUMING "Print hervatten"
	#define MSG_NO_MOVE "Geen beweging."
	#define MSG_KILLED "AFGEBROKEN. "
	#define MSG_STOPPED "GESTOPT. "
	#define MSG_CONTROL_RETRACT  "Retract mm"
	#define MSG_CONTROL_RETRACTF "Retract  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Verv. Filament"
	#define MSG_INIT_SDCARD "Init. SD kaart"
	#define MSG_CNG_SDCARD "Verv. SD card"
	#define MSG_ZPROBE_OUT "Z probe uit. bed"
	#define MSG_POSITION_UNKNOWN "Home X/Y voor Z"
	#define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_BABYSTEP_X "Babystap X"
	#define MSG_BABYSTEP_Y "Babystap Y"
	#define MSG_BABYSTEP_Z "Babystap Z"
	#define MSG_ENDSTOP_ABORT "Endstop afbr."

// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "Opstarten"
	#define MSG_EXTERNAL_RESET " Externe Reset"
	#define MSG_BROWNOUT_RESET " Lage voedingsspanning Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_AUTHOR " | Auteur: "
	#define MSG_CONFIGURATION_VER " Laatst bijgewerkt: "
	#define MSG_FREE_MEMORY " Vrij Geheugen: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Bestand opslaan voltooid."
	#define MSG_ERR_LINE_NO "Regelnummer is niet het laatste regelnummer+1, Laatste regel: "
	#define MSG_ERR_CHECKSUM_MISMATCH "Checksum fout, Laatste regel: "
	#define MSG_ERR_NO_CHECKSUM "Regel zonder checksum, Laatste regel: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "Geen regelnummer met checksum, Laatste regel: "
	#define MSG_FILE_PRINTED "Bestand afdrukken klaar"
	#define MSG_BEGIN_FILE_LIST "Begin bestandslijst"
	#define MSG_END_FILE_LIST "Einde bestandslijst"
	#define MSG_M104_INVALID_EXTRUDER "M104 Ongeldige extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Ongeldige extruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Ongeldige extruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Ongeldige extruder "
	#define MSG_M221_INVALID_EXTRUDER "M221 Ongeldige extruder "
	#define MSG_ERR_NO_THERMISTORS "Geen thermistors - geen temperatuur"
	#define MSG_M109_INVALID_EXTRUDER "M109 Ongeldige extruder "
	#define MSG_HEATING "Opwarmen..."
	#define MSG_HEATING_COMPLETE "Opwarmen klaar."
	#define MSG_BED_HEATING "Bed opwarmen."
	#define MSG_BED_DONE "Bed klaar."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Marlin V1; Sprinter/grbl mashup voor gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Aantal X: "
	#define MSG_ERR_KILLED "Printer stopgezet. kill() aangeroepen!"
	#define MSG_ERR_STOPPED "Printer gestopt vanwege fouten. Los de fout op en gebruik M999 om opnieuw te starten. (Temperatuur is gereset, stel deze opnieuw in na herstart)"
	#define MSG_RESEND "Opnieuw sturen: "
	#define MSG_UNKNOWN_COMMAND "Onbekend commando: \""
	#define MSG_ACTIVE_EXTRUDER "Actieve Extruder: "
	#define MSG_INVALID_EXTRUDER "Ongeldige extruder"
	#define MSG_X_MIN "x_min: "
	#define MSG_X_MAX "x_max: "
	#define MSG_Y_MIN "y_min: "
	#define MSG_Y_MAX "y_max: "
	#define MSG_Z_MIN "z_min: "
	#define MSG_Z_MAX "z_max: "
	#define MSG_M119_REPORT "Eindstop statusrapportage:"
	#define MSG_ENDSTOP_HIT "GERAAKT"
	#define MSG_ENDSTOP_OPEN "open"
	#define MSG_HOTEND_OFFSET "Hotend afwijking:"

	#define MSG_SD_CANT_OPEN_SUBDIR "Kan subdirectory niet openen"
	#define MSG_SD_INIT_FAIL "SD initialiseren mislukt"
	#define MSG_SD_VOL_INIT_FAIL "volume.init mislukt"
	#define MSG_SD_OPENROOT_FAIL "openRoot mislukt"
	#define MSG_SD_CARD_OK "SD kaart ok"
	#define MSG_SD_WORKDIR_FAIL "workDir openen mislukt"
	#define MSG_SD_OPEN_FILE_FAIL "Openen mislukt, bestand: "
	#define MSG_SD_FILE_OPENED "Bestand geopend: "
	#define MSG_SD_SIZE " Grootte: "
	#define MSG_SD_FILE_SELECTED "Bestanden geselecteerd:"
	#define MSG_SD_WRITE_TO_FILE "Schrijven naar bestand: "
	#define MSG_SD_PRINTING_BYTE "SD printen byte: "
	#define MSG_SD_NOT_PRINTING "Niet SD printen"
	#define MSG_SD_ERR_WRITE_TO_FILE "Fout tijdens het schrijven naar bestand:"
	#define MSG_SD_CANT_ENTER_SUBDIR "Kan subdirectory niet in: "

	#define MSG_STEPPER_TOO_HIGH "stapsnelheid te hoog:"
	#define MSG_ENDSTOPS_HIT "endstops geraakt: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " Koude extrusie voorkomen"
	#define MSG_ERR_LONG_EXTRUDE_STOP " te lange extrusie voorkomen"
	#define MSG_BABYSTEPPING_X "Babystepping X"
	#define MSG_BABYSTEPPING_Y "Babystepping Y"
	#define MSG_BABYSTEPPING_Z "Babystepping Z"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Fout in menustructuur"
*/
#endif

#endif // ifndef LANGUAGE_H
