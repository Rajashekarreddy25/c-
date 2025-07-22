# Introduction to C
1.charcter set:names that are used to write c program .

2.identifer :Names given to to memory locations .

3.keywords : pre-defined words are keywords.

4.datatypes : 

5.constants :

6.variables :

### character set:

We have 4 Categories in character set 

1. Alphabets:
### Arrays in C

### An array is a data structure that is used to store elements of the same data type, and memory allocated is contiguous


✅ Field Width, Precision, and Suppression in C (printf() and scanf())
📌 printf() – Field Width and Precision
🔹 Field Width (Minimum Display Width)
It defines the minimum number of characters to be printed.

If the actual output is shorter, it is right-aligned and padded with spaces by default.

```
printf("%5d", 42);     // Output: "   42"
printf("%-5d", 42);    // Output: "42   " (left-aligned)

```
🔹 Precision
Precision means different things depending on data type:

Type	Meaning of Precision	Example
float	Digits after decimal point	printf("%.2f", 3.14159); // 3.14
int	Minimum number of digits	printf("%.5d", 42); // 00042
string	Maximum characters to print	printf("%.3s", "Hello"); // Hel

🔹 Field Width + Precision Together
```
printf("%8.2f", 3.14); // Output: "    3.14"

```
Total width: 8

Decimal digits: 2

Spaces are added in the front to match width

📌 scanf() – Field Width, Precision, and Suppression
🔹 Field Width in scanf()
It limits the number of characters read from input.

```
char name[10];
scanf("%5s", name);  // Even if user types "ShankarReddy", only "Shank" is read
🔹 Suppression in scanf()
Use * to skip (suppress) reading a value from input.
```
📍 Examples:

```
int a;
scanf("%*d %d", &a);  // Skips the first number and stores the second

// Input: 10 20
// Output stored: a = 20
```
```
char ch;
scanf("%*c %c", &ch); // Skips one character and reads the next

// Input: AB
// Output stored: ch = 'B'

```
🧠 Summary Table
Format	        Used In	Meaning
%5d	printf	    Print int in width of 5 (right-aligned)
%8.2f	        printf	Float with width 8 and 2 decimal places
%.3s	        printf	Print first 3 characters of string
%5s	scanf	    Read max 5 characters from input
%*d	scanf	    Suppress first int input (skip storing)
```
🧪 Test Programs
### test programs
// printf field width & precision
#include <stdio.h>
int main() {
    printf("Number with width 5: [%5d]\n", 42);
    printf("Float with 2 decimals: [%.2f]\n", 3.14159);
    printf("Float with width and precision: [%8.2f]\n", 3.14);
    printf("String precision: [%.3s]\n", "HelloWorld");
    return 0;
}
c
Copy
Edit
// scanf suppression
#include <stdio.h>
int main() {
    int a;
    printf("Enter two numbers: ");
    scanf("%*d %d", &a);
    printf("Second number is: %d\n", a);
    return 0;
}

```

###🔧 C Compilation Process — Step by Step
```
Source Code (file.c)
       ↓
🔹 Pre-processing Stage
       ↓
Preprocessed Code (file.i)
       ↓
🔹 Compilation Stage
       ↓
Assembly Code (file.s)
       ↓
🔹 Assembly Stage
       ↓
Object Code (file.o)
       ↓
🔹 Linking Stage
       ↓
Executable File (a.out or custom name)
```
📘 Explanation of Each Stage:
🔹 1. Source Code (file.c)
The raw C program written by the user.

Example:

```
#include <stdio.h>
#define PI 3.14

int main() {
    float area;
    area = PI * 2 * 2;
    printf("Area = %f\n", area);
    return 0;
}
```
🔹 2. Pre-processing Stage
Removes comments.

Expands macros (#define, #include).

Conditional compilation with #ifdef, #ifndef.

Tool: C Preprocessor (cpp)
Output: file.i
```
gcc -E file.c -o file.i
```
🔹 3. Compilation Stage
Converts preprocessed code into Assembly Code.

Syntax and semantic checking.

Basic optimizations.

Tool: Compiler (gcc)
Output: file.s
```
gcc -S file.i -o file.s
```
🔹 4. Assembly Stage
Translates .s (assembly) to .o (object code).

Machine-level instructions generated.

Tool: Assembler (as)
Output: file.o
```
gcc -c file.s -o file.o
```
🔹 5. Linking Stage
Combines one or more .o files and libraries.

Resolves function calls (printf, etc.).

Produces final executable.

Tool: Linker (ld via gcc)
Output: a.out (default) or ./your_program
```
gcc file.o -o output
```
✅ Final Output: Executable File
This is the final runnable program:
```
./output
```
