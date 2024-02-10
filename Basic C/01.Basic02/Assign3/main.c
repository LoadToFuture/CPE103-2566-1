#include<stdio.h>
int main(){
       int number;
       printf("input number : ");
       scanf("%d",&number);
/*
       if(number>=0)
              printf("Value is Positive \n");
       else   
               printf("Value is Negetive \n");
 */
       printf("%s",number>=0 ? "Value is Positive\n" : "Value is Negetive \n" );

       return 0;
}

