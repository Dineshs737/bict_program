#include<stdio.h>

int main(void)
{
    int a =72;
    char b = 'A';
    float c =13.8;
    float d =10.1234567;
    int e =a/10;

    printf("a equals: %d\n",a);

    printf("char value of a: %c\n",a);

    printf("integer value of b: %d\n",b);

    printf("c equals: %f",c);

    printf("\n sizeof(a) = %ld bytes",sizeof(a));
    
    printf("\n sizeof(b)= %ld bytes",sizeof(b));

    printf("\n Adress of a=%p",&a);

    printf("d variable store:%7.3f\n",d);

    printf("the value of e=%d",e);
    
    return 0;

}