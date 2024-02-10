#include <stdio.h>

int main()
{
    float capital, rate;
    int year;
    
    printf("Enter Salary : ");
    scanf("%f",&capital);
    
    printf("Amout (rate): ");
    scanf("%f",&rate);
    
    printf("Amout (year): ");
    scanf("%d",&year);
    for (int i = 1; i <= year; i++)
    {
         float interest = capital * (rate / 100);
         capital += interest;
          printf("Year is : %d || Interest is : %0.2f || Captial is : %0.2f %s||\n"
          ,i,interest,capital,"Baht") ;
    }
   printf("Rate interest add %0.1f for year \n",rate);
   return 0;
}
