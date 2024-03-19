#include<stdio.h>


int  max(void);

int main()
{
    int maximum;
    maximum = max();
    printf("\nMaximum =%d\n",maximum);
    return 0;
}

int max()
{
    int num1 , num2 , num3 ;

    printf("Enter the number :");
    scanf("%d",&num1);

     printf("Enter the number :");
    scanf("%d",&num2);

    printf("Enter the number :");
    scanf("%d",&num3);

    if(num1>num2 && num1 > num3)  return num1 ;

     if(num2>num1 && num2 > num3)  return num1 ;

     else return num3;
}