#include<stdio.h>
#include<stdbool.h>

double calCost(char , int);
int main(void)
{
    char pro_Name , yes_or_no ='y';
    int units;
    double totel=0;
    

    while(yes_or_no=='y')
    {
    printf("Enter The Product Name :");
    scanf("%c",&pro_Name);

    printf("Enter Number of Units :");
    scanf("%d",&units);

    totel+=calCost(pro_Name,units);

    printf("\nDo you want to continue? Y/N :");
    scanf("%c",&yes_or_no);
    scanf("%c",&yes_or_no);

    if(yes_or_no =='y' ||yes_or_no =='Y')  yes_or_no='y';

    else  break;



    }
    printf("\nYou Cost is : %.2lf\n ",totel);

    return 0;
}

double calCost(char p_name,int units)
{
    switch(p_name)
    {
        case 'A': return units*50; break;
        case 'a': return units*50; break;
        case 'B': return units*100; break;
        case 'b': return units*100; break;
        case 'C': return units*70; break;
        case 'c': return units*70; break;
        case 'D': return units*180; break;
        case 'd': return units*180; break;
    }
}