# Lab 01 — PC Usage Laboratory

**Course:** Introduction to Computer Science and Programming  
**Date:** October 07, 2025  
**Instructor:** Filippo Ricca — DIBRIS, University of Genova

---

## Overview

This lab is dedicated to performing simple but essential tasks on the computer. It covers file system navigation, software installation, command line usage, and mathematical problem solving.

---

## Exercise 1 — File System

**Goal:** Practice creating folders, inserting files, renaming, and compressing.

### Tasks
1. Create a folder on your computer
2. Insert a file inside the folder
3. Rename the file
4. Compress the folder into a `.zip` file

### Submission *(via AulaWeb)*
- Take a **screenshot** of the zipped folder containing the renamed file in your Downloads folder
- Submit the screenshot on AulaWeb

---

## Exercise 2 — System and Software Knowledge

**Goal:** Explore your system settings and install software.

### Task 1 — Check System Information
Find and note down your:
- Operating System (name and version)
- CPU (processor type and speed)
- Memory (RAM)

> **How to check on Windows:** Right-click *This PC* → *Properties*  
> **How to check on macOS:** Apple menu → *About This Mac*  
> **How to check on Linux:** Run `lscpu` and `free -h` in terminal

### Task 2 — Software Installation
- Download and install a **text editor** of your choice
- Recommended: [Sublime Text](https://www.sublimetext.com/) or [VS Code](https://code.visualstudio.com/)

### Task 3 — Update System Software
- Check for and install any available system updates
- Ensure your OS is fully up to date

### Submission *(via AulaWeb)*
1. Screenshot of your **system specifications**
2. Screenshot of the **installed text editor** running
3. Screenshot of the **system update check**

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

### Submission *(via AulaWeb)*
- Submit a **screenshot** of `ProjectFiles.zip` created on your Desktop

---

## Exercise 4 — Complex Non-Linear Equation

**Goal:** Solve the following equation using any tool you choose (online solver, Python, MATLAB, WolframAlpha, etc.)

```
x⁵ - 2x⁴ + x³ - 3x + sin(x) = eˣ - 1
```

> This equation involves **high-degree polynomials** and **transcendental functions**.  
> You must solve it **on your own** — using the internet, colleagues, or AI tools like ChatGPT is allowed!

### Suggested Tools
- [WolframAlpha](https://www.wolframalpha.com/)
- Python with `scipy.optimize`
- MATLAB `fsolve`

### Submission *(via AulaWeb)*
- Submit a **screenshot** showing the final result from the tool you used

---

## Notes
- Submissions for all exercises go to **AulaWeb** (login required)
- Work independently — this lab helps the instructor understand your current skill level
