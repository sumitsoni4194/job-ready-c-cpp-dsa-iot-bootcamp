#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    if((x < -99 && x > -1000) || (x > 99 && x < 1000)) {
        printf("%d is a three digit number", x);
    }
    else {
        printf("%d is not a three digit number", x);
    }
    return 0;
}