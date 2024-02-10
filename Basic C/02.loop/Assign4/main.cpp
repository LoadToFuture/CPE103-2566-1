#include <stdio.h>
int main()
{

  int n, m;
  printf("Week 9 past 4: \n");
  printf("Enter number N : ");
  scanf("%d", &n);
  printf("Enter number M : ");
  scanf("%d", &m);
  if(n>=m){
    printf("Do not accept a number N less than M.\n");
  }
  for (int i = n; i <= m; i++)
  {
    printf("%d\n", i);
  }
  

  return 0;
}