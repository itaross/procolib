# ================================================================================== */
#    This file provides basic definitions for the procolib.                          */
#    procolib - process control library                                              */
#    Copyright (C) 2016  Alessandro Rossignoli                                       */
#                                                                                    */
#    This program is free software: you can redistribute it and/or modify            */
#    it under the terms of the GNU General Public License as published by            */
#    the Free Software Foundation, either version 3 of the License, or               */
#    (at your option) any later version.                                             */
#                                                                                    */
#    This program is distributed in the hope that it will be useful,                 */
#    but WITHOUT ANY WARRANTY; without even the implied warranty of                  */
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                   */
#    GNU General Public License for more details.                                    */
#                                                                                    */
#    You should have received a copy of the GNU General Public License               */
#    along with this program.  If not, see <http://www.gnu.org/licenses/>.           */
# ================================================================================== */

# Specify the minimum version for CMake

cmake_minimum_required(VERSION 2.8)

# Project's name
project(procolib)
include_directories($(CMAKE_SOURCE_DIR)/include)
message($(CMAKE_SOURCE_DIR)/include)

# Create a target for the library
add_library(procolib SHARED src/transfer_function.c)