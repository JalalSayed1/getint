
//* gcc -o output main.c && output

#include "getint.c"
#include <stdio.h>

#define SIZE 10

int main() {
    // test getint.c:
    int n, array[SIZE], getint(int *);

    for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++) {
        for (int i = 0; i < SIZE-1; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}
