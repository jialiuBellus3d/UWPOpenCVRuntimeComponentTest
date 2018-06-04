/*M///////////////////////////////////////////////////////////////////////////////////////
//
// B3D_version contains B3D API version information
//
// Copyright (c) 2017 Bellus3D, Inc. All rights reserved.
//
// 2/22/2017	sec	created
//
//M*/

#pragma once

#include <string>
#include <iostream>
#include <sstream>

/** Main namespace for all B3D classes */
namespace b3d {

#define B3D_VERSION_MAJOR    0
#define B3D_VERSION_MINOR    9
#define B3D_VERSION_REVISION 24
#define B3D_VERSION_STATUS   "d"            /**< Development */
//#define B3D_VERSION_STATUS   "a"			/**< Alpha */
//#define B3D_VERSION_STATUS   "b"			/**< Beta */
//#define B3D_VERSION_STATUS   ""			/**< Final */

/** Set this to 0 for release build. Set to 1 enable debug build */
#define B3D_DEBUG_BUILD 0

inline std::string getB3D_version() {
    std::ostringstream os;
    os << B3D_VERSION_MAJOR << "." << B3D_VERSION_MINOR << "." << B3D_VERSION_REVISION << B3D_VERSION_STATUS;
    return os.str();
}

inline std::string getOpencv_version() {
    std::ostringstream os;
    os << CV_VERSION;
    return os.str();
}

} // namespace b3d
