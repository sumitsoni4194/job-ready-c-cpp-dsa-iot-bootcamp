#include<stdio.h>

int main() {
    int x, count = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x == 0) {
        printf("%d has 1 digit", x);
        return 0;
    }
    int temp = x;
    if(temp < 0) {
        temp = -temp;
    }
    while (temp)
    {
        temp = temp / 10;
        count++;
    }
    printf("%d has %d digits", x, count);
    return 0;
}