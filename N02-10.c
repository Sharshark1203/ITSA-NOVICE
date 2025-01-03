#include <stdio.h>

int main() {
    double kelometer;
    int mile;
    scanf("%d", &mile);
    kelometer = mile * 1.6;
    printf("km=%.1f\n", kelometer);
    return 0;
}