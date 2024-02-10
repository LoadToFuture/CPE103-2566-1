#include <stdio.h>

int main()
{
    int money_Save; // จำนวณเงินที่จะออม
    int day = 0;
    printf("***Week 9 past 10 ***\n");
    printf("**Enter the desired savings  : ");
    scanf("%d",&money_Save);
    
    float daily_Save = 10.0; //จำนวณเงินที่ใช้ออมแต่ละวันคือ 10 บาท 
    
      while (money_Save > 0)
      {                               //              
          money_Save -= daily_Save ; //  100  - 10 ไปเรื่อยๆ จนหมด แล้ว day++ จำนับว่ากี่รอบ คือกี่วัน
          day++;
      }

   printf("Day save : %d day\nDay is : %0.1f Baht \n",day ,daily_Save );
      




   return 0;
}
