#include <stdio.h>

int main()
{
    float a,b,result ;
    char operation ;
   printf ("Enter First numbers:");
   scanf("%f", &a);
   printf ("Enter second numbers:");
   scanf("%f", &b);
   printf("Enter operation(+,-,*,/) :");
   scanf(" %c", &operation);
    if(operation == '+')
      {
     result= a+b;
     printf("Result is:  %.2f\n" ,result);
      }
    else if(operation == '-')
      {
     result= a-b;
     printf("Result is: %.2f\n" ,result);
      }
    else if(operation == '*')
      {
     result= a*b;
     printf("Result is:  %.2f\n" ,result);
      }
    else if(operation == '/')
      {
           if (b != 0)
          {
           result= a/b;
           printf("Result is:  %.2f\n" ,result);  
          }
          else 
          {
            printf("ERROR Number is not divided by 0");
          }
      } 
       else 
        {
            printf("Invalid Operation \n");
        }  
         return 0 ;
      }
