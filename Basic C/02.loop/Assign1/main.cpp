#include <stdio.h>
int main()
{
  printf("FactirialProgrammig Week 9 Past :  1  \n");
  int n, sum = 1, j = 1;
  printf("Enter Number to factioral : ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    sum += i;
    printf("%d x %d \n", n, sum);
  }
  printf("=======================\n");
  printf("%d! = %d \n", n, sum);

  return 0;
}