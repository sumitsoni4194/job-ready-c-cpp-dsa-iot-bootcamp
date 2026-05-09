#include<stdio.h>
int main() {
    int num, reversedNum = 0, isNegative = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    if(temp < 0) {
        temp = -temp;
        isNegative = 1;
    }
    while (temp)
    {
        reversedNum = (reversedNum * 10 + (temp % 10));
        temp = temp / 10;
    }
    if(isNegative) {
        reversedNum = -reversedNum;
    }
    printf("Reversed Number: %d", reversedNum);
    return 0;
}