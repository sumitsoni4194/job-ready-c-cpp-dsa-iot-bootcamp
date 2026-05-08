#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    printf("ASCII Code of %c is %d", ch, ch);
    return 0;
}