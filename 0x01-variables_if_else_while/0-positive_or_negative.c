#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int n;

    // Generate a random number
    srand(time(0));
    n = rand();

    printf("The number is: %d\n", n);

    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}