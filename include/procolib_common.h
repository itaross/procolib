/* ================================================================================== */
/*    This file provides basic definitions for the procolib.                          */
/*    procolib - process control library                                              */
/*    Copyright (C) 2016  Alessandro Rossignoli                                       */
/*                                                                                    */
/*    This program is free software: you can redistribute it and/or modify            */
/*    it under the terms of the GNU General Public License as published by            */
/*    the Free Software Foundation, either version 3 of the License, or               */
/*    (at your option) any later version.                                             */
/*                                                                                    */
/*    This program is distributed in the hope that it will be useful,                 */
/*    but WITHOUT ANY WARRANTY; without even the implied warranty of                  */
/*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                   */
/*    GNU General Public License for more details.                                    */
/*                                                                                    */
/*    You should have received a copy of the GNU General Public License               */
/*    along with this program.  If not, see <http://www.gnu.org/licenses/>.           */
/* ================================================================================== */
#pragma once

/*
      procolib version number.
      version format:    0xAABBCCDD
        AA = major release;
        BB = minor release;
        CC = private feature (or major bug);
        DD = bug fixing (current development).
*/
#define PROCOLIB_VERSION_MAJOR  @PROCOLIB_VERSION_MAJOR@
#define PROCOLIB_VERSION_MINOR @PROCOLIB_VERSION_MINOR@
#define PROCOLIB_VERSION_PRIVATE_FEATURE @PROCOLIB_PRIVATE_FEATURE@
#define PROCOLIB_VERSION_BUGFIXING @PROCOLIB_VERSION_BUGFIXING@

/* ================================================================================== */
/*    Macro definitions for exporting dynamic library.                                */
/* ================================================================================== */
      

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(_WIN64)
    #define PROCOLIB_STDCALL _stdcall
    #define PROCOLIB_DECLSPEC __declspec
    #define PROCOLIB_DLLEXPORT ( dllexport )
#endif

#ifdef DLL_EXPORTS
  #define PROCOLIB_API PROCOLIB_DECLSPEC PROCOLIB_DLLEXPORT PROCOLIB_STDCALL
#else
  #define PROCOLIB_API PROCOLIB_STDCALL
#endif

/* ================================================================================== */
/*    Error codes.                                                                    */
/* ================================================================================== */
typedef enum PROCOLIB_ERROR_CODE
{
  PROCOLIB_NO_ERROR,
  PROCOLIB_ERR_WRONG_ARGUMENT
};

/* ================================================================================== */
/*    procolib, types definitions. Forward declarations                               */
/* ================================================================================== */
typedef PROCOLIB_TF PROCOLIB_TF;