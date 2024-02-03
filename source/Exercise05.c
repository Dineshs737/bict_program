#include<stdio.h>

int main(void)
{
    int x,y,z;
    float totel;
    

    printf("Enter the Value of x :");
    scanf("%d",&x);

    printf("Enter the Value of y :");
    scanf("%d",&y);

    printf("Enter the Value of z :");
    scanf("%d",&z);

    printf("\nThe product is :%d",x);

    printf("\nThe product is :%d",y);

    printf("\nThe product is :%d\n",z);

    totel =(float) x+z+y;

    printf("\nAverage :%f\n",totel/3);
    return 0;
}