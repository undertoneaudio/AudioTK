/**
 * \file config.h
 */

#ifndef ATK_CORE_CONFIG_H
#define ATK_CORE_CONFIG_H

#ifdef _MSC_VER
# ifdef BUILD_ATK_CORE
#  define ATK_CORE_EXPORT __declspec( dllexport )
# else
#  define ATK_CORE_EXPORT __declspec( dllimport )
# endif
#else
#define ATK_CORE_EXPORT
#endif

#endif
