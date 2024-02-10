#include<stdio.h>
int main(){

    int n  ;
    char text[100]  ;
    printf("Week 9 past 3: \n");
      
   
    printf("Get the message you want to display: ");
    scanf("%s",text);
    printf("Number of display times  : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
      printf("%d : %s \n",i,text);
    }
    
   
   /* การใช้ do while 
    int i = 1 ; 
    printf("Get the message you want to display: ");
    scanf("%s",text);
    printf("Number of display times  : ");
    scanf("%d",&n);
   do
   {
     printf("%d : %s \n",i,text);
     i++; 
   } while (i<=n);
   */
  /*  การใช้ While
int i = 1 ; 
    printf("Get the message you want to display: ");
    scanf("%s",text);
    printf("Number of display times  : ");
    scanf("%d",&n);
while (i<=n)
{
          printf("%d : %s \n",i,text);
          i++; 
}
*/



    
return 0 ;
}