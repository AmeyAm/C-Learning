#include <math.h>
#include <stdio.h>

int main(){

    double radius = 0.0;
    double area= 0.0;
    double surfacearea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("enter the radius : ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfacearea = 4 * PI * pow(radius, 2);
    volume = (4.0/ 3.0) * PI *pow(radius, 3);

    printf("Area = %lf\n",area);
    printf("surfacearea = %lf\n", surfacearea);
    printf("volume = %lf\n", volume);
    return 0;

}