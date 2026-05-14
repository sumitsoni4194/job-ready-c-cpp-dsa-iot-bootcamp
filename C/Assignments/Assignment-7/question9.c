#include<stdio.h>
int main() {
    int num, count = 0, sum = 0, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num < 0) {
        printf("Not an armstrong number");
        return 0;
    }

    if(num == 0) {
        printf("0 is an armstrong number");
        return 0;
    }

    int temp = num;
    while (temp)
    {
        temp = temp / 10;
        count++;
    }
    temp = num;
    while (temp)
    {
        result = temp % 10;
        for(int i = 1; i < count; i++) {
            result = (result * (temp % 10));
        }
        sum = sum + result;
        temp = temp / 10;
    }
    if(sum == num) {
        printf("%d is an armstrong number", num);
    }
    else {
        printf("%d is not an armstrong number", num);
    }
    return 0;
}