#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
        printf("Grade A\n");
    else if (marks >= 75)
        printf("Grade B\n");
    else if (marks >= 65)
        printf("Grade C\n");
    else if (marks >=40)
        printf("Grade F\n");
  else 
      printf("Faliur Grade");
 return 0;
}
