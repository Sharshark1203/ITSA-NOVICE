#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    printf("Hello ");
    while ((ch = getchar()) != EOF) {
        printf("%c", ch);
    }
    printf("\n");
    return 0;
}