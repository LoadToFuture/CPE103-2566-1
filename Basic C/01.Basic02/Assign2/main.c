#include<stdio.h>
int main(){
       int menu;
       printf("input number calculator menu## \n");
         printf("1. Triangle Area\n");
         printf("2. Ractangle Area\n");
        scanf("%d",&menu);

      switch (menu)
      {
      case 1 :
               {
              float base,height;
              printf("*****Triangle Calculator *****\n");
              printf("input base and height : ");
              scanf("%f %f",&base,&height);
              float tri_Area = 0.5 * base * height;
              printf("Triangle area is :%0.2f \n",tri_Area);
               }
                break;
      case 2 :
               {
                float rac_Long,rac_Widely;
              printf("*****Ractangle Calculator *****\n");
              printf("input long and widely :");
              scanf("%f %f",&rac_Long,&rac_Widely);    
              float rac_Area = rac_Long * rac_Widely;
              printf("Ractangle Area = : %0.2f \n",rac_Area);
               }
       break;
      default:
              printf("Invalid menu choice. Please enter 1 or 2.\n");
       break;
      }

/*
       if(menu==1){
              float base,height;
              printf("*****Triangle Calculator *****\n");
              printf("input base and height : ");
              scanf("%f %f",&base,&height);
              float tri_Area = 0.5 * base * height;
              printf("Triangle area is :%0.2f",tri_Area);
       }else if (menu==2){
              float rac_Long,rac_Widely;
              printf("*****Ractangle Calculator *****\n");
              printf("input long and widely :");
              scanf("%f %f",&rac_Long,&rac_Widely);    
              float rac_Area = rac_Long * rac_Widely;
              printf("Ractangle Area = : %0.2f",rac_Area);
       }else
             printf("Invalid menu choice. Please enter 1 or 2.\n");
*/

       return 0;
}

