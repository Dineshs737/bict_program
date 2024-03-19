#include<stdio.h>
#include<math.h>
#define PI 22.0/7.0

double diameter(double);
double circumfrence(double);
double area(double);

int main()
{
    double radius =7;

    printf("Enter the radius :");

    scanf("%lf",&radius);
    
    

    printf("\nCircle of the Diameter is %.2lf\n",diameter(radius));

    printf("\nCircle of the Circumference is %.2lf\n",circumfrence(radius));

    printf("\nCircle of the Area is %.2lf\n",area(radius));

    return 0;
}
double diameter(double r)
{
    return 2*r;
}
double circumfrence(double r)
{
    return 2*PI*r;
}

double area(double r)
{
    return PI*r*r;
}