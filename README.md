# GUI-PPP2

Taken from Byarne Stroustrup's website
[PPP2](https://www.stroustrup.com/programming_support.html)

-----------------------------------------------------------

## FLTK compilation on Windows

For MS Visual Studio 2017:

- cd path\to\fltk
 
- mkdir build
 
- cd build
 
- cmake -G "Visual Studio 15 2017" -A x64 ..
 
- cmake --build . --config Release
 
- cmake --build . --config Debug
