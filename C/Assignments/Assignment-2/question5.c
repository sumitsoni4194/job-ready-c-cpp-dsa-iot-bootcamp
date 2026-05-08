#include <stdio.h>
int main()
{
    int x, sum = 0;
    printf("Enter a three digit number:");
    scanf("%d", &x);
    if ((x < -99 && x > -1000) || (x > 99 && x < 1000))
    {
        if(x < 0) {
            x = -x;
        }
        sum = sum + (x % 10);
        x = x / 10;
        sum = sum + (x % 10);
        x = x / 10;
        sum = sum + (x % 10);
        printf("Sum of three digit number is %d", sum);
    }
    else {
        printf("Invalid input. Please enter a three digit number");
    }
    return 0;
}