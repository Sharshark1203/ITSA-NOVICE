#include <stdio.h>

int main() {
    int distance;

    scanf("%d", &distance);
    double speed = 100.0 - 30 * 2.54;
    double time = distance / speed * 100;
    printf("%d\n", (int)time + 1);

    return 0;
}
