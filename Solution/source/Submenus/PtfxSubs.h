/*
* Menyoo PC - Grand Theft Auto V single-player trainer mod
* Copyright (C) 2019  MAFINS
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/
#pragma once

#include "..\Scripting\GTAentity.h"

#include <string>
#include <vector>

namespace sub
{
	namespace Ptfx_catind
	{
		extern int ITEMS_PER_PAGE;
		typedef struct { std::string name, asset, fx; } PtfxS;
		// Define comparison operator for PtfxS
		inline bool operator==(const PtfxS& a, const PtfxS& b) {
			return a.name == b.name && a.asset == b.asset && a.fx == b.fx;
		}

		extern const std::vector<PtfxS> vPTFX;

		typedef struct { GTAentity entity; std::string asset, fx; } PtfxlopS;
		extern std::vector<PtfxlopS> _fxlops;

		void AddEntityToPtfxLops(const PtfxS& effect, const GTAentity& entity);

		void __AddOption_entity(const PtfxS& effect, GTAentity entity);
		void __AddOption_loopOnEntity(const PtfxS& effect, GTAentity entity);
		void PTFXFavourites();
		void PTFXSub();

	}

}




