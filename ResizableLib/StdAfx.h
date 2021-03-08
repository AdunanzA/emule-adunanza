// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__0A781DD9_5C37_49E2_A4F5_E517F5B8A621__INCLUDED_)
#define AFX_STDAFX_H__0A781DD9_5C37_49E2_A4F5_E517F5B8A621__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define WINVER WINVER_MAXVER
#define _WIN32_WINNT WINVER

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#ifndef WS_EX_LAYOUTRTL
#pragma message("Please update your Windows header files, get the latest SDK")
#define WS_EX_LAYOUTRTL	0x00400000
#endif


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__0A781DD9_5C37_49E2_A4F5_E517F5B8A621__INCLUDED_)
