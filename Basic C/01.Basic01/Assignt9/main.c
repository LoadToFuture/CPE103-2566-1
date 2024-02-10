#include<stdio.h>
int main(){
                //Set Header
     printf("White Area Calculate \n");
     float valume1,valume2,White_area;
     float  d=2,a=4,l=10;
                //Calculater
     valume1 = a*a*l;
     valume2 = 3.14*((d/2)*(d/2))*l ;
     White_area = valume1 + valume2;
                //Output
     printf("valume1 : %0.2f \n",valume1);
     printf("valume2  : %0.2f \n",valume2);
     printf("White area :  %0.2f \n",White_area);
     return 0 ;
}