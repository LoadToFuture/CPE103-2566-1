#include<stdio.h>
 
int main(){
        int year ;
            printf("Enter year : ");
           scanf("%d",&year);

             if((year % 100) != 0)   
                    //ไม่ลงตัว 
                       if((year % 4) == 0)
                               printf("LEAP YEAR\n");
                          else 
                              printf("NOT LEAP YEAR\n");
             else if ((year % 400) == 0)   
                       printf("LEAP YEAR\n");

             else  
                    printf("Not Leap Year\n");



return 0 ;
}