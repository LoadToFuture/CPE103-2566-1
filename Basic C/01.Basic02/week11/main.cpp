#include <stdio.h>
#include "Function.h" //header file
int main()
{
    int menu = 1;
    while (menu!=0)
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
    }

    return 0;
}
