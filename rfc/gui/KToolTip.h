
/*
	RFC - KToolTip.h
	Copyright (C) 2013-2019 CrownSoft
  
	This software is provided 'as-is', without any express or implied
	warranty.  In no event will the authors be held liable for any damages
	arising from the use of this software.

	Permission is granted to anyone to use this software for any purpose,
	including commercial applications, and to alter it and redistribute it
	freely, subject to the following restrictions:

	1. The origin of this software must not be misrepresented; you must not
	   claim that you wrote the original software. If you use this software
	   in a product, an acknowledgment in the product documentation would be
	   appreciated but is not required.
	2. Altered source versions must be plainly marked as such, and must not be
	   misrepresented as being the original software.
	3. This notice may not be removed or altered from any source distribution.
	  
*/

#ifndef _RFC_KTOOLTIP_H_
#define _RFC_KTOOLTIP_H_

#include "KWindow.h"

class KToolTip : public KComponent
{
protected:
	HWND attachedCompHWND;

public:
	KToolTip();

	virtual ~KToolTip();

	/**
		parentWindow must be created before you call this method.
		attachedComponent must be added to a window before you call this method.
		do not attach same tooltip into multiple components.
	*/
	virtual void AttachToComponent(KWindow *parentWindow, KComponent *attachedComponent);

	/**
		calling this method has no effect.
	*/
	virtual bool Create(bool requireInitialMessages = false);

	virtual void SetText(const KString& compText);
};

#endif

