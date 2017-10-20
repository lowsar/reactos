#ifndef _SHELLBARS_PCH_
#define _SHELLBARS_PCH_

#define WIN32_NO_STATUS
#define _INC_WINDOWS
#define COM_NO_WINDOWS_H

#include <windef.h>
#include <winbase.h>
#include <wincon.h>
#include <wingdi.h>
#include <shlobj.h>
#include <shellapi.h>
#include <shlobj_undoc.h>
#include <shlguid_undoc.h>
#include <shdeprecated.h>
#include <tchar.h>
#include <atlbase.h>
#include <atlcom.h>
#include <atlwin.h>
#include <undocuser.h>
#include <shlwapi.h>
#include <shlwapi_undoc.h>
#include <undocshell.h>
#include <shellutils.h>
#include <browseui_undoc.h>
#include <wine/debug.h>

#include "../resource.h"

#include "CBandSite.h"
#include "CBandSiteMenu.h"
#include "CISFBand.h"

WINE_DEFAULT_DEBUG_CHANNEL(browseui);

#define GET_X_LPARAM(lp) ((int)(short)LOWORD(lp))
#define GET_Y_LPARAM(lp) ((int)(short)HIWORD(lp))

#define USE_SYSTEM_ISFBAND 0

#if USE_SYSTEM_ISFBAND
#define CISFBand_CreateInstance(riid, ppv) (CoCreateInstance(CLSID_ISFBand, NULL, CLSCTX_INPROC_SERVER,riid, ppv))
#else
#define CISFBand_CreateInstance RSHELL_CISFBand_CreateInstance
#endif

#endif /* _BROWSEUI_PCH_ */
