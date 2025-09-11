
## File Modes in C

### r (read)

- Opens an existing file for reading.

- File must exist; otherwise fopen() returns NULL.

- The file pointer starts at the beginning.

### w (write)

- Opens a file for writing.

- If the file exists → its contents are deleted.

- If the file doesn’t exist → a new file is created.

- The file pointer starts at the beginning.

### a (append)

- Opens a file for writing.

- If the file exists → data is written at the end (previous data not erased).

- If the file doesn’t exist → a new file is created.

- File pointer starts at the end.

### r+ (read + write)

- Opens an existing file for both reading and writing.

- File must exist.

- The file pointer starts at the beginning.

- Can read and also modify contents.

### w+ (write + read)

- Opens a file for both reading and writing.

- If file exists → contents erased.

- If file doesn’t exist → new file created.

- File pointer starts at the beginning.

### a+ (append + read)

- Opens a file for both reading and writing.

- If file exists → writing happens only at the end (old content not erased).

- If file doesn’t exist → new file created.

- File pointer starts at the end for writing, but you can read from anywhere.


<img width="984" height="489" alt="image" src="https://github.com/user-attachments/assets/2818a4e8-966c-43e2-8658-8c639f887c22" />






