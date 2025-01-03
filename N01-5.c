#include <stdio.h>
#include <stdlib.h>

int pow(int num1, int num2) {
    int result = 1;
    for (int i = 0; i < num2; i++) {
        result *= num1;
    }
    return result;
}

int main() {
    int num;
    scanf("%d", &num);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < num / pow(10, 4 - i); j++) {
            printf("*");
        }
        num = num % pow(10, 4 - i);
        printf("\n");
    }

    return 0;
}