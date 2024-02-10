#include<stdio.h>
#include<math.h>
int main(){
                //Set Header
     printf("Volume Triangle Area Calculate \n");
     float area,volume_tri ;
     float  a=1.1,b=2.0,c=3.3;
     float  s = 0.5*(a+b+c);
                //Calculater
     volume_tri = sqrt(s*(s-a)*(s-b)*(s-c));
                //output
     printf("%f \n",volume_tri);
     return 0 ;
}