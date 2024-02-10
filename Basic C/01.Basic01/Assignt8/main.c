#include<stdio.h>
#include<math.h>
int main(){
                //Set Header
     printf("Radius Circle  Calculate \n");
     float area,Ra_circle;
     float  a=3.02,b=2.12,c=1.83;
     float  s = 0.5*(a+b+c);
                //Calculater
     
     Ra_circle = ((a*b*c)/(pow(4((s*(s-a)*(s-b)*(s-c))))));
                //output
     printf("%f \n",Ra_circle);
     return 0 ;
}