/*===============================================================================
Copyright (c) 2024 PTC Inc. and/or Its Subsidiary Companies. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
===============================================================================*/

#ifndef _VU_CORE_H_
#define _VU_CORE_H_

/**
 * \file Core.h
 * \brief Core data structures, data types, constants and functions used by the Vuforia Engine
 */

// WARNING: The content of the Core.h header has been split into separate dedicated headers.
//          For code not using the VuforiaEngine.h umbrella header this will become a build breaking change if they continue to rely on
//          Core.h to include this functionality. The separate headers are included into Core.h for a
//          transition period. The Core.h header will be removed in an upcoming Vuforia Engine release. Clients are advised to
//          move to including one or more of the separate headers directly to avoid breaking builds in the future.
#include <VuforiaEngine/Core/Basic.h>
#include <VuforiaEngine/Core/CameraIntrinsics.h>
#include <VuforiaEngine/Core/Geometry.h>
#include <VuforiaEngine/Core/Image.h>
#include <VuforiaEngine/Core/MathUtils.h>
#include <VuforiaEngine/Core/System.h>

#endif // _VU_CORE_H_
