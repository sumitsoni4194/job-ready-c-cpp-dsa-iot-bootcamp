#include<stdio.h>
int main() {
    int a = 5;
    short int si = 9;
    long int li = 13;
    float b = 5.6;
    char ch = 'A';
    double d = 5.9;
    printf("Size of int: %d\n", sizeof(a));
    printf("Size of short int: %d\n", sizeof(si));
    printf("Size of long int: %d\n", sizeof(li));
    printf("Size of float: %d\n", sizeof(b));
    printf("Size of char: %d\n", sizeof(ch));
    printf("Size of double: %d", sizeof(d));
    return 0;
}