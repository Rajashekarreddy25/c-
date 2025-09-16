#include <stdio.h>
#include <string.h>
#include <regex.h>

int main() {
    regex_t regex;
    char str[] = "the a3bc is a pattern";
    char *token;

    // pattern: 1+ letters, 1+ digits, 2 letters (whole word)
    regcomp(&regex, "^[A-Za-z]+[0-9]+[A-Za-z]{2}$", REG_EXTENDED);

    // split sentence into words
    token = strtok(str, " ");
    while (token != NULL) {
        if (regexec(&regex, token, 0, NULL, 0) == 0) {
            printf("Match found: %s\n", token);
        }
        token = strtok(NULL, " ");
    }

    regfree(&regex);
    return 0;
}

