## 🔹 1. Token (in C Language syntax)

In C programming, a token is the smallest unit of a C program that the compiler understands.
Think of tokens as the words in the C "language".

#### Types of tokens:

- Keywords – reserved words (e.g., int, for, if, return).

- Identifiers – names given to variables, functions, arrays, etc. (e.g., sum, main).

- Constants – fixed values (e.g., 10, 3.14, 'a').

- Strings – sequence of characters in double quotes (e.g., "Hello").

- Operators – symbols that perform operations (e.g., +, -, *, /, =).

- Punctuators (Separators) – symbols like ;, {, }, (, ), [ ], ,.

📌 Example:
```
int x = 10;
```

#### Tokens are:

int → keyword

x → identifier

= → operator

10 → constant

; → punctuator

### 🔹 2. Token (in String Splitting using strtok() function)

In C library functions, we also use the term token when splitting a string into pieces.
The function strtok() is used for this.

📌 Example:
```

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "C,Java,Python";
    char *token;

    token = strtok(str, ",");   // split by comma
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }

    return 0;
}

```
👉 Output:
```
C
Java
Python

```
Here:

C, Java, Python are tokens (substrings split by ,).

✅ So in C:

Compiler tokens = building blocks of C code.

String tokens (via strtok()) = substrings cut from a bigger string.
