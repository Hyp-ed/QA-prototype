# QA-prototype: Laura
To try stuff that could work for Quality Assurance team.

To use the Google Test framework, you need to have CMake installed. The setup script setup.sh will check if CMake is installed, and install it if it isn't, before installing Google Test and compiling the library binaries. (NB setup.sh is intended for Mac OS X users)

To compile a .cpp test file from the command line, you should run something like: 
```
g++ --std=c++11 -lgtest -lgtest_main myfile.cpp -o myfile
```
Note that you need to import both the gtest and gtest_main libraries to compile into binary.

A common error in compiling files using Google Test is a linker error, with an error message similar to something like:
```
Undefined symbols for architecture x86-64:
  "testing::Test::~Test()", referenced from:
   CrazyTest_one_Test::~CrazyTest_one_Test()in CrazyTest.o
   CrazyTest_one_Test::~CrazyTest_one_Test()in CrazyTest.o
```
This error is typically due to the fact that the project was built with a different compiler than Google Test. Make sure you're using the same for both! (in our case, g++)

## Repo Structure
To avoid any conflicts, all contributors are advised to create project/experiment folders. If you desire a "private" experimental space, name the folder using your name, e.g. `martin_google_framework`.
