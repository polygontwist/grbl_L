/*
  defaults_mycinalaser.h - defaults settings configuration file
  Part of Grbl

  Copyright (c) 2012-2015 Sungeun K. Jeon

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.    
*/

/* The defaults.h file serves as a central default settings file for different machine
   types, from DIY CNC mills to CNC conversions of off-the-shelf machines. The settings
   here are supplied by users, so your results may vary. However, this should give you
   a good starting point as you get to know your machine and tweak the settings for your
   nefarious needs. */

#ifndef defaults_h
#define defaults_h

  // settings for my chinalaser http://www.a-d-k.de/20150611_213938-Lasercutter%2Breloaded.htm
  #define DEFAULT_X_STEPS_PER_MM 39.516			//$100 [ak]
  #define DEFAULT_Y_STEPS_PER_MM 39.514			//$101 [ak]
  #define DEFAULT_Z_STEPS_PER_MM 250.0
  #define DEFAULT_X_MAX_RATE 10000.0 // mm/min
  #define DEFAULT_Y_MAX_RATE 10000.0 // mm/min
  #define DEFAULT_Z_MAX_RATE 500.0 // mm/min
  #define DEFAULT_X_ACCELERATION (10.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_Y_ACCELERATION (10.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_Z_ACCELERATION (10.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_X_MAX_TRAVEL 340.0 			//$130 mm [ak]
  #define DEFAULT_Y_MAX_TRAVEL 200.0 // mm
  #define DEFAULT_Z_MAX_TRAVEL 0.0 				// mm [ak] no z
  #define DEFAULT_STEP_PULSE_MICROSECONDS 10
  #define DEFAULT_STEPPING_INVERT_MASK 2 		//$2 [ak]
  #define DEFAULT_DIRECTION_INVERT_MASK 0
  #define DEFAULT_STEPPER_IDLE_LOCK_TIME 25 // msec (0-254, 255 keeps steppers enabled)
  #define DEFAULT_STATUS_REPORT_MASK ((BITFLAG_RT_STATUS_MACHINE_POSITION)|(BITFLAG_RT_STATUS_WORK_POSITION)) //$10=3
  #define DEFAULT_JUNCTION_DEVIATION 0.01 // mm
  #define DEFAULT_ARC_TOLERANCE 0.002 // mm
  #define DEFAULT_REPORT_INCHES 0 // false
  #define DEFAULT_INVERT_ST_ENABLE 1			 //$4 [ak]
  #define DEFAULT_INVERT_LIMIT_PINS 0 // false
  #define DEFAULT_SOFT_LIMIT_ENABLE 0 // false
  #define DEFAULT_HARD_LIMIT_ENABLE 0  // false
  #define DEFAULT_HOMING_ENABLE 1  				//$22=1[ak] false
  #define DEFAULT_HOMING_DIR_MASK 1 			//$23=1[ak] move positive dir
  #define DEFAULT_HOMING_FEED_RATE 25.0 		// mm/min
  #define DEFAULT_HOMING_SEEK_RATE 500.0 		// mm/min  [ak]> $25=2400
  #define DEFAULT_HOMING_DEBOUNCE_DELAY 250 	// msec (0-65k)
  #define DEFAULT_HOMING_PULLOFF 10.0 			// mm [ak]$27=10

#endif
