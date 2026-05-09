#include <stdio.h>
int main()
{
    int N, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    if (N <= 0)
    {
        printf("Number must be greater than 0");
        return 0;
    }
    for (int i = 1; i <= N; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers is %d", N, sum);
    return 0;
}