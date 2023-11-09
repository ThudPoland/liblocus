# Liblocus

*liblocus* is library for world generation, simulation and object management for 2D naval and space video games.
*locus-visualiser* is demo program used to test functions of *liblocus* in graphics environment. It uses SFML as frontend.

## Main features

Here are main features planned for 1.0 version of library.
 - [ ] Seeded PRNG generator
 - [ ] TRNG generator
 - [ ] Simple extendable world generator
 - [ ] Object management in generated worlds
 - [ ] World simulation with changeable time step
 - [ ] K-D Tree or another space-managed container integrated with object management
 - [ ] Godot integration with event system informing about arriving/leaving of world objects

**Disclaimer: This is very early state of library. Basic assumptions could change.**

## Plans for future

It's possible that in future library could have this features:

 - Extension to work in 3D games

## Inspirations
Here are our inspirations:

 - Old browser MMO games with ships
 - [Cosmoteer: Starship Architect & Commander](https://store.steampowered.com/app/799600/Cosmoteer_Starship_Architect__Commander/)
 - [Sid Meier's Pirates](https://store.steampowered.com/app/3920/Sid_Meiers_Pirates/)
 - [Mount and Blade: Bannerlord](https://store.steampowered.com/app/261550/Mount__Blade_II_Bannerlord/)

## Requirements
To build *liblocus* you need:

 - CMake 3.10+
 - Any C++ compiler that works with C++17
 
 **More informations in future.**

### Requirements for *locus-visualiser*
Additionally, to build *locus-visualiser* you need:

 - SFML 2.5+

**More informations in future.**

### Requirements for development/testing
If you want to contribute to project or fork it and et cetera, it's possible that you'll need run unit tests, so you need:

 - googletest 1.12.1+ (for now it's downloaded using CMakeLists.txt)

## Code of conduct?

Just be respectful with other contributors/users/etc..

## Build

 **More informations in future.**
