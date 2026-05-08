#include <stdio.h>
int main()
{
    int num, digit, isNegative = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("Enter a single digit:");
    scanf("%d", &digit);
    if (digit >= 0 && digit <= 9)
    {
        printf("Number before appending digit: %d", num);
        if (num < 0)
        {
            num = -num;
            isNegative = 1;
        }
        num = ((num * 10) + digit);
        if (isNegative)
        {
            num = -num;
        }
        printf("\nNumber after appending digit: %d", num);
    }
    else {
        printf("Invalid digit");
    }
    return 0;
}