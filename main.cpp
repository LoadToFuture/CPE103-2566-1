#include <stdio.h>
#include "Function.h"

int main() { 
    int choice, m, n, result, len;
    float ans;
    float data[] = {2.5, 5.4, 8.1, 6.4, 7.3};
    float a2, a1, a0, x;
    //    data      [0]  [1]  [2]  [3]  [4]

    do{
        printf("*** Meun ***\n");
        printf("1. Summation\n");
        printf("2. Product\n");
        printf("3. Ploy2\n");
        printf("4.  MaxFloat\n");
        printf("0. Exit\n");
        printf("Srlect menu : ");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1 : 
                printf("Input m : ");
                scanf("%d", &m);
                printf("Input n: ");
                scanf("%d", &n);
                result = summation(m, n);
                printf("Summation %d : %d is %d\n", m, n, result);
            break;
         case 2 :
                printf("Input m : ");
                scanf("%d", &m);
                printf("Input n : ");
                scanf("%d", &n);
                result = Product(m, n);
                printf("Product %d : %d is %d\n", m, n, result);
            break;
         case 3 :
                printf("Input a2 : ");
                scanf("%f", &a2);
                printf("Input a1 : ");
                scanf("%f", &a1);
                printf("Input a0 : ");
                scanf("%f", &a0);
                printf("Input x : ");
                scanf("%f", &x);
                printf("Poly2 is %0.2f/n", Poly2(a2, a1, a0, x));
            break;
         case 4 :
            len = sizeof(data) / sizeof(float);
            ans = maxFloat(data, 5);
            printf("Data : [");
            for (int i=0; i<len; i++){
                printf("%0.2f%s", data[i], i<len-1 ? ", " : "");
                }
                printf("]\n");
                printf("MaxFloat is %0.2f\n", ans);
            break;
         case 0 :
            printf("Exit\n");
            break;
        default:
            printf("other\n");
            break;
        }
    }while(choice !=0);
    return 0;
}
