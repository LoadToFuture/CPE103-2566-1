#include<stdio.h>

int main(){
             //Set Header
     printf("Rectangle Area Calculate \n");
   
    float widht,height,Rec_area;
        // input value to keybord 
    printf("input Width : ");
    scanf("%f",&widht);
    printf("Input Height : ");
    scanf("%f",&height);
             //cal
    Rec_area = (widht * height) - 3.14 ;
             //output
    printf("Rec Area = : %0.2f \n",Rec_area);
return 0 ;


}