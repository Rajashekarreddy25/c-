#include <stdio.h>
#include <dirent.h>

int main() {
    struct dirent *de;  // Pointer for directory entry

    // Open the current directory
    DIR *dr = opendir(".");
    if (dr == NULL) {
        printf("Could not open current directory\n");
        return 1;
    }

    printf("Files in the current directory:\n");

    // Read and print all files/directories
    while ((de = readdir(dr)) != NULL) {
        printf("%s\n", de->d_name);
    }

    closedir(dr);
    return 0;
}

