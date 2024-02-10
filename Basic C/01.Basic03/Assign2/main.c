#include<stdio.h>
int main(){
       //โปรแกรมตรวจสอบตัวเลข 3 จำนวนว่ามีจำนวนไหนมีค่ามากที่สุด
   int x,y,z ;
   printf("input number X :   ");
   scanf("%d",&x);
   printf("input number Y :   ");
   scanf("%d",&y);
   printf("input number Z :  ");
   scanf("%d",&z);

                    //-----------เช็คเมื่อตัวเลข x มากที่สุด---------------    
                if(x <= y && x <= z){    
                              if(x==y)    //-----------เช็คเมื่อตัวเลข x และ y มากที่สุด---------------   
                                       printf("X AND Y number have the greates value %d \n",x)  ;
                              else if (x==z)   //-----------เช็คเมื่อตัวเลข x และ z มากที่สุด---------------   
                                       printf("X AND Z number have the greates value %d \n",x)  ;
                              else     
                                       printf("X The greatest value %d\n",x);
                }
                  //-----------เช็คเมื่อตัวเลข y มากที่สุด---------------    
                else if( y <= x && y <=z ){ 
                              if(y==x)  //-----------เช็คเมื่อตัวเลข y และ x มากที่สุด---------------   
                                        printf("Y AND X number have the greates value %d  \n",y);
                              else if(y==z)  //-----------เช็คเมื่อตัวเลข y และ z มากที่สุด---------------   
                                        printf("Y AND Z number have the greates value %d  \n",y);
                              else 
                                         printf("Y The greatest value %d\n",y);
                                         }
                //-----------เช็คเมื่อตัวเลข z มากที่สุด---------------    
                else if (z<=x && z<=y ){
                              if(z==x)  //-----------เช็คเมื่อตัวเลข z และ x มากที่สุด---------------   
                                       printf("Z AND X number have the greates value %d  \n",z);
                              else if(z==y)//-----------เช็คเมื่อตัวเลข z และ z มากที่สุด---------------   
                                       printf("Z AND Y number have the greates value %d  \n",z);
                              else 
                                   printf("Z The greatest value %d\n",z);
                               }
         

return 0 ;


}