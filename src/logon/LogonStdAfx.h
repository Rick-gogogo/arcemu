/*
 * ArcEmu MMORPG Server
 * Copyright (C) 2008-2012 <http://www.ArcEmu.org/>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <string>

#include "System/Platform.h"
#include <Network/Network.h>

#include "../shared/Log.h"
#include "../shared/Util.h"
#include "../shared/ByteBuffer.h"
#include "../shared/Config/ConfigEnv.h"
#include <zlib.h>

#include "../shared/Database/DatabaseEnv.h"

#include "../shared/Crypto/BigNumber.h"
#include "../shared/Crypto/Sha1.h"

#include "LogonOpcodes.h"
#include "../logon/Main.h"
#include "../world/NameTables.h"
#include "AccountCache.h"
#include "PeriodicFunctionCall_Thread.h"
#include "../logon/AutoPatcher.h"
#include "../logon/AuthSocket.h"
#include "../logon/AuthStructs.h"
#include "../logon/LogonCommServer.h"
#include "../logon/LogonConsole.h"
#include "Network/ServerPacket.h"

// database decl
extern Database* sLogonSQL;
