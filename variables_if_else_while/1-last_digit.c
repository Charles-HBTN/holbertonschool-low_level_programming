#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // This initializes the random number generator
    int n = rand();     // Assign a random number to n

    int last_digit = n % 10;  // Calculate the last digit of n

    // Print the initial part of the output
    printf("Last digit of %d is", n);

    // Check the value of the last digit and print the corresponding message
    if (last_digit > 5) {
        printf(" and is greater than 5\n");
    } else if (last_digit == 0) {
        printf(" and is 0\n");
    } else {
        printf(" and is less than 6 and not 0\n");
    }

    return 0;
}
