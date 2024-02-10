#include<stdio.h>
#include<math.h>
int main(){
       int number;
       printf("input number : ");
       scanf("%d",&number);
       if(number == 1) 
             printf("You member is have discount 10 percent \n");
       else if (number == 2)
             printf("You not member \n");
       else 
            printf("invalid member\n");
       return 0;
}

