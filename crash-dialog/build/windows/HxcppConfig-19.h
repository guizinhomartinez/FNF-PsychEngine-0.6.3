#ifndef HXCPP_CONFIG_INCLUDED
#define HXCPP_CONFIG_INCLUDED

#if !defined(UNICODE) && !defined(NO_UNICODE)
#define UNICODE 
#endif

#if !defined(_UNICODE) && !defined(NO__UNICODE)
#define _UNICODE 
#endif

#if !defined(wxMSVC_VERSION_AUTO) && !defined(NO_wxMSVC_VERSION_AUTO)
#define wxMSVC_VERSION_AUTO 
#endif

#if !defined(wxUSE_GRAPHICS_CONTEXT) && !defined(NO_wxUSE_GRAPHICS_CONTEXT)
#define wxUSE_GRAPHICS_CONTEXT 
#endif

#if !defined(WIN32) && !defined(NO_WIN32)
#define WIN32 
#endif

#if !defined(__WXMSW__) && !defined(NO___WXMSW__)
#define __WXMSW__ 
#endif

#if !defined(__WX__) && !defined(NO___WX__)
#define __WX__ 1
#endif

#if !defined(HX_WINDOWS) && !defined(NO_HX_WINDOWS)
#define HX_WINDOWS 
#endif

#if !defined(HXCPP_M64) && !defined(NO_HXCPP_M64)
#define HXCPP_M64 
#endif

#if !defined(HXCPP_VISIT_ALLOCS) && !defined(NO_HXCPP_VISIT_ALLOCS)
#define HXCPP_VISIT_ALLOCS 
#endif

#if !defined(HX_SMART_STRINGS) && !defined(NO_HX_SMART_STRINGS)
#define HX_SMART_STRINGS 
#endif

#if !defined(HXCPP_API_LEVEL) && !defined(NO_HXCPP_API_LEVEL)
#define HXCPP_API_LEVEL 400
#endif

#if !defined(_CRT_SECURE_NO_DEPRECATE) && !defined(NO__CRT_SECURE_NO_DEPRECATE)
#define _CRT_SECURE_NO_DEPRECATE 
#endif

#if !defined(_ALLOW_MSC_VER_MISMATCH) && !defined(NO__ALLOW_MSC_VER_MISMATCH)
#define _ALLOW_MSC_VER_MISMATCH 
#endif

#if !defined(_ALLOW_ITERATOR_DEBUG_LEVEL_MISMATCH) && !defined(NO__ALLOW_ITERATOR_DEBUG_LEVEL_MISMATCH)
#define _ALLOW_ITERATOR_DEBUG_LEVEL_MISMATCH 
#endif

#include <hxcpp.h>

#endif
