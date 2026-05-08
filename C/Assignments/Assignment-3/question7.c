#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter a, b and c:");
    scanf("%d%d%d", &a, &b, &c);
    if(a == 0) {
        printf("Not a quadratic equation");
        return 0;
    }
    int D = ((b * b) - 4 * a * c);
    if(D > 0) {
        printf("Real & Distinct");
    }
    else if(D == 0) {
        printf("Real & Equal");
    }
    else {
        printf("Imaginary");
    }
    return 0;
}