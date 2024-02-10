#include <stdio.h>
#include <string.h>
// global argument
char setGrade(int score)
{
      return(score >= 0 && score < 50) ? 'F'
         : (score >= 50 && score < 60) ? 'D'
         : (score >= 60 && score < 70) ? 'C'
         : (score >= 70 && score < 80) ? 'B'
         : (score >= 80 && score < 100) ? 'A'
         : 'E';
}
typedef struct 
{
  char std_Subject[50];
  int std_Score;
  char std_Grade;
}subject;
typedef struct
{
  int std_Code;
  char std_Name[11];
  char std_Major[50];
  subject sub[5];
}Student ;
int main()
{
  // local  argument
  //  licence student 1.std_Code 2.std_Name 3.std_Year 4.std_Major 5.std_Subject 6.std_Score 7.std_Grade
  // array set memory used
  int n = 1;
  Student str_Std[n];
  for (int i = 0; i < n; i++)
  {
    printf("Student number [%d]\n", i + 1);
    printf("Input student code : ");
    scanf("%d", &str_Std[i].std_Code); // str_Std[0].std_Code = 66044768;
    printf("Input student name : ");
    scanf("%s", str_Std[i].std_Name); // strcpy(str_Std[0].std_Name, "Saranphat");
    printf("Input student major : ");
    scanf("%s", str_Std[i].std_Major); // strcpy(str_Std[0].std_Major, "ComEn");
    for (int j = 0; j < 5; j++)
    {
    printf("Input student subject : %d : ",j+1);
    scanf("%s",str_Std[i].sub[j].std_Subject);
    printf("Input student score : ");
    scanf("%d", &str_Std[i].sub[j].std_Score);
    str_Std[i].sub[j].std_Grade = setGrade(str_Std[i].sub[j].std_Score);
    }
  }

  for (int i = 0; i < n; i++)
  {
    printf("Student number [%d]\n", i + 1);
    printf("------------Display------------\n");
    printf("Student code is : %d\n", str_Std[i].std_Code);
    printf("Student name is : %s\n", str_Std[i].std_Name);
    printf("Student major is : %s\n", str_Std[i].std_Major);
    for (int j = 0; j < 5; j++)
    {
    printf("-----------------------------------------\n");
    printf("Student subject is : %s\n", str_Std[i].sub[j].std_Subject);
    printf("Student score is : %d\n", str_Std[i].sub[j].std_Score);
    printf("Student grade is : %c\n", str_Std[i].sub[j].std_Grade);
    }
  }

  return 0;
}
