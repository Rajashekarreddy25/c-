/*   *** What is Structure Padding?
Structure padding is the process in which the compiler adds extra bytes (unused memory) between the members of a structure to align data in memory for performance reasons.

CPUs access memory in chunks (2, 4, or 8 bytes).

If members of a structure are not aligned properly, the CPU has to do extra work (slower).

So, the compiler inserts padding bytes to align the data.
*/

//🔹 Example Without Padding Explanation
#include <stdio.h>
struct PaddingExample {
    char a;     // 1 byte
    int b;      // 4 bytes
    char c;     // 1 byte
};
int main() {
    struct PaddingExample s;
    printf("Size of struct: %lu\n", sizeof(s));
    return 0;
}

//Reorder the structure members from largest to smallest:
/*
 #include <stdio.h>

struct NoPaddingExample {
    int b;      // 4 bytes
    char a;     // 1 byte
    char c;     // 1 byte
};

int main() {
    struct NoPaddingExample s;
    printf("Size of struct: %lu\n", sizeof(s));
    return 0;
}*/
