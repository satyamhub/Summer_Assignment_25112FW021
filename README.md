# Summer Assignment - C++ Programming 🚀

![C++](https://img.shields.io/badge/C%2B%2B-17-blue?style=flat-square&logo=cplusplus)
![Status](https://img.shields.io/badge/Status-Complete-brightgreen?style=flat-square)
![License](https://img.shields.io/badge/License-MIT-yellow?style=flat-square)

A comprehensive 10-day C++ programming assignment covering fundamental concepts from basic arithmetic to advanced pattern generation and recursion.

## 📋 Overview

This assignment includes **40 programming problems** organized into **10 days**, with progressive complexity levels. Each solution includes:

- ✨ Problem statement
- 📝 Detailed approach explanation
- ⏱️ Time & Space complexity analysis
- 💻 Clean, optimized C++17 code

## 📁 Project Structure

```
Summer_Assignment_25112FW021/
├── DAY 1/          # Basic Arithmetic (Q1-Q4)
├── DAY 2/          # Number Properties (Q5-Q8)
├── DAY 3/          # Prime & GCD Concepts (Q9-Q12)
├── DAY 4/          # Armstrong Numbers (Q13-Q16)
├── DAY 5/          # Number Classification (Q17-Q20)
├── DAY 6/          # Bit Operations & Powers (Q21-Q24)
├── DAY 7/          # Recursion Basics (Q25-Q28)
├── DAY 9/          # Pattern Generation (Q33-Q36)
├── DAY 10/         # Advanced Patterns (Q37-Q40)
├── build/          # Compiled binaries
├── practice_io/    # Input/Output test files
└── README.md       # This file
```

## 📚 Problem Breakdown

### **DAY 1: Basic Arithmetic** 🔢

| #   | Problem              | Complexity      |
| --- | -------------------- | --------------- |
| Q1  | Sum up to N Numbers  | O(N) / O(1)     |
| Q2  | Multiplication Table | O(N) / O(1)     |
| Q3  | Factorial            | O(N) / O(1)     |
| Q4  | Count Digits         | O(log N) / O(1) |

### **DAY 2: Number Properties** 🔍

| #   | Problem           | Complexity      |
| --- | ----------------- | --------------- |
| Q5  | Sum of Digits     | O(log N) / O(1) |
| Q6  | Reverse Number    | O(log N) / O(1) |
| Q7  | Product of Digits | O(log N) / O(1) |
| Q8  | Palindrome Check  | O(log N) / O(1) |

### **DAY 3: Prime & GCD Concepts** 🎯

| #   | Problem         | Complexity             |
| --- | --------------- | ---------------------- |
| Q9  | Prime Check     | O(√N) / O(1)           |
| Q10 | Prime in Range  | O(N√N) / O(1)          |
| Q11 | GCD (Euclidean) | O(log min(a,b)) / O(1) |
| Q12 | LCM             | O(log min(a,b)) / O(1) |

### **DAY 4: Armstrong Numbers** 💎

| #   | Problem          | Complexity           |
| --- | ---------------- | -------------------- |
| Q13 | Fibonacci Series | O(N) / O(1)          |
| Q14 | Nth Fibonacci    | O(N) / O(1)          |
| Q15 | Armstrong Check  | O(log N) / O(1)      |
| Q16 | Armstrong Range  | O(N \* log N) / O(1) |

### **DAY 5: Number Classification** 📊

| #   | Problem              | Complexity        |
| --- | -------------------- | ----------------- |
| Q17 | Perfect Number Check | O(N) / O(1)       |
| Q18 | Strong Number Check  | O(N \* M) / O(1)  |
| Q19 | Factors of Number    | O(N) / O(1)       |
| Q20 | Largest Prime Factor | O(N \* √N) / O(1) |

### **DAY 6: Bit Operations & Powers** ⚡

| #   | Problem             | Complexity      |
| --- | ------------------- | --------------- |
| Q21 | Decimal to Binary   | O(log N) / O(1) |
| Q22 | Binary to Decimal   | O(log N) / O(1) |
| Q23 | Count Set Bits      | O(log N) / O(1) |
| Q24 | Power Without pow() | O(N) / O(1)     |

### **DAY 7: Recursion Basics** 🔄

| #   | Problem                  | Complexity          |
| --- | ------------------------ | ------------------- |
| Q25 | Recursive Factorial      | O(N) / O(N)         |
| Q26 | Recursive Fibonacci      | O(2^N) / O(N)       |
| Q27 | Recursive Sum of Digits  | O(log N) / O(log N) |
| Q28 | Recursive Reverse Number | O(log N) / O(log N) |

### **DAY 9: Pattern Generation** 🎨

| #   | Problem                    | Complexity   |
| --- | -------------------------- | ------------ |
| Q33 | Reverse Star Pattern       | O(N²) / O(1) |
| Q34 | Reverse Number Triangle    | O(N²) / O(1) |
| Q35 | Repeated Character Pattern | O(N²) / O(1) |
| Q36 | Hollow Square Pattern      | O(N²) / O(1) |

### **DAY 10: Advanced Patterns** 🌟

| #   | Problem           | Complexity   |
| --- | ----------------- | ------------ |
| Q37 | Star Pyramid      | O(N²) / O(1) |
| Q38 | Reverse Pyramid   | O(N²) / O(1) |
| Q39 | Number Pyramid    | O(N²) / O(1) |
| Q40 | Character Pyramid | O(N²) / O(1) |

## 🚀 Getting Started

### Prerequisites

- GCC compiler with C++17 support
- Linux/Unix environment (or Windows with WSL)
- VS Code (optional, but recommended)

### Building

#### Ubuntu/Linux Build

```bash
# Build current file
cd /path/to/workspace
mkdir -p build
g++ -std=c++17 -Wall -Wextra -g <filename>.cpp -o build/<filename>
```

#### VS Code Tasks

Use the pre-configured build tasks:

- **Build and Run (Ubuntu)**: `Ctrl+Shift+B` then select task
- **Run with I/O**: Tests input from `practice_io/input.txt`

### Running

```bash
# Direct execution
./build/37_Star_Pyramid

# With input from file
./build/37_Star_Pyramid < practice_io/input.txt
```

## 📝 Example: Star Pyramid (Q37)

**Input:**

```
5
```

**Output:**

```
    *
   ***
  *****
 *******
*********
```

**Code Snippet:**

```cpp
for(int i = 1; i <= n; i++){
    // Print spaces
    for(int j = 0; j < n - i; j++){
        cout<<" ";
    }
    // Print stars (2*i - 1)
    for(int j = 0; j < 2 * i - 1; j++){
        cout<<"*";
    }
    cout<<endl;
}
```

## 🔧 Code Style

All solutions follow a consistent style:

```cpp
/*
Problem: [Problem Description]
*/

/*
Approach:
1. [Step 1]
2. [Step 2]
...
TC: O(...)
SC: O(...)
*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Solution code
    return 0;
}
```

## 📊 Key Concepts Covered

- ✅ **Loops & Iterations** - Nested loops, pattern generation
- ✅ **Recursion** - Base cases, recursive calls, call stack
- ✅ **Number Theory** - Primes, GCD, LCM, factors
- ✅ **Bit Manipulation** - Binary conversion, set bits
- ✅ **Mathematical Properties** - Armstrong, perfect, strong numbers
- ✅ **String/Pattern Concepts** - Palindromes, patterns, pyramids

## 💡 Tips & Best Practices

1. **Understand Before Coding** - Read the approach before implementing
2. **Test Edge Cases** - Try with 0, 1, negative numbers, large values
3. **Optimize Early** - Consider time/space complexity from the start
4. **Use Meaningful Names** - Variables should indicate their purpose
5. **Comment Complex Logic** - Help your future self understand the code

## 🧪 Testing

### Test with provided I/O

```bash
# Run with input file
g++ -std=c++17 DAY\ 10/37_Star_Pyramid.cpp -o build/test
./build/test < practice_io/input.txt > practice_io/output.txt
cat practice_io/output.txt
```

### Manual Testing

```bash
./build/37_Star_Pyramid
# Enter: 5
# Output: Pyramid pattern
```

## 📈 Learning Progression

```
Week 1: Basics (Q1-Q12)
  └─ Arithmetic → Number Properties → Primes & GCD

Week 2: Advanced Basics (Q13-Q28)
  └─ Armstrong → Special Numbers → Bit Ops → Recursion

Week 3: Patterns (Q33-Q40)
  └─ Simple Patterns → Advanced Pyramids
```

## 🎯 Complexity Analysis Reference

### Time Complexity Cheat Sheet

| Operation               | Complexity |
| ----------------------- | ---------- |
| Single digit extraction | O(log N)   |
| Loop N times            | O(N)       |
| Nested loops            | O(N²)      |
| Prime check             | O(√N)      |
| Recursive factorial     | O(N)       |
| Recursive fibonacci     | O(2^N)     |

### Space Complexity

- Most solutions use **O(1)** - constant extra space
- Recursive solutions use **O(N)** or **O(log N)** - call stack

## 📚 Resources

- [C++ Reference](https://cppreference.com)
- [GeeksforGeeks - Number Theory](https://geeksforgeeks.org)
- [Algorithm Complexity](https://en.wikipedia.org/wiki/Time_complexity)

## 📝 Notes

- Day 8 contains 4 additional practice problems
- All files compiled successfully with `g++ -std=c++17`
- Code follows TCS/Infosys/Wipro interview standards

## ✨ Features

- 🎯 40 completely solved problems
- 📖 Detailed problem statements and approaches
- ⏱️ Time & Space complexity for each solution
- 🔨 Ready-to-use build tasks in VS Code
- 📂 Organized by difficulty and concept
- 💯 Interview-ready solutions

## 👤 Author

**Assignment**: Summer Assignment 2025 (Roll: 25112FW021)
**Language**: C++17
**Date**: June 2026

## 📄 License

This project is open source and available under the MIT License.

---

<div align="center">

**Happy Coding! 🎉**

_Master the fundamentals, then conquer advanced problems!_

</div>
