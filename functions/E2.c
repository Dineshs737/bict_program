#include<stdio.h>
#include<math.h>
#define PI 22.0/7.0

double diameter(double);
double circumfrence(double);
double area(double);
int main()
{
    double radius;

    printf("Enter the radius :");
    scanf("%lf",radius);

    printf("\nCircle of the Diameter is %lf",diameter(radius));

    printf("\nCircle of the Circumference is %lf",circumfrence(radius));

    printf("\nCircle of the Area is %lf",area(radius));

    return 0;
}
double diameter(double radius)
{
    return 2*radius;
}
double circumfrence(double radius)
{
    return 2*PI*radius;
}

double area(double radius)
{
    return PI*radius*radius;
}