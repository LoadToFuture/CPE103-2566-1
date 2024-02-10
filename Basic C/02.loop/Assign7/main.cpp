#include <stdio.h>

int main() {
   int m ,n;
    printf("Week 9 past 7: \n");
  printf("Enter number N : ");
  scanf("%d", &n);
  printf("Enter number M : ");
  scanf("%d", &m);

int sum=0,count=0, i;

for (i=n; i <=m; i++)
{
   
   sum += i;  //sum จะเก็บผลรวมของ N ถึง M ที่ใส่เข้าไป
   count++; // ใช้ count เพื่อนำจำนวนตัวเลข N ถึงM
   printf(" %d",i);
   
}

 printf(" Sum = : %d \n",sum);
 float average_MtoN = sum / count;
 printf("Average M to N = : %0.2f \n",average_MtoN);


    return 0;
}
