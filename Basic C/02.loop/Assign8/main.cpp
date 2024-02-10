#include <stdio.h>

int main()
{
   int m, n;
   int count1 = 0, count2 = 0;
   printf("***Week 9 past 8 ***\n");
   printf("Enter number N : ");
   scanf("%d", &n);
   printf("Enter number M : ");
   scanf("%d", &m);
   printf("Even: ");
   for (int i = n; i <= m; i++)
   {
      if (i % 3 == 0)
      {
         printf(" %d", i);
         count1++;
      }
   }
   printf("\n");
   printf("OOD: ");
   for (int j = n; j <= m; j++)
   {
      if (j % 3 != 0)
      {
         printf(" %d", j);
         count2++;
      }
   }
   printf("\n");
   printf("Number is Even  3: %d\n", count1);
   printf("Number is Ood  3 : %d\n", count2);
   return 0;
}
