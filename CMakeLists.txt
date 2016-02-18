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

#set version numbers
set(PROCOLIB_VERSION_MAJOR 0)
set(PROCOLIB_VERSION_MINOR 1)

# Project's name
project(procolib)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}")