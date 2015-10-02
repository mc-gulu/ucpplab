/*!
 * \file UCL_Def.h
 * \date 2015/10/02 8:55
 * \author Gu Lu (mc-gulu@GitHub)
 *
 * \brief Definition of UCL_Def 
*/

#pragma once

/* ----- Platforms ----- */

#ifdef _WIN32
#   define      UCL_Windows 1
#else
#   define      UCL_Windows 0
#endif // _WIN32

#ifdef __ANDROID__
#   define      UCL_Android 1
#else
#   define      UCL_Android 0
#endif // __ANDROID__


/* ----- Compilers ----- */

#undef UCL_VS2013
#if defined(_MSC_VER)
#   pragma message ("Compiling with Microsoft Visual C++")
#   define      UCL_VS2013 1
#else
#   define      UCL_VS2013 0
#endif

#undef UCL_LLVM
#if defined(__clang__)
#   pragma message ("Compiling with CLang")
#   define      UCL_LLVM 1
#else
#   define      UCL_LLVM 0
#endif

#undef UCL_GCC
#if defined(__GNUC__) && !defined(__clang__)
#   pragma message ("Compiling with GCC")
#   define      UCL_GCC 1
#else
#   define      UCL_GCC 0
#endif
