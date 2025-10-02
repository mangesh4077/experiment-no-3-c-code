#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if ((a + b) % 2 == 0)
        printf("Sum is Even\n");
    else
        printf("Sum is Odd\n");

    return 0;
}
