#include <stdio.h>
int main() {
    int cp, sp; // cp=cost price and sp=selling price
    printf("Enter cost price and selling price: ");
    scanf("%d %d", &cp, &sp);

    if (sp > cp)
        printf("Profit = %d\n", sp - cp);
    else if (cp > sp)
        printf("Loss = %d\n", cp - sp);
    else
        printf("No Profit No Loss\n");

    return 0;
}
