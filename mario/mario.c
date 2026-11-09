#include <cs50.h>
#include <stdio.h>

int main(void) {
    int n;

    // loop inicial
    do {
        n = get_int("Height: ");
    } while (n < 1);

    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column++) {
            int spaces = n - (row + 1); // quantidade "spaces" por linha
            if (spaces > column) {
                printf(" ");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }
}
