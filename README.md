# Summer Assignment - C++ Programming

![C++](https://img.shields.io/badge/C%2B%2B-17-blue?style=flat-square&logo=cplusplus)
![Status](https://img.shields.io/badge/Status-In%20Progress-orange?style=flat-square)
![Problems](https://img.shields.io/badge/Solutions-106%2F107-brightgreen?style=flat-square)

A 27-day C++ assignment covering programming fundamentals, functions, arrays,
sorting, matrices, strings, and small management systems. The curriculum
contains 107 questions, from Q1 to Q107. This repository currently contains
106 solution files; the Q1 source
file is not present.

## Overview

Each solution generally includes:

- Problem statement
- Step-by-step approach
- Time and space complexity
- C++17 implementation

## Project Structure

```text
Summer_Assignment_25112FW021/
|-- DAY 1/          # Basic arithmetic (Q1-Q4)
|-- DAY 2/          # Number operations (Q5-Q8)
|-- DAY 3/          # Prime numbers, GCD and LCM (Q9-Q12)
|-- DAY 4/          # Fibonacci and Armstrong numbers (Q13-Q16)
|-- DAY 5/          # Special numbers and factors (Q17-Q20)
|-- DAY 6/          # Binary conversion and powers (Q21-Q24)
|-- DAY 7/          # Recursion (Q25-Q28)
|-- DAY 8/          # Basic patterns (Q29-Q32)
|-- DAY 9/          # More patterns (Q33-Q36)
|-- DAY 10/         # Pyramids (Q37-Q40)
|-- Day 11/         # Basic functions (Q41-Q44)
|-- Day 12/         # Number-checking functions (Q45-Q48)
|-- Day 13/         # Array basics (Q49-Q52)
|-- Day 14/         # Array searching and frequency (Q53-Q56)
|-- Day 15/         # Array transformations (Q57-Q60)
|-- Day 16/         # Array problems (Q61-Q64)
|-- Day 17/         # Operations on two arrays (Q65-Q68)
|-- Day 18/         # Sorting and binary search (Q69-Q72)
|-- Day 19/         # Matrix basics (Q73-Q76)
|-- Day 20/         # Matrix operations (Q77-Q80)
|-- DAY 21/         # String basics (Q81-Q84)
|-- DAY 22/         # String counting and cleanup (Q85-Q88)
|-- DAY 23/         # Character problems (Q89-Q92)
|-- DAY 24/         # String operations (Q93-Q96)
|-- DAY 25/         # Sorting strings and arrays (Q97-Q100)
|-- DAY 26/         # Mini applications (Q101-Q104)
|-- DAY 27/         # Record management systems (Q105-Q107)
|-- build/          # Compiled binaries
|-- practice_io/    # Input and output test files
`-- README.md
```

> Folder capitalization follows the existing repository naming.

## Problem Breakdown

| Day | Questions | Problems |
| --- | --- | --- |
| 1 | Q1-Q4 | Sum up to N, multiplication table, factorial, count digits |
| 2 | Q5-Q8 | Sum of digits, reverse number, product of digits, palindrome check |
| 3 | Q9-Q12 | Prime check, primes in range, GCD, LCM |
| 4 | Q13-Q16 | Fibonacci series, nth Fibonacci, Armstrong check, Armstrong numbers in range |
| 5 | Q17-Q20 | Perfect number, strong number, factors, largest prime factor |
| 6 | Q21-Q24 | Decimal to binary, binary to decimal, count set bits, power without `pow()` |
| 7 | Q25-Q28 | Recursive factorial, Fibonacci, sum of digits, reverse number |
| 8 | Q29-Q32 | Half pyramid, number triangle, character triangle, repeated-number pattern |
| 9 | Q33-Q36 | Reverse star, reverse number, repeated character, hollow square patterns |
| 10 | Q37-Q40 | Star pyramid, reverse pyramid, number pyramid, character pyramid |
| 11 | Q41-Q44 | Functions for sum, maximum, prime check, factorial |
| 12 | Q45-Q48 | Functions for palindrome, Armstrong, Fibonacci, perfect number |
| 13 | Q49-Q52 | Display array, sum and average, largest and smallest, even and odd count |
| 14 | Q53-Q56 | Linear search, element frequency, second largest, duplicates |
| 15 | Q57-Q60 | Reverse array, left rotation, right rotation, move zeroes to end |
| 16 | Q61-Q64 | Missing number, maximum-frequency element, pair with given sum, remove duplicates |
| 17 | Q65-Q68 | Merge, union, intersection, common elements |
| 18 | Q69-Q72 | Bubble sort, selection sort, binary search, descending sort |
| 19 | Q73-Q76 | Matrix addition, subtraction, transpose, diagonal sum |
| 20 | Q77-Q80 | Matrix multiplication, symmetric matrix, row sums, column sums |
| 21 | Q81-Q84 | String length without `strlen()`, reverse string, vowel/consonant count, lowercase to uppercase |
| 22 | Q85-Q88 | Palindrome string, word count, character frequency, remove spaces |
| 23 | Q89-Q92 | First non-repeating character, first repeating character, anagram strings, maximum occurring character |
| 24 | Q93-Q96 | String rotation, compress string, longest word, remove duplicate characters |
| 25 | Q97-Q100 | Merge sorted arrays, common characters, sort names alphabetically, sort words by length |
| 26 | Q101-Q104 | Number guessing game, voting eligibility system, ATM simulation, quiz application |
| 27 | Q105-Q107 | Student record management, employee management, salary management |

## Build and Run

### Prerequisites

- A compiler with C++17 support, such as GCC
- Linux, macOS, Windows with WSL, or another compatible environment

### Compile a Solution

Paths contain spaces, so quote the source path:

```bash
mkdir -p build
g++ -std=c++17 -Wall -Wextra "DAY 27/3.cpp" -o build/day27_3
./build/day27_3
```

### Run with Input and Output Files

```bash
g++ -std=c++17 "Day 18/3.cpp" -o build/day18_3
./build/day18_3 < practice_io/input.txt > practice_io/output.txt
cat practice_io/output.txt
```

## Code Style

Solutions use a simple assignment-friendly structure:

```cpp
/*
Problem: [Problem Description]
*/

/*
Approach:
1. [Step 1]
2. [Step 2]

TC:O(...)
SC:O(...)
*/

//code
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Solution
    return 0;
}
```

## Concepts Covered

- Loops, conditions, and basic arithmetic
- Number theory and digit operations
- Recursion and functions
- Pattern generation
- Arrays, searching, hashing, and duplicate handling
- Sorting algorithms and binary search
- Matrix operations
- Basic string processing
- Mini applications and record management using `struct`
- Time and space complexity analysis

## Testing Tips

1. Compile with `-Wall -Wextra` to catch common mistakes.
2. Test minimum and maximum valid input sizes.
3. Try repeated, negative, zero, and already-sorted values where applicable.
4. For matrices, verify dimensions before addition or multiplication.
5. For strings, test spaces, mixed case, digits, and empty input when supported.

## Progress

- Curriculum covered: Q1-Q107 across 27 days
- Solution files present: 106
- Missing source file: Q1 in `DAY 1`
- Language standard: C++17
- Last README update: June 2026

## Author

- **Assignment:** Summer Assignment 2025
- **Roll Number:** 25112FW021
- **Language:** C++17

## License

This project is open source and available under the MIT License.
