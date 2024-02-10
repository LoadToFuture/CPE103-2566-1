#include<stdio.h>

int main(){
                //Set Header
     printf("Volume Ring Area Calculate \n");
     //สูตร หาปริมาตรวงแหวน 0.25 * (3.14 * 3.14) *
     float volume_ring,a=4,b=10,ring;
     float pi =  3.14 * 3.14 ;
                //Calculater
     volume_ring = 0.25 * pi * (a+b)*(b-a)*(b-a);
                //output
     printf("%f \n",volume_ring);
     return 0 ;
}