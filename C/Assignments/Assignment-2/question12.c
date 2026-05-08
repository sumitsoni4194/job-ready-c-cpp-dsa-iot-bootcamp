#include<stdio.h>

int main() {
    double usdRate = 76.23;
    double amountInINR, amountInUSD;

    printf("Enter amount in INR: ");
    scanf("%lf", &amountInINR);

    amountInUSD = amountInINR / usdRate;

    printf("INR %.2lf = USD %.2lf", amountInINR, amountInUSD);

    return 0;
}