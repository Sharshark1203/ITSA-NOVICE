#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("%d,", num % 10);
    num = num / 10;
    printf("%d,", num % 10);
    num = num / 10;
    printf("%d,", num % 10);
    num = num / 10;
    printf("%d\n", num);

    return 0;
}