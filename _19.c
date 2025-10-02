#include <stdio.h>
int main() {
    int held, attended;
    float percent;
    printf("Enter classes held: ");
    scanf("%d", &held);
    printf("Enter classes attended : ");
    scanf("%d", &attended);
    percent = (attended * 100.0) / held;

    if (percent >= 75)
        printf("Allowed to sit in exam\n");
    else
        printf("Not allowed to sit in exam\n");

    return 0;
}
