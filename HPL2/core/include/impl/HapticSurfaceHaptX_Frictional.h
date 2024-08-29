/*
 * Copyright © 2009-2020 Frictional Games
 * 
 * This file is part of Amnesia: The Dark Descent.
 * 
 * Amnesia: The Dark Descent is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version. 

 * Amnesia: The Dark Descent is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Amnesia: The Dark Descent.  If not, see <https://www.gnu.org/licenses/>.
 */

#if 0

#ifndef HPL_HAPTIC_SURFACE_HAPTX_FRICTIONAL_H
#define HPL_HAPTIC_SURFACE_HAPTX_FRICTIONAL_H

#include "impl/HapticSurfaceHaptX.h"

#include <HaptX.h>

namespace hpl {

	class cHapticSurfaceHaptX_Frictional : public iHapticSurfaceHaptX
	{
	public:
		cHapticSurfaceHaptX_Frictional(	const tString& asName, HaptX::HaptXInterface *apInterface,
									float afDamping, float afStiffness,
									float afDynamicFriction, float afStartingFriction,
									float afTangentStiffness, float afStoppingFriction);
		~cHapticSurfaceHaptX_Frictional();
		
	private:
		HaptX::FrictionalSurfaceInfo *mpFrictionalSurfaceInfo;
	};

};
#endif // HPL_HAPTIC_SURFACE_HAPTX_FRICTIONAL_H
#endif
