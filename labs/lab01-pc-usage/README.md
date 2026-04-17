# Lab 01 — PC Usage Laboratory

**Course:** Introduction to Computer Science and Programming
**Date:** October 07, 2025
**Instructor:** Dr. Muhammad Mohsin — DIBRIS, University of Genova

---

## Overview

This lab covers essential computer tasks: file system navigation, software installation, command line usage, and mathematical problem solving.

---

## Exercise 1 — File System

**Goal:** Practice creating folders, inserting files, renaming, and compressing.

### Tasks

1. Create a folder on your computer
2. Insert a file inside the folder
3. Rename the file
4. Compress the folder into a `.zip` file

---

## Exercise 2 — System and Software Knowledge

**Goal:** Explore your system settings and install software.

### Task 1 — Check System Information

Find and note down your:

- Operating System (name and version)
- CPU (processor type and speed)
- Memory (RAM)

> **Windows:** Right-click *This PC* → *Properties*
> **macOS:** Apple menu → *About This Mac*
> **Linux:** Run `lscpu` and `free -h` in terminal

### Task 2 — Software Installation

Download and install a text editor of your choice. Recommended: [Sublime Text](https://www.sublimetext.com/) or [VS Code](https://code.visualstudio.com/).

### Task 3 — Update System Software

Check for and install any available system updates.

---

## Exercise 3 — CLI: File and Directory Management

**Goal:** Gain practical experience managing files using the Command Line Interface (CLI).

### What is CLI?

The **Command Line Interface** lets you interact with your computer using text commands instead of a graphical interface.

| GUI | CLI |
|-----|-----|
| Click to create folder | `mkdir folder_name` |
| Click to move file | `mv file destination/` |
| Click to delete | `rm filename` |

### Tasks

1. Open a terminal (Command Prompt on Windows / Terminal on macOS/Linux)
2. Create a folder structure using CLI commands
3. Create files inside the folders
4. Move directories
5. Compress everything into `ProjectFiles.zip`

### Useful CLI Commands

**Windows (Command Prompt):**

```cmd
mkdir FolderName          # create a folder
cd FolderName             # enter a folder
cd ..                     # go back one level
dir                       # list contents
move file.txt Folder\     # move a file
copy file.txt Folder\     # copy a file
del file.txt              # delete a file
```

**macOS / Linux (Terminal):**

```bash
mkdir FolderName          # create a folder
cd FolderName             # enter a folder
cd ..                     # go back one level
ls                        # list contents
mv file.txt Folder/       # move a file
cp file.txt Folder/       # copy a file
rm file.txt               # delete a file
```

---

## Exercise 4 — Complex Non-Linear Equation

**Goal:** Solve the following equation using any tool you choose.

```
x⁵ - 2x⁴ + x³ - 3x + sin(x) = eˣ - 1
```

> This equation involves **high-degree polynomials** and **transcendental functions**.
> You may use the internet, colleagues, or AI tools.

### Suggested Tools

- [WolframAlpha](https://www.wolframalpha.com/)
- Python with `scipy.optimize`
- MATLAB `fsolve`
