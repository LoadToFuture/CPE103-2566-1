#include<stdio.h>
int main(){
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

return 0 ;


}