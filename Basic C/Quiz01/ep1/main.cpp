#include<stdio.h>
 
int main(){
        int number ;
             printf("Enter number : ");
             scanf("%d",&number);

        //  วิธีที่ 1
        //if(number<0)
        //     number *= -1 ;
        // printf("%d \n",number);

            printf("%d \n",number<0 ? -number : number);


     



return 0 ;
}