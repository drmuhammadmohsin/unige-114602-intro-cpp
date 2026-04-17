# C++ Environment Setup Guide

## Windows
1. Download and install [MinGW-w64](https://www.mingw-w64.org/)
2. Add `C:\mingw64\bin` to your system PATH
3. Verify: open terminal and run `g++ --version`

## macOS
1. Install Xcode Command Line Tools: `xcode-select --install`
2. Verify: `g++ --version`

## Linux
```bash
sudo apt update
sudo apt install g++ build-essential
g++ --version
```

## Recommended Editor
- [VS Code](https://code.visualstudio.com/) with the **C/C++** extension by Microsoft

## Compile & Run a C++ Program
```bash
g++ hello.cpp -o hello
./hello
```
