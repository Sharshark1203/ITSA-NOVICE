#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int up, down, height;
    scanf("%d %d %d", &up, &down, &height);

    double result = (up + down) * height / 2.0;
    result = round(result * 10) / 10;

    printf("Trapezoid area:%.1f\n", result);
    return 0;
}
