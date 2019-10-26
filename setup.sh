#!/bin/bash

if cmake --version | grep -q 'cmake version'; then
  echo "CMake installed."
else
  echo "Installing CMake..."
  curl -L "https://github.com/Kitware/CMake/releases/download/v3.16.0-rc2/cmake-3.16.0-rc2.tar.gz" > "cmake-3.16.0-rc2.tar.gz"
  tar xzf cmake-3.16.0-rc2.tar.gz
  cd cmake-3.16.0-rc2.tar.gz
  ./bootstrap
  make
  sudo make install
fi

echo "Installing Google Test..."

cd ..
git clone https://github.com/google/googletest.git

cd googletest && mkdir build && cd build

cmake -DCMAKE_CXX_COMPILER="c++" -DCMAKE_CXX_FLAGS="-std=c++11 -stdlib=libc++" ..


make
make install
