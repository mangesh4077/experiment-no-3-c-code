#include <stdio.h>
int main() {
    int marks, income;
    printf("Enter marks: ");
    scanf("%d", &marks);
  printf("Enter family income: ");
    scanf("%d", &income);
    if (marks > 85 && income < 500000)
        printf("Eligible for scholarship\n");
    else
        printf("Not eligible for scholarship\n");

    return 0;
}
