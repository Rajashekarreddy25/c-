#include <stdio.h>

int main() {
    int N = 10;   // upper limit
    for (int i = 0; i <= N; i++) {
        int floor, ceil;

        if (i % 2 == 0) {   // even
            floor = ceil = i;
        } else {            // odd
            floor = i - 1;
            ceil = i + 1;
        }

        // apply bounds
        printf("i=%d -> floor=", i);
        if (floor < 0) printf("None");
        else printf("%d", floor);

        printf(" ceil=");
        if (ceil > N) printf("None");
        else printf("%d", ceil);

        printf("\n");
    }
    return 0;
}

