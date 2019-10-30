This directory contains results from running the linter with default (HYPED) lint options 
on .cpp and .hpp files from last year's repository, and counting the number of "// NOLINT"s found.

An exception is that things in the [build/header_guard] category (i.e. header guards) are not checked,
due to the 'correct' value for the guards changing when testing in different locations.

Note that automatically generated PROTOBUF files are ignored (i.e. files that end with .pb.cpp or .pb.hpp).
(.pb.h is also ignored but that's because it's not even a .hpp file)

Comment lines and empty lines are not counted in the total line count.
