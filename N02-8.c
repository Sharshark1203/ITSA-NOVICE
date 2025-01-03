#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int times;
    scanf("%d", &times);

    for (int i = 0; i < times; i++) {
        int num;
        scanf("%d", &num);
        printf("%d ", num);
        printf("%d ", num * num);
        printf("%d\n", num * num * num);
    }

    return 0;
}
