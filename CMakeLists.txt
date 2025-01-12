cmake_minimum_required(VERSION 3.21)
project(CosmicVoyager)

set(CMAKE_CXX_STANDARD 23)

add_executable(CosmicVoyager main.cpp AsteroidKusagi.cpp AsteroidKusagi.h Event.h Gemi.h Kullanici.cpp Kullanici.h Oyun.cpp Oyun.h TerkEdilmisGezegen.cpp TerkEdilmisGezegen.h UzayKorsanlari.cpp UzayKorsanlari.h GucluGemi.h HizliGemi.h NormalGemi.h)
