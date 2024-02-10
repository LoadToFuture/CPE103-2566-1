#include<stdio.h>

int main(){
             //Set Header
     printf("Circle Area Calculate \n");
     //สูตร หาปริมาตรทรงกลม 1.3*3.14*5^3
     float volume , r=5;
                //Calculater
     volume = (4.0/3.0) * 3.14 * (r*r*r);
  
                //output
      printf("ircle Area is :%0.2f \n",volume);

    return 0 ;
}