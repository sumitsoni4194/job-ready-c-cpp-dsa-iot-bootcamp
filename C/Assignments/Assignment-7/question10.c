#include <stdio.h>
int main()
{
    int count, sum, result;

    for (int i = 0; i <= 1000; i++)
    {
        count = 0;
        sum = 0;
        if (i == 0)
        {
            printf("0 ");
            continue;
        }
        int temp = i;
        while (temp)
        {
            temp = temp / 10;
            count++;
        }
        temp = i;
        while (temp)
        {
            result = temp % 10;
            for (int j = 1; j < count; j++)
            {
                result = (result * (temp % 10));
            }
            temp = temp / 10;
            sum = sum + result;
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}