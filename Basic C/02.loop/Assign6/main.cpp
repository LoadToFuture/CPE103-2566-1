#include <stdio.h>

int main() {
    int sum;
    printf("Enter the sum you want for the arithmetic sequence: ");
    scanf("%d", &sum);
    
    int n = 1;
    int current_sum = 0;
    
    while (current_sum < sum) {
        current_sum += n;
        n++;
    }
    
    if (current_sum == sum) {
        printf("The arithmetic sequence with a sum of %d requires %d terms.\n", sum, n - 1);
    } else {
        printf("No arithmetic sequence found with a sum of %d.\n", sum);
    }
    
    return 0;
}
