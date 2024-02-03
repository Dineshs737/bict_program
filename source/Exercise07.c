#include<stdio.h>

//this is simple program for inches to feet conveter


int main()
{
     int inches ;
     const int inches_per_foot = 12;

    printf("you shoud inches more than 12 inches and you don't enter float values :");

    scanf("%d",&inches);

    printf("Your Feet is : %d\n",inches/inches_per_foot);


    return 0;
}