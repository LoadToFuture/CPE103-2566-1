#include<stdio.h>
#include<math.h>
int main(){
                //Set Header
     printf("Radius Circle  Calculate \n");
     float area,Ra_circle;
     float  a=5.02,b=4.12,c=2.83;
     float  s = 0.5*(a+b+c);
                //Calculater
     
     Ra_circle = sqrt((s*(s-a)*(s-b)*(s-c))/s);
                //output
     printf("%f \n",Ra_circle);
     return 0 ;
}