/**************************************************************************
 *   GPX Export Plugin for OpenCPN                                         *
 *   XML utility functions                                                 *
 **************************************************************************/

 /*************************************************************************
 * Copyright (c) 2026 Warren Holybee                                      *
 *                                                                        *
 * This program is free software; you can redistribute it and/or modify   *
 * it under the terms of the GNU General Public License as published by   *
 * the Free Software Foundation; either version 3 of the License, or      *
 * (at your option) any later version.                                    *
 *************************************************************************/

#ifndef _XML_UTIL_H_
#define _XML_UTIL_H_

#include <ctime>
#include <string>

namespace xml_util {

/** Escape XML special characters: &, <, >, ", ' */
std::string EscapeXml(const std::string& input);

/** Format a latitude value to a fixed-precision string for GPX. */
std::string FormatLat(double lat);

/** Format a longitude value to a fixed-precision string for GPX. */
std::string FormatLon(double lon);

/** Format a time_t value as ISO 8601 UTC string for GPX <time> elements. */
std::string FormatTimeISO8601(std::time_t t);

}  // namespace xml_util

#endif  // _XML_UTIL_H_