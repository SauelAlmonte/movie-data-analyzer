# Movie Data Analyzer

A modular C++ program that stores, displays, and analyzes movie records using structures, pointers, and dynamic memory management.

---

### Author

**Sauel Almonte**  
[LinkedIn Profile](https://www.linkedin.com/in/sauel-almonte)  
[My Portfolio](https://s-almonte.vercel.app/)

---

## Features
- Dynamically allocates memory to store movie records.
- Captures movie details including:
    - Title
    - Director
    - Year Released
    - Running Time (minutes)
- Displays each movie's details along with its memory address.
- Identifies and displays the longest running movie in the collection.
- Clean, modular code structure:
    - **Specification File:** Struct and function prototypes
    - **Implementation File:** Function definitions for movie operations
    - **Main Program:** Orchestrates input, output, and analysis

---

## Project Structure
```
/movie-data-analyzer
├── MovieData.h       # Specification file: MovieData struct and function prototypes
├── MovieData.cpp     # Implementation file: Function definitions
├── main.cpp          # Main program logic
├── .gitignore        # Git ignore rules
└── README.md         # Project documentation
```

---

## Build & Run Instructions

### Prerequisites
- A C++ compiler (e.g., g++, clang++, or MSVC)
- C++17 standard or later
- IDE or editor:
    - JetBrains CLion
    - Visual Studio Code (VSCode)
    - Visual Studio (Windows)
    - Or terminal/command prompt

---

### Option 1: Compile & Run via Terminal
```
g++ -std=c++17 -o movie_analyzer MovieData.cpp main.cpp
./movie_analyzer
```
---

### Option 2: Using JetBrains CLion
1. Open CLion.
2. Select **Open** and navigate to the project directory.
3. CLion will configure CMake automatically.
4. Click **Build** or press `Shift + F9` to compile.
5. Press **Run** or `Shift + F10` to execute the program.

---

### Option 3: Using Visual Studio Code
1. Install the **C/C++ Extension Pack**.
2. Open the project folder in VSCode.
3. Compile via terminal:
```
g++ -std=c++17 -o movie_analyzer MovieData.cpp main.cpp
./movie_analyzer
```

---

### Option 4: Using Visual Studio (Windows)
1. Create a **New Console App Project**.
2. Add **MovieData.h**, **MovieData.cpp**, and **main.cpp** to the project.
3. Set the project to use the **C++17 standard** in Project Properties.
4. Build and run the solution.

---

### Example Output
```text
==========================================
	Welcome to the Movie Data Analyzer
==========================================

Enter desired array size: 2

Enter Title 0: Inception
Enter Director 0: Christopher Nolan
Enter Year Released 0: 2010
Enter running time (minutes) 0: 148

Enter Title 1: Interstellar
Enter Director 1: Christopher Nolan
Enter Year Released 1: 2014
Enter running time (minutes) 1: 169

<Memory Address>:  arrayPtr[0] =
	Title       : Inception
	Director    : Christopher Nolan
	Released    : 2010
	Running Time: 148 minutes

<Memory Address>:  arrayPtr[1] =
	Title       : Interstellar
	Director    : Christopher Nolan
	Released    : 2014
	Running Time: 169 minutes


Longest Movie in list:
	Title       : Interstellar
	Director    : Christopher Nolan
	Released    : 2014
	Running Time: 169 minutes

Longest Movie is: 169 minutes long

DELETING array at arrayPtr = <Memory Address>
Exit the program.

```

---

## License

This project is licensed under the [MIT License](LICENSE).  
Copyright (c) 2025 Salmonte

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

### Disclaimer
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

---
