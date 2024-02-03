#include<stdio.h>

#define pie 3.143

int main(void)
{
    double r;

    printf("Enter your circle's radius:");
    scanf("%lf",&r);

    printf("Circumference of a circle :%lf\n",2*pie*r);
    return 0;
}