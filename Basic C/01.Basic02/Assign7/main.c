#include<stdio.h>
int main(){
        char name[50];
        float height ,widly;   
        printf("****Shopping TABLE **** \n");
        printf("Input Name \n");
        scanf("%s",name);
        printf("Input height and widly\n");
        scanf("%f %f",&height,&widly);

        float cal_Table = height * widly;
        printf("Customer name is : %s \n",name);
       /*if(cal_Table > 750)
            printf("1,500 Baht Charge additional price \n") ;
        else 
            printf("1,500 Baht Not Charge additional price \n") ;
*/ 
       printf("Table is : %0.2f inc \n %s",cal_Table,cal_Table > 750 ?"1,500 Baht Charge additional price \n" :"1,500 Baht Not Charge additional price \n");

       return 0;
}

