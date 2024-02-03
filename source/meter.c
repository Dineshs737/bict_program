#include<stdio.h>
#define CentimetersPerMeter 100

#define MetersPerKilometer 1000
int main()
{
    double meter;

    printf("Enter your lenght:");
    scanf("%lf",&meter);

    printf("Your Lenght is :%lf cm\n",meter*CentimetersPerMeter);
    printf("Your Lenght is :%lf km\n",meter/MetersPerKilometer);
    return 0;
}