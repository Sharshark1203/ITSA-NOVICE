#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[10];
    scanf("%s", input);

    if (strcmp(input, "dog") == 0) {
        printf("狗\n");
    } else if (strcmp(input, "狗") == 0) {
        printf("dog\n");
    } else if (strcmp(input, "cat") == 0) {
        printf("貓\n");
    } else if (strcmp(input, "貓") == 0) {
        printf("cat\n");
    } else if (strcmp(input, "duck") == 0) {
        printf("鴨\n");
    } else if (strcmp(input, "鴨") == 0) {
        printf("duck\n");
    } else if (strcmp(input, "cow") == 0) {
        printf("牛\n");
    } else if (strcmp(input, "牛") == 0) {
        printf("cow\n");
    } else if (strcmp(input, "fox") == 0) {
        printf("狐\n");
    } else if (strcmp(input, "狐") == 0) {
        printf("fox\n");
    }

    return 0;
}
