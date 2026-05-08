#include<stdio.h>
int main() {
    float subject1, subject2, subject3, subject4, subject5;
    printf("Enter subject1 marks:");
    scanf("%f", &subject1);
    printf("Enter subject2 marks:");
    scanf("%f", &subject2);
    printf("Enter subject3 marks:");
    scanf("%f", &subject3);
    printf("Enter subject4 marks:");
    scanf("%f", &subject4);
    printf("Enter subject5 marks:");
    scanf("%f", &subject5);
    if(subject1 >= 33 && subject2 >= 33 && subject3 >= 33 && subject4 >= 33 && subject5 >= 33) {
        printf("Passed");
    }
    else {
        printf("Failed");
    }
    return 0;
}