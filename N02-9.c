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
    int times;
    scanf("%d", &times);

    for (int i = 0; i < times; i++) {
        int num;
        scanf("%d", &num);
        if (num > 31) {
            printf("Value of more than 31\n");
        } else {
            printf("%d\n", pow(2, num));
        }
    }
    return 0;
}
