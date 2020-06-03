# cpp-project-template

For simple build from command line
```
mkdir build
cd build
cmake         
make
make test
```

For nice integration with VSCode install the following extensions:
* C/C++
* CMake Tools
* C++ TestMate

For proper code formatting in VSCode adjust settings in the following way
```
    "editor.formatOnSave": true,
    "C_Cpp.clang_format_fallbackStyle": "Google"
```

For ideas on how to configure project for different releases/targets via command line see what output CMake Tools plugin produces in VSCode

It is expected that Google Test is installed in the environment where build is executed.
