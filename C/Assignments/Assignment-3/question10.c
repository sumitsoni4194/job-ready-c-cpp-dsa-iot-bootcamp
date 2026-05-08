#include <stdio.h>
int main()
{
    double costPrice, sellingPrice;
    printf("Enter cost price and selling price of the product: ");
    scanf("%lf%lf", &costPrice, &sellingPrice);
    if(costPrice <= 0) {
        printf("Cost price must be greater than zero");
        return 0;
    }
    if(costPrice > sellingPrice) {
        double loss = costPrice - sellingPrice;
        double lossPercentage = ((loss / costPrice) * 100);
        printf("Loss percentage: %.2lf", lossPercentage);
    }
    else if(sellingPrice > costPrice) {
        double profit = sellingPrice - costPrice;
        double profitPercentage = ((profit / costPrice) * 100);
        printf("Profit percentage: %.2lf", profitPercentage);
    }
    else {
        printf("No profit no loss");
    }
    return 0;
}