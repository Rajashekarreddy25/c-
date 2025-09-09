#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    int len = strlen(str);
    int start = len - 1, end = len - 1;

    while (start >= 0) {
        // move start pointer to the beginning of the word
        while (start >= 0 && str[start] != ' ')
            start--;

        // print the word
        for (int i = start + 1; i <= end; i++) {
            printf("%c", str[i]);
        }

        // print space (if not the last word)
        if (start >= 0)
            printf(" ");

        // move end to previous word
        end = start - 1;
        start = end;
    }
}

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // remove newline from fgets if present
    str[strcspn(str, "\n")] = '\0';

    printf("Reversed sentence: ");
    reverseWords(str);

    return 0;
}

