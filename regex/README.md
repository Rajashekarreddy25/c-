## 🔹 What is Regex?

A regular expression (regex) is a pattern used to match, search, or manipulate strings.

In C, regex is not built-in like Python or JavaScript.

Instead, C uses the POSIX Regular Expression library (<regex.h>).

### 🔹 Header File
```
#include <regex.h>
```

This gives access to the regex functions and data types.

### 🔹 Important Data Types

- regex_t → a struct that holds the compiled regex pattern.

- regmatch_t → stores the start and end position of matches.

### 🔹 Common Regex Functions
- 1. Compile a Regex
int regcomp(regex_t *preg, const char *pattern, int cflags);


- preg: regex object

- pattern: regex pattern (string)

- cflags: options

- REG_EXTENDED → extended regex (use +, ?, {n})

- REG_ICASE → case-insensitive

- REG_NOSUB → don’t need match details

Returns:

- 0 → success

- non-zero → error

- 2. Execute (Match) Regex
```
int regexec(const regex_t *preg, const char *string, size_t nmatch, regmatch_t pmatch[], int eflags);
```

- preg: compiled regex

- string: input string to test

- nmatch: how many matches to store

- pmatch: array of regmatch_t (to store match positions)

- eflags: execution flags (like REG_NOTBOL, REG_NOTEOL)

Returns:

0 → match found

REG_NOMATCH → no match

- 3. Free Regex
```
void regfree(regex_t *preg);
```

Frees memory used by regex.

### 🔹 Example 1: Simple Match

Check if a string contains only digits.
```
#include <stdio.h>
#include <regex.h>

int main() {
    regex_t regex;
    int result;

    // Compile regex: pattern = only digits
    result = regcomp(&regex, "^[0-9]+$", REG_EXTENDED);

    if (result) {
        printf("Could not compile regex\n");
        return 1;
    }

    // Test string
    char str[] = "12345";

    // Execute regex
    result = regexec(&regex, str, 0, NULL, 0);

    if (!result) {
        printf("Match found: String has only digits\n");
    } else {
        printf("No match\n");
    }

    regfree(&regex);
    return 0;
}
```

👉 Output:
```
Match found: String has only digits
```
### 🔹 Example 2: Case-Insensitive Match

Check if a string starts with "hello" (ignoring case).
```
#include <stdio.h>
#include <regex.h>

int main() {
    regex_t regex;
    int result;

    regcomp(&regex, "^hello", REG_EXTENDED | REG_ICASE);

    char str[] = "HelloWorld";

    result = regexec(&regex, str, 0, NULL, 0);

    if (!result) {
        printf("Starts with hello\n");
    } else {
        printf("Does not start with hello\n");
    }

    regfree(&regex);
    return 0;
}
```
### 🔹 Example 3: Extract Matches

Find the first word in a string.
```
#include <stdio.h>
#include <regex.h>

int main() {
    regex_t regex;
    regmatch_t match[1];  // store match
    char str[] = "Regex in C is powerful";

    // pattern: first word
    regcomp(&regex, "^[A-Za-z]+", REG_EXTENDED);

    if (regexec(&regex, str, 1, match, 0) == 0) {
        printf("Match found: ");
        for (int i = match[0].rm_so; i < match[0].rm_eo; i++) {
            putchar(str[i]);
        }
        printf("\n");
    } else {
        printf("No match\n");
    }

    regfree(&regex);
    return 0;
}
```

👉 Output:

Match found: Regex

### 🔹 Common Regex Patterns
| Pattern    | Meaning                            |
| ---------- | ---------------------------------- |
| `.`        | Any single character               |
| `[abc]`    | One of `a`, `b`, or `c`            |
| `[^abc]`   | Any character except `a`, `b`, `c` |
| `[0-9]`    | Any digit                          |
| `[A-Za-z]` | Any letter                         |
| `^`        | Start of string                    |
| `$`        | End of string                      |
| `*`        | 0 or more repetitions              |
| `+`        | 1 or more repetitions              |
| `?`        | 0 or 1 repetition                  |
| `{n}`      | Exactly n times                    |
| `{n,m}`    | Between n and m times              |
