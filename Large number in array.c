#include <stdio.h>

int main() {
    int numbers[5] = {3, 5, 2, 9, 7};
    int max = numbers[0];

    // Find the largest element
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("Largest element: %d\n", max);

    return 0;
}
