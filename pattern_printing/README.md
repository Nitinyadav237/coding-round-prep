# Pattern Printing Programs

A comprehensive collection of C++ programs demonstrating various star (*) pattern printing techniques. These programs are fundamental exercises in DSA (Data Structures and Algorithms) that build concepts like nested loops, conditional logic, and mathematical pattern recognition.

## 📋 Table of Contents

- [Basic Patterns](#basic-patterns)
- [Rectangle & Square Patterns](#rectangle--square-patterns)
- [Pyramid Patterns](#pyramid-patterns)
- [Triangle Patterns](#triangle-patterns)
- [Complex Patterns](#complex-patterns)
- [How to Run](#how-to-run)
- [Patterns Overview](#patterns-overview)

---

## Basic Patterns

### A. Two Stars (`a_2_stars.cpp`)
**Prints n rows of double stars**
- **Input:** `n` (number of rows)
- **Output:** 
```
**
**
**
```
- **Concept:** Single loop for repetition

### B. M Stars (`b_m_stars.cpp`)
**Prints an n×m rectangle of stars**
- **Input:** `n` (rows), `m` (columns)
- **Output:** 
```
******
******
******
```
- **Concept:** Nested loops for 2D patterns

---

## Rectangle & Square Patterns

### C. Square (`c_square.cpp`)
**Prints a filled n×n square**
- **Input:** `n` (size)
- **Output:**
```
****
****
****
****
```
- **Concept:** Nested loops with equal dimensions

### D. Hollow Square (`d_hollow_square.cpp`)
**Prints an n×n square with hollow interior**
- **Input:** `n` (size)
- **Output:**
```
****
*  *
*  *
****
```
- **Concept:** Conditional logic to check borders

### E. Hollow Rectangle (`e_hollow_rectangle.cpp`)
**Prints an n×m hollow rectangle**
- **Input:** `n` (rows), `m` (columns)
- **Output:**
```
*****
*   *
*   *
*   *
*****
```
- **Concept:** Border detection in 2D grid

---

## Pyramid Patterns

### F. Pyramid (`f_pyramid.cpp`)
**Prints a left-aligned pyramid**
- **Input:** `n` (height)
- **Output:**
```
*
**
***
****
*****
```
- **Concept:** Variable iteration in nested loops

### G. Inverse Pyramid (`g_inverse_pyramid.cpp`)
**Prints an inverted left-aligned pyramid**
- **Input:** `n` (height)
- **Output:**
```
*****
****
***
**
*
```
- **Concept:** Reverse loop iteration

### H. Numbered Triangle (`h_numbered_triangle.cpp`)
**Prints a pyramid filled with row numbers**
- **Input:** `n` (height)
- **Output:**
```
1
22
333
4444
55555
```
- **Concept:** Replacing pattern with numbers instead of stars

### I. Binary Pyramid (`i_binary_pyramid.cpp`)
**Prints a pyramid with alternating 0s and 1s**
- **Input:** `n` (height)
- **Output:**
```
0
10
010
1010
01010
101010
```
- **Concept:** Alternating pattern logic, modulo operations

---

## Triangle Patterns

### J. Vertical Triangle (`j_vertical_triangle.cpp`)
**Prints a diamond-like triangle pattern**
- **Input:** `n` (height)
- **Output:**
```
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
```
- **Concept:** Two-part loop (ascending then descending)

### K. Hollow Vertical Triangle (`k_hollow_vertical_triangle.cpp`)
**Prints a hollow vertical triangle**
- **Input:** `n` (height)
- **Output:**
```
* 
* * 
*   * 
*     * 
*       * 
*     * 
*   * 
* * 
* 
```
- **Concept:** Hollow pattern with border detection

### L. Centered Triangle (`l_triangle.cpp`)
**Prints a centered right-angled triangle**
- **Input:** `n` (height)
- **Output:**
```
    *
   * *
  * * *
 * * * *
* * * * *
```
- **Concept:** Spaces for alignment, centered output

### M. Hollow Triangle (`m_hollow_triangle.cpp`)
**Prints a centered hollow triangle**
- **Input:** `n` (height)
- **Output:**
```
      * 
     * * 
    *   * 
   *     * 
  *       * 
 * * * * * * 
```
- **Concept:** Hollow pattern with centering and border logic

### N. Inverted Hollow Triangle (`n_inverted_hollow_triangle.cpp`)
**Prints an inverted hollow triangle**
- **Input:** `n` (height)
- **Output:**
```
* * * * * * * 
 *         * 
  *       * 
   *     * 
    *   * 
     * * 
      * 
```
- **Concept:** Reverse iteration with hollow logic

---

## Complex Patterns

### O. Diamond (`o_diamond.cpp`)
**Prints a diamond shape**
- **Input:** `n` (radius)
- **Output:**
```
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
```
- **Concept:** Combining ascending and descending pyramid logic

### Q. Crown (`q_crown.cpp`)
**Prints a crown pattern with symmetry**
- **Input:** `n` (height)
- **Output:**
```
*            *
**          **
***        ***
****      ****
*****    *****
******  ******
**************
```
- **Concept:** Horizontal symmetry, spacing calculations

### R. Butterfly (`r_butterfly.cpp`)
**Prints a butterfly-like symmetrical pattern**
- **Input:** `n` (height)
- **Output:**
```
*          *
**        **
***      ***
****    ****
*****  *****
************
*****  *****
****    ****
***      ***
**        **
*          *
```
- **Concept:** Vertical and horizontal symmetry combined

### S. Inverted Diamond (`s_inverted_diamond.cpp`)
**Prints two mirrored diamonds**
- **Input:** `n` (size)
- **Output:**
```
***** *****
****   ****
***     ***
**       **
*         *
**       **
***     ***
****   ****
***** *****
```
- **Concept:** Complex spacing and symmetry patterns

---

## How to Run

### Prerequisites
- G++ compiler installed (MSYS2 on Windows recommended)
- VS Code with C++ extension

### Compile and Run
```bash
# Using the built-in task
g++ -o a_2_stars.exe a_2_stars.cpp
.\a_2_stars.exe

# Enter input when prompted
# Example: Enter 5 to print 5 rows of "**"
```

### Using VS Code Tasks
- Press `Ctrl+Shift+B` to build the active file
- Press `F5` to debug/run (if configured)

---

## Learning Objectives

These patterns teach fundamental programming concepts:

1. **Loop Control:** Single and nested loops
2. **Conditionals:** If-else statements for pattern logic
3. **String Output:** Formatting with spaces and characters
4. **Mathematical Logic:** Pattern calculations and formulas
5. **Algorithm Design:** Breaking complex patterns into steps
6. **Space Complexity:** Understanding output formatting

---

## Pattern Categories by Difficulty

### Beginner
- a_2_stars
- b_m_stars
- c_square
- f_pyramid

### Intermediate
- d_hollow_square
- e_hollow_rectangle
- g_inverse_pyramid
- h_numbered_triangle
- i_binary_pyramid
- j_vertical_triangle
- l_triangle

### Advanced
- k_hollow_vertical_triangle
- m_hollow_triangle
- n_inverted_hollow_triangle
- o_diamond
- q_crown
- r_butterfly
- s_inverted_diamond

---

## Tips for Understanding Patterns

1. **Manual Trace:** Write out the pattern manually for small inputs (n=3 or n=4)
2. **Identify Loops:** Count how many nested loops are needed
3. **Find Conditions:** Determine when to print stars vs spaces
4. **Test Edge Cases:** Run with n=1 to verify boundary conditions
5. **Optimize:** Look for mathematical formulas to simplify logic

---

## Notes

- All programs use standard input (`cin`) for user input
- Output is printed to console using `cout`
- Programs follow simple, readable code style for learning purposes
- No classes or complex OOP concepts are used
- The `practice/` folder contains personal testing files (not included in this documentation)

---

 
**Language:** C++  
**Purpose:** DSA Pattern Learning
