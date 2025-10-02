#include <stdio.h>
int main() {
    int t;
    printf("Enter temperature: ");
    scanf("%d", &t);

    if (t < 0)
        printf("Freezing\n");
    else if (t < 20)
        printf("Cold\n");
    else if (t < 35)
        printf("Warm\n");
    else
        printf("Hot\n");

    return 0;
}
