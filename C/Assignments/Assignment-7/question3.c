#include<stdio.h>
int main() {
    int prev = -1, next = 1, curr, num, isFound = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (1)
    {
        curr = prev + next;
        prev = next;
        next = curr;
        if(curr >= num) {
            if(curr == num) {
                isFound = 1;
            }
            break;
        }
    }
    if(isFound) {
        printf("%d is present in the fibonnacci series", num);
    }
    else {
        printf("%d is not present in the fibonnacci series", num);
    }
    return 0;
}