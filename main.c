#include <stdio.h>

int main() {
    int x, y, max, min;

    printf("Podaj x: ");
    scanf("%i", &x);

    printf("Podaj y: ");
    scanf("%i", &y);

    max = x > y ? x : y;

    printf("max to %i\n", max);

    min = x < y ? x : y;

    printf("minimum to %i\n", min);

    return 0;
}