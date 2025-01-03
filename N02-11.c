#include <stdio.h>

int main() {
    double C, F;
    scanf("%lf", &C);
    F = C * 1.8 + 32;
    printf("%.1f\n", F);
    return 0;
}