#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int down, height;
    scanf("%d %d", &down, &height);

    double result = down * height / 2.0;
    result = round(result * 10) / 10;

    printf("Triangle area:%.1f\n", result);
    return 0;
}
