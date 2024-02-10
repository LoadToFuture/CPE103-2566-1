#include <stdio.h>

int summation(int m, int n)
{
    int sum = 0;
    for (int i = m; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int product(int m, int n)
{
    int sum = 1;
    for (int i = m; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}
float Poly2(float a2, float a1, float a0, float x)
{
   
    return (a2 * (x * x)) + (a1 * x) + a0;
}
float maxFloat(float data[], int n)
{
    float maxValue = data[0];
    for (int i = 1; i < n; i++)
    {
        if (data[i] > maxValue)
            maxValue = data[i];
    }
    return maxValue;
}
int main()
{
    int menu = 1;
    do
    {
        printf("**Menu** \n");
        printf("Enter 1 : Summation \n");
        printf("Enter 2 : Products \n");
        printf("Enter 3 : Poly2 \n");
        printf("Enter 4 : MaxFloat \n");
        printf("Enter 0 : Exit! \n");
        printf("Select Menu : ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
        {
            int m, n;
            printf("**** Function 1 **** \n");
            printf("Enter Value M : ");
            scanf("%d", &m);
            printf("Enter Value N : ");
            scanf("%d", &n);
            // use function summation
            printf("%s %d\n", m > n ? "Value M don't More than N" : "Result value M to N :", summation(m, n));
        }
        break;
        case 2:
        {
            int m, n;
            printf("**** Function 2 **** \n");
            printf("Enter Value M : ");
            scanf("%d", &m);
            printf("Enter Value N : ");
            scanf("%d", &n);
            // use function product
            printf("Multiply M to N =: %d \n", product(m, n));
        }
        break;
        case 3:
            float a2, a1, a0, x;
            printf("**** Function 3 **** \n");
            printf("Enter Value a2 : ");
            scanf("%f", &a2);
            printf("Enter Value a1 : ");
            scanf("%f", &a1);
            printf("Enter Value a0 : ");
            scanf("%f", &a0);
            printf("Enter Value x : ");
            scanf("%f", &x);

            printf("%0.2f\n", Poly2(a2,a1,a0,x));

                break;
        case 4:
        {
            printf("**** Function 4 **** \n");
            float data[] = {2.5, 3.5, 5.5, 1.5, 7.5};
            int size = sizeof(data) / sizeof(data[0]); // คำนวณขนาดของอาร์เรย์
            for (int i = 0; i <= sizeof(data[0]); i++)
            {
                printf("%0.2f ||", data[i]);
            }
            printf("\n");
            float max = maxFloat(data, size);
            printf("Max Value In Array Data[] = : %0.2f\n", max);
        }
        break;
        default:

            break;
        }
    } while (menu != 0);

    return 0;
}
