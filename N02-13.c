#include <stdio.h>

int main() {
    int weight, height;
    double M;

    scanf("%d %d", &weight, &height);

    M = height / 100.0;
    double result = weight / (M * M);

    printf("%.2f\n", result);

    return 0;
}
