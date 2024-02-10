#include<stdio.h>
int main(){
       //รับชื่อลูกค้า
       //รับความยาวโต๊ะ Width 
       //รับความกว้างโต๊ะ Length
       // ชนิดของไม้  1 == ไม๋ธรรมดา || 2 == ไม้ฮอกกานี + 200 || 3 == ไม้โอ๊ก + 125 
        //รับชื่อลูกค้า 
        char name[50]  ;
        int type; // ชนิดของไม้ 1 == ไม้ฮอกกานี + 200 || 2 == ไม้โอ๊ก + 125 || 3 == ไม๋ธรรมดา 
        float widht,length;
            printf("Enter name you : ");
            scanf("%s",&name[50]);
            printf("Enter Width and Length Table to build : ");
            scanf("%f %f",&widht ,&length);
            printf("Type Wood Menu :  \n")  ;
                printf("1. Normal wood  \n");
                printf("2. Oak Wood is plus 125 baht \n"); 
                printf("3. Mahogany wood is plus 200 baht\n");
                printf("Please Select your Choice[0-3]= : ");      
                scanf("%d",&type);   
      float table_Area = widht * length; //ขนาด
      float wood_Price = 1500.00 ; //ราคาไม้ปกติ
      switch (type)
      {
            case  1:
                        printf("This is all price %0.2f",table_Area > 750 ? wood_Price += 500.00 : wood_Price);
                        printf(" Baht \n");
                  break;
            case  2:   
                        printf("This is all price %0.2f", table_Area > 750 ? wood_Price += 625.00 : wood_Price+= 125.00);
                        printf(" Baht \n");
                  break;
            case  3:   
                        printf("This is all price %0.2f", table_Area > 700 ? wood_Price += 700.00 : wood_Price+= 200.00);
                        printf(" Baht \n");
                  
                  break;
      default:
            break;
      }
return 0 ;


}
 /*
 case1
                  if(table_Area > 750)
                         printf("This is all price %0.2f %s\n",wood_Price += 500.00,"Baht" ) ; // 1500+500
                       
                  else 
                         printf("This is all price %0.2f %s\n",wood_Price,"Baht") ; //1500
*/
  /*
  case2
                      if(table_Area > 750)
                         printf("This is all price %0.2f %s \n",wood_Price += 625.00,"Baht" ) ; // 1500+625  = 2125
                  else 
                         printf("This is all price %0.2f %s \n",wood_Price += 125.00,"Baht" ) ; // 1500+125 = 1625
*/
  //  case3
  //    if(table_Area > 750)

                  //        printf("This is all price %0.2f %s \n",wood_Price += 700.00,"Baht" ) ; // 1500+700 = 2200
                  // else 
                  //       printf("This is all price %0.2f %s \n",wood_Price += 200.00,"Baht" ) ; // 1500+200 = 1700
