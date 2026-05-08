 #include<stdio.h>
int main() {
    int x, position = 1;
    printf("Enter a number:");
    scanf("%d", &x);
    if(x == 0) {
        printf("No set bit");
        return 0;
    }
    while (!(x & 1))
    {
        x = x >> 1;
        position++;
    }
    printf("%d", position);
    return 0;
}