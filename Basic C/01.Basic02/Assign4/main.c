#include<stdio.h>
int main(){
       int number;
       printf("input number : ");
       scanf("%d",&number);
/*
       if(number % 2 != 0)
              printf("Value is odd \n");
       else   
               printf("Value is even \n");
 */
        printf("%s",number % 2 != 0 ? "Value is odd\n" : "Value is even \n" );

       return 0;
}

