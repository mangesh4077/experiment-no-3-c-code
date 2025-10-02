#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 10 == 0)
        printf("Multiplyer of 10\n");
    else
        printf(" Not a Multiplyer of 10\n");

    return 0;
}
