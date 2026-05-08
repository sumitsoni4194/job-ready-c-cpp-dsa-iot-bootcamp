#include <stdio.h>

int main() {
    double radius, area;
    const double PI = 3.14159;

    printf("Enter radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("Area of circle is %.2f having the radius %.2f", area, radius);
    return 0;
}
