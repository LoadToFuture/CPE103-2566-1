#include <stdio.h>
int minIntArray(int data[], int n)
{
    int minArray = data[0];
    for (int i = 0; i < n; i++)
    {
        if (data[i] < minArray)
            minArray = data[i];
    }
    return minArray;
}
int add(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}
float mutiFun(int a[], int n)
{
    int sum = 1;
    for (int i = 0; i < n; i++)
        sum *= a[i];
    return sum;
}
void swapName(char **name)
{
    char *temp = name[0];
    name[0] = name[1];
    name[1] = temp;
}
int main()
{
    int sizeArray;
    char *name[] = {"Treepien", "Saranphat"};
    for (int i = 0; i < 2; i++)
        printf("Befor swap name: %s \n", name[i]);
    swapName(name);
    for (int i = 0; i < 2; i++)
        printf("Swap name %s \n", name[i]);
    printf("Enter size of array : ");
    scanf("%d", &sizeArray);
    int SvArray[sizeArray];
    int *p;
    p = &SvArray[0];
    for (int i = 0; i < sizeArray; i++)
    {
        printf("Enter number in array : ");
        scanf("%d", &p[i]); //! 0
    }
    // pointer , point to fucntion int
    int (*j)(int[], int) = add;
    // pointer , point to fucntion float
    float (*pm)(int[], int) = mutiFun;
    // pointer , point to char int fu
    int sentMinArray = minIntArray(SvArray, sizeArray);
    p = &SvArray[0];
    for (int i = 0; i < sizeArray; i++)
    {
        printf("Number in array is [%d]:%d\n", i + 1, *p++); // show value in array
    }
    printf("=========================================\n");
    p = &SvArray[0];
    printf("Sum is value in Arra :%d\n", j(p++, sizeArray));
    printf("Mutiply is value in Arra :%0.2f \n", pm(SvArray, sizeArray));
    printf("Value lowest in array is : %d\n", sentMinArray);

    return 0;
}
