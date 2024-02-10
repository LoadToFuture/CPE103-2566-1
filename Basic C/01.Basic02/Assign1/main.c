#include<stdio.h>
int main(){
   int number,x ;
   printf("input number :  ");
   scanf("%d",&number);
   /*
    if(number < 0){
             x = number * -1;
             printf("number is = %d",x);
    }
    else
    printf("number is = %d",x);
*/
       printf("number is = %d",(number < 0) ? -number : number );

    
return 0 ;


}