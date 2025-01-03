#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", num / 1000);
    num = num % 1000;
    printf("%d\n", num / 100);
    num = num % 100;
    printf("%d\n", num / 10);
    num = num % 10;
    printf("%d\n", num);

    return 0;
}