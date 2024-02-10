#include<stdio.h>
int main(){
        
   int menu ;
   printf("input number menu :   ");
   scanf("%d",&menu);

  switch (menu)
  {
    case  1 :
        //โปรแกรมตรวจสอบตัวเลข 3 จำนวนว่ามีจำนวนไหนมีค่ามากที่สุด
   int x,y,z ;
   printf("input number X :   ");
   scanf("%d",&x);
   printf("input number Y :   ");
   scanf("%d",&y);
   printf("input number Z :  ");
   scanf("%d",&z);

                    //-----------เช็คเมื่อตัวเลข x มากที่สุด---------------    
                if(x >= y && x >= z){    
                              if(x==y)    //-----------เช็คเมื่อตัวเลข x และ y มากที่สุด---------------   
                                       printf("X AND Y number have the greates value %d \n",x)  ;
                              else if (x==z)   //-----------เช็คเมื่อตัวเลข x และ z มากที่สุด---------------   
                                       printf("X AND Z number have the greates value %d \n",x)  ;
                              else     
                                       printf("X The greatest value %d\n",x);
                     
                }
                  //-----------เช็คเมื่อตัวเลข y มากที่สุด---------------    
                else if( y >= x && y >=z ){ 
                              if(y==x)  //-----------เช็คเมื่อตัวเลข y และ x มากที่สุด---------------   
                                        printf("Y AND X number have the greates value %d  \n",y);
                              else if(y==z)  //-----------เช็คเมื่อตัวเลข y และ z มากที่สุด---------------   
                                        printf("Y AND Z number have the greates value %d  \n",y);
                              else 
                                         printf("Y The greatest value %d\n",y);
                                         }
                //-----------เช็คเมื่อตัวเลข z มากที่สุด---------------    
                else if (z>=x && z>=y ){
                              if(z==x)  //-----------เช็คเมื่อตัวเลข z และ x มากที่สุด---------------   
                                       printf("Z AND X number have the greates value %d  \n",z);
                              else if(z==y)//-----------เช็คเมื่อตัวเลข z และ z มากที่สุด---------------   
                                       printf("Z AND Y number have the greates value %d  \n",z);
                              else 
                                   printf("Z The greatest value %d\n",z);
                               }

    break;
    case  2 :
                int x1,y1,z1 ;
   printf("input number X :   ");
   scanf("%d",&x1);
   printf("input number Y :   ");
   scanf("%d",&y1);
   printf("input number Z :  ");
   scanf("%d",&z1);

                    //-----------เช็คเมื่อตัวเลข x มากที่สุด---------------    
                if(x1 <= y1 && x1 <= z1){    
                              if(x1==y1)    //-----------เช็คเมื่อตัวเลข x และ y มากที่สุด---------------   
                                       printf("X AND Y number have the greates value %d \n",x1)  ;
                              else if (x1==z1)   //-----------เช็คเมื่อตัวเลข x และ z มากที่สุด---------------   
                                       printf("X AND Z number have the greates value %d \n",x1)  ;
                              else     
                                       printf("X The greatest value %d\n",x1);
                }
                  //-----------เช็คเมื่อตัวเลข y มากที่สุด---------------    
                else if( y1 <= x1 && y1 <=z1 ){ 
                              if(y1==x1)  //-----------เช็คเมื่อตัวเลข y และ x มากที่สุด---------------   
                                        printf("Y AND X number have the greates value %d  \n",y1);
                              else if(y1==z1)  //-----------เช็คเมื่อตัวเลข y และ z มากที่สุด---------------   
                                        printf("Y AND Z number have the greates value %d  \n",y1);
                              else 
                                         printf("Y The greatest value %d\n",y1);
                                         }
                //-----------เช็คเมื่อตัวเลข z มากที่สุด---------------    
                else if (z1<=x1 && z1<=y1 ){
                              if(z1==x1)  //-----------เช็คเมื่อตัวเลข z และ x มากที่สุด---------------   
                                       printf("Z AND X number have the greates value %d  \n",z1);
                              else if(z1==y1)//-----------เช็คเมื่อตัวเลข z และ z มากที่สุด---------------   
                                       printf("Z AND Y number have the greates value %d  \n",z1);
                              else 
                                   printf("Z The greatest value %d\n",z1);
                               }
  
    break;
    case 3 :
               //โปรแกรมเรียงเลขมากไปน้อย รับค่า 3 ตัวเลข
   int x3,y3,z3 ;
   printf("input number X :   ");
   scanf("%d",&x3);
   printf("input number Y :   ");
   scanf("%d",&y3);
   printf("input number Z :  ");
   scanf("%d",&z3);
// เพราะต้องใช้ 3 เงื่อนไขใน IF ไม้สามารถที่ Printf ค่าออกมาได้ตามที่ต้องการ 
                     
                if(x3 >= y3 && x3 >= z3){      //เช็คจากค่า X
                     if( y3 >= z3){
                          printf("Number is hight value to low value is : %d %d %d \n",x3,y3,z3)    ;  
                    } else{  
                          printf("Number is hight value to low value is : %d %d %d \n",x3,z3,y3)    ;  
                    } 
//-----------------------------------------------------------------------------------------------------
                }
                else if (y3 >= x3 && y3>=z3){   //เช็คจากค่า y
                      if(x3>=z3){
                         printf("Number is hight value to low value is : %d %d %d \n",y3,x3,z3)    ;  
                     }
                      else  {
                            printf("Number is hight value to low value is : %d %d %d \n",y3,z3,x3)    ;  
                      }
                }
 //-------------------------------------------------------------------------------------------------
                else {                    //เช็คจากค่า z
                      if(x3>= y3){
                            printf("Number is hight value to low value is : %d %d %d \n",z3,x3,y3)    ;  
                      }
                      else  {
                            printf("Number is hight value to low value is : %d %d %d \n",z3,y3,x3)    ;  
                      }
                }
               
                
    break;

    case 4 :
            int x4,y4,z4 ;
   printf("input number X :   ");
   scanf("%d",&x4);
   printf("input number Y :   ");
   scanf("%d",&y4);
   printf("input number Z :  ");
   scanf("%d",&z4);
 
                     
                if(x4 <= y4 && x4 <= z4){      //เช็คจากค่า X
                     if( y4 <= z4){
                          printf("Number is hight value to low value is : %d %d %d \n",x4,y4,z4)    ;  
                    } else{  
                          printf("Number is hight value to low value is : %d %d %d \n",x4,z4,y4)    ;  
                    } 
//-----------------------------------------------------------------------------------------------------
                }
                else if (y4<= x4 && y4<=z4){   //เช็คจากค่า y
                      if(x4<=z4){
                         printf("Number is hight value to low value is : %d %d %d \n",y4,x4,z4)    ;  
                     }
                      else  {
                            printf("Number is hight value to low value is : %d %d %d \n",y4,z4,x4)    ;  
                      }
                }
 //-------------------------------------------------------------------------------------------------
                else {                    //เช็คจากค่า z
                      if(x4<= y4){
                            printf("Number is hight value to low value is : %d %d %d \n",z4,x4,y4)    ;  
                      }
                      else  {
                            printf("Number is hight value to low value is : %d %d %d \n",z4,y4,x4)    ;  
                      }
                }
    break;
  case 5:
        // 1.< 120,000           B 5%
      // 2.> 120,001 - 240,000 B 10%
      // 3.> 240,001 - 360,000 B 20%
      // 4.> 360,001 	       B 30%
      //โบนัส = ฐานเงินเดือน x ค่าที่บริษัทประเมินผลให้ (เดือน)
      int salary,last_Salary ;
      // ตั้งค่า locale เพื่อให้สามารถใช้ลูกน้ำที่ถูกต้องได้
       printf("Enter Salary  : " )  ;      
       scanf("%d",&salary); 

      //  if(salary >= 360001)     
      //        last_Salary = salary + (salary * 0.3);
      //     //  printf("salary %0.2f",last_Salary);
      //  else if (salary >= 240001)
      //        last_Salary = salary + (salary * 0.2);
      //  else if (salary >= 120001)
      //        last_Salary = salary + (salary * 0.1);
      //  else //if (salary <= 120000)
      //        last_Salary = salary + (salary * 0.05);
      last_Salary = (salary >= 360001) ? salary + (salary * 0.3) :
                    (salary >= 240001) ? salary + (salary * 0.2) :
                    (salary >= 120001) ? salary + (salary * 0.1) :
                                         salary + (salary * 0.05) ;

       
      printf("salary %'d \n",last_Salary);

          break;

  default:


    break;
  }



return 0 ;


}