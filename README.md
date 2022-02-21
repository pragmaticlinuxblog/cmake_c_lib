# CMake-C-Lib
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

CMake-C-Lib is a template for developing a shared library in C and building it with CMake. You can use it as a starting point for developing your own shared library. 

## What you need

To obtain and build CMake-C-Lib, make sure that your Linux system has C development and Git related packages installed:

* Debian/Ubuntu: `sudo apt install git gcc g++ gdb make cmake`
* Fedora: `sudo dnf install git gcc g++ gdb make cmake`
* openSUSE: `sudo zypper install git gcc gcc-c++ gdb make cmake`

## Getting the code

To get the code, clone the Git repository to a subdirectory, for example inside your own home directory:

* `git clone https://github.com/pragmaticlinuxblog/cmake_c_lib.git ~/mylib`

## Building the application

After cloning the Git repository, you can prepare the build environment with the help of CMake:

* `cd ~/mylib/build`
* `cmake ..`

Note that this only has to be done once. From now on you can build the library by running this command from inside the `build` subdirectory:

* `make all`

## Installing the library

The *CMakeLists.txt* contains details on how to install the library as well. To install the library on your Linux system, run this command from the `build` subdirectory:

* `sudo make install`

And finally run `ldconfig` to register the library on the system:

* `sudo ldconfig`
