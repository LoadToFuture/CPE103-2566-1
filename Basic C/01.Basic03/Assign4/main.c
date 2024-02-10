#include<stdio.h>
int main(){
       //โปรแกรมเรียงเลขน้อยไปมาก รับค่า 3 ตัวเลข
   int x,y,z ;
   printf("input number X :   ");
   scanf("%d",&x);
   printf("input number Y :   ");
   scanf("%d",&y);
   printf("input number Z :  ");
   scanf("%d",&z);
 
                     
                if(x <= y && x <= z){      //เช็คจากค่า X
                     if( y <= z){
                          printf("Number is hight value to low value is : %d %d %d \n",x,y,z)    ;  
                    } else{  
                          printf("Number is hight value to low value is : %d %d %d \n",x,z,y)    ;  
                    } 
//-----------------------------------------------------------------------------------------------------
                }
                else if (y <= x && y<=z){   //เช็คจากค่า y
                      if(x<=z){
                         printf("Number is hight value to low value is : %d %d %d \n",y,x,z)    ;  
                     }
                      else  {
                            printf("Number is hight value to low value is : %d %d %d \n",y,z,x)    ;  
                      }
                }
 //-------------------------------------------------------------------------------------------------
                else {                    //เช็คจากค่า z
                      if(x<= y){
                            printf("Number is hight value to low value is : %d %d %d \n",z,x,y)    ;  
                      }
                      else  {
                            printf("Number is hight value to low value is : %d %d %d \n",z,y,x)    ;  
                      }
                }
               
                

return 0 ;


}