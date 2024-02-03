#include<stdio.h>

int main(void)

{
    char var1 ;
    int var2;
    float var3;
    double var4;
    float sum;
    

    printf("Enter character input:");
    scanf("%c",&var1);
    
    printf("Enter integer input:");
    scanf("%d",&var2);

    printf("Enter float input:");
    scanf("%f",&var3);

    printf("Enter double input:");
    scanf("%lf",&var4);


    sum = (float)var2 +var3;
    printf("\nValue of var1 :%c\nValue of var2 :%d\nValue of var3 :%lf\nValue of var4 :%lf\nsum of (var1+var2)  is :%lf\n",var1,var2,var3,var4,sum);
   




    return 0;
}