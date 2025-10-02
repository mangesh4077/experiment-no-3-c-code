#include <stdio.h>
int main() {
    int l, b;
    printf("Enter length and breadth: ");
    scanf("%d %d", &l, &b);

    if (l == b)
        printf("Square\n");
    else
        printf("Rectangle\n");

    return 0;
}
