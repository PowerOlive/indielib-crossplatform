/*****************************************************************************************
 * Desc: SurfaceTests_Filters class
 *****************************************************************************************/

/*********************************** The zlib License ************************************
 *
 * Copyright (c) 2013 Indielib-crossplatform Development Team
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 * claim that you wrote the original software. If you use this software
 * in a product, an acknowledgment in the product documentation would be
 * appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 * misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source
 * distribution.
 *
 *****************************************************************************************/
#ifndef _SurfaceTests_Filters_
#define _SurfaceTests_Filters_

#include "manual/ManualTests.h"

class IND_Surface;
class IND_Entity2d;
class IND_Animation;

class SurfaceTests_Filters : public ManualTests {
public:

    SurfaceTests_Filters():
		_surfaces(NULL),
		_entities(NULL),
        _animations(NULL),
		_testedEntities(0){
		init();
	}

	virtual ~SurfaceTests_Filters() {
		release();
	}
	void prepareTests();
	void performTests(float dt);

    bool isActive();
    void setActive(bool active);

private:
	void init();
	void release();

    //NOTE: UPDATE THIS ACCORDINGLY! (CRASHES, NOT USED NEW TESTS...)
	int _testedEntities;

	IND_Surface** _surfaces;

	IND_Entity2d** _entities;
    
    IND_Animation** _animations;
};


#endif // _SurfaceTests_Filters_
