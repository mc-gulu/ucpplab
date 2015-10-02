/*!
 * \file UCL_Logging.h
 * \date 2015/10/02 9:09
 * \author Gu Lu (mc-gulu@GitHub)
 *
 * \brief Definition of UCL_Logging 
*/

#pragma once

#include <string>

#include "UCL_Def.h"

std::string UCL_Format(const char* format, ...);
void        UCL_Log(const char* format, ...);

