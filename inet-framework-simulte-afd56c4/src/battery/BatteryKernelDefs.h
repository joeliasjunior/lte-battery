//
// Copyright (C) 2011 Michael Lindig
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#ifndef BATTERYKERNELDEFS_H_
#define BATTERYKERNELDEFS_H_

#define BATTERY_VERSION 1

#ifndef BATTERY_SIMULTE
// should be defined always, since version 2.3
#define BATTERY_SIMULTE
#endif

//JINSERT todos comentarios abaixo inseridos por mim
//#define BATTERY_SIGNAL_PACKET_NAME          "org.mixim.modules.utility.packet"
//#define BATTERY_SIGNAL_UWBIRPACKET_NAME     "org.mixim.modules.utility.uwbirpacket"
//#define BATTERY_SIGNAL_DROPPEDPACKET_NAME   "org.mixim.modules.utility.droppedpacket"
//#define BATTERY_SIGNAL_PASSEDMSG_NAME       "org.mixim.base.utils.passedmsg"
//#define BATTERY_SIGNAL_HOSTSTATE_NAME       "lte.battery.hoststate" //JINSERT
#define BATTERY_SIGNAL_HOSTSTATE_NAME       "HostState.h"
//#define BATTERY_SIGNAL_MOBILITY_CHANGE_NAME "mobilityStateChanged"
#define BATTERY_SIGNAL_BATTERY_CHANGE_NAME  "BatteryState.h" //JINSERT
//#define BATTERY_SIGNAL_MOBANMSG_NAME        "org.mixim.modules.utility.bbmobanmessage"

#endif
