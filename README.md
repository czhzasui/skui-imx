# Introduction

And skui-imx is an extension of skui(https://github.com/skui-org/) on imx8 platform

# How to get started

Clone this repository

    git clone https://github.com/czhzasui/skui-imx.git

After cloning this repository, make sure the submodules are up to date

    cd skui-imx
    git submodule update --init --recursive
	cd cmake
	git pull https://github.com/czhzasui/skui-imx-cmake skui-imx
	git checkout skui-imx
	cd ..

Create and navigate to a seperate build directory, e.g.

    mkdir build
    cd build

Run CMake (here, the [ninja](https://ninja-build.org/) build system is used, but any generator should work fine)

    cmake ../ -G Ninja

This step should inform you of any missing dependencies.
Then build

    cmake --build .

And run the tests to ensure nothing is wrong

    ctest

