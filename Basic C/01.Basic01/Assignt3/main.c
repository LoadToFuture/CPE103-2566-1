#include<stdio.h>

int main(){
             //Set Header
     printf("Trapezoid Area Calculate \n");
            //สูตรการหาพื้นที่สีเหลี่ยมคางหมู = 1/2 หรือ 0.5 * ความยาว + ความยาว * ความกว้าง
    float D1,D2,H,Trap_area;
        // input value to keybord 
    printf("input Width 1  : ");
    scanf("%f",&D1);
    printf("input Width 2 : ");
    scanf("%f",&D2);
    printf("Input Height : ");
    scanf("%f",&H);
             //cal
    Trap_area = 0.5 * (D1+D2) * H;
             //output
    printf("Trapezoid area  = : %0.2f \n",Trap_area);

    return 0 ;
}