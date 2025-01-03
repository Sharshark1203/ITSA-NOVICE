#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int MAX = 0;
    for (int i = 0; i < 3; i++) {
        int num;
        scanf("%d", &num);
        if (num > MAX) {
            MAX = num;
        }
    }
    printf("%d\n", MAX);
    return 0;
}
