#include <stdio.h>
int main()
{
  int number=1;
  while (number!=0)
  {
  printf("Week 9 past 5 Mutiplitable : \n");
  printf("Enter number Number : ");
  scanf("%d", &number);
  for (int i = 1; i <= 12; i++)
  {
    printf("%d x %d = %d\n",number,i,number * i);
  }
  }
  return 0;
}