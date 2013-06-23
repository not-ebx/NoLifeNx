//////////////////////////////////////////////////////////////////////////////
// NoLifeNx - Part of the NoLifeStory project                               //
// Copyright (C) 2013 Peter Atashian                                        //
//                                                                          //
// This program is free software: you can redistribute it and/or modify     //
// it under the terms of the GNU Affero General Public License as           //
// published by the Free Software Foundation, either version 3 of the       //
// License, or (at your option) any later version.                          //
//                                                                          //
// This program is distributed in the hope that it will be useful,          //
// but WITHOUT ANY WARRANTY; without even the implied warranty of           //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            //
// GNU Affero General Public License for more details.                      //
//                                                                          //
// You should have received a copy of the GNU Affero General Public License //
// along with this program.  If not, see <http://www.gnu.org/licenses/>.    //
//////////////////////////////////////////////////////////////////////////////
#pragma once
#ifdef _WIN32
#  define NL_WINDOWS
#  ifndef NOMINMAX
#    define NOMINMAX
#  endif
#  define WIN32_LEAN_AND_MEAN
#else
#  define NL_POSIX
#endif
#include <string>
#include <cstdint>
namespace NL {
    class Audio;
    class Bitmap;
    class Node;
    class File;
}
#include "Audio.hpp"
#include "Bitmap.hpp"
#include "Node.hpp"
#include "File.hpp"
namespace NL {
    extern Node NXBase, NXCharacter, NXEffect, NXEtc, NXItem, NXMap, NXMob, NXMorph, NXNpc, NXQuest, NXReactor, NXSkill, NXSound, NXString, NXTamingMob, NXUI;
    void LoadAllNX();
}