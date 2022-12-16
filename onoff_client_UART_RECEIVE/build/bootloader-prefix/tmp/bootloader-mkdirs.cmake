# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/sid/esp/esp-idf/components/bootloader/subproject"
  "/home/sid/esp/onoff_client_UART_RECEIVE/build/bootloader"
  "/home/sid/esp/onoff_client_UART_RECEIVE/build/bootloader-prefix"
  "/home/sid/esp/onoff_client_UART_RECEIVE/build/bootloader-prefix/tmp"
  "/home/sid/esp/onoff_client_UART_RECEIVE/build/bootloader-prefix/src/bootloader-stamp"
  "/home/sid/esp/onoff_client_UART_RECEIVE/build/bootloader-prefix/src"
  "/home/sid/esp/onoff_client_UART_RECEIVE/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/sid/esp/onoff_client_UART_RECEIVE/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/sid/esp/onoff_client_UART_RECEIVE/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
