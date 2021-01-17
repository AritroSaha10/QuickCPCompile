# QuickCPCompile
A small program to quickly compile C++ files created for competitive programming.

## Note
This has only been tested on a Windows 10 machine.

## Why?
It's a bit time consuming to type out `g++ -std=c++17 -O2 -Wall main.cpp -o main.exe` every single time, so the intended purpose is to add the path to this executable to my PATH so I can just type `QuickCPCompile main`.

## Usage
`QuickCPCompile main`

`main` represents the filename without the extension. This assumes that the extension is `.cpp`. 

## Compilation
The file doesn't need any linking and uses only C standard libraries, so you can just compile it without any other additions. Here's an example of a compile command:
`gcc -O2 -Wall CPcompile.c -o QuickCPCompile.exe`

## Author
Aritro Saha: [GitHub](https://github.com/AritroSaha10)
