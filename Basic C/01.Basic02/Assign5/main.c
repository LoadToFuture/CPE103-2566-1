#include<stdio.h>
#include<math.h>
int main(){
       int number;
       printf("input number : ");
       scanf("%d",&number);
       if(number % 2 == 0) 
             //EVEN NUMBER
             number *= number  ;
       else   
             //ODD NUMBER
             number = pow(number,3)  ;
       printf("number is %d \n",number);
       return 0;
}

