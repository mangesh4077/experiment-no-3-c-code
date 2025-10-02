#include <stdio.h>
int main()
{
    float threshold_temp = 80, critical_temp =100, body_temp;
    printf("Enter your body_temp:" , body_temp);
    scanf("%f", &body_temp);
    if (body_temp<=threshold_temp)
    {
        printf("Patient state: Normal");
    }
    else if ( body_temp>threshold_temp , && body_temp<critical_temp )
    {
        printf("Patient state: Warning");
    }
    else ( body_temp>=critical_temp )
    {
         printf("Patient state: critical");
    }
    return 0;
}
