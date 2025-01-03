#include <stdio.h>
#include <stdlib.h>

int main() {
    int row, col;
    scanf("%d %d", &col, &row);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}