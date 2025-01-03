#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("    *    \n");
            printf("   * *   \n");
            printf("  *   *  \n");
            printf(" *     * \n");
            printf("*********\n");
            break;
        case 2:
            printf("    *    \n");
            printf("   ***   \n");
            printf("  *****  \n");
            printf(" ******* \n");
            printf("*********\n");
            break;
        case 3:
            printf("*********\n");
            printf(" ******* \n");
            printf("  *****  \n");
            printf("   ***   \n");
            printf("    *    \n");
            break;
    }

    return 0;
}
