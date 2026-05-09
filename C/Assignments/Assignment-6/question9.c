#include<stdio.h>

int main() {
    int a, b, LCM;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(a < 0)
    {
        a = -a;
    }

    if(b < 0)
    {
        b = -b;
    }

    if(a == 0 || b == 0) {
        printf("LCM is 0");
        return 0;
    }

    int max = a > b ? a : b;

    for(int i = max; i <= a * b; i += max) {
        if(i % a == 0 && i % b == 0) {
            LCM = i;
            break;
        }
    }

    printf("LCM of %d and %d is %d", a, b, LCM);

    return 0;
}