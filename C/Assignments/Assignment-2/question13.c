#include <stdio.h>

int main()
{
    int num, sign = 1, rotated;

    printf("Enter a three digit number: ");
    scanf("%d", &num);
    if ((num < -99 && num > -1000) || (num > 99 && num < 1000))
    {
        if (num < 0)
        {
            sign = -1;
            num = -num;
        }
        rotated = (((num % 10) * 100) + num / 10);
        rotated = rotated * sign;
        printf("%d", rotated);
    }
    else {
        printf("Invalid input");
    }
    return 0;
}
