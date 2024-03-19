#include<stdio.h>


char FindRank(double); 
int main()
{
    double avg ;
    printf("Enter Avrage user marks :");
    // scanf("%lf",avg);
    scanf("%lf",&avg);

    printf("Your Rank is : %c",FindRank(avg));
}


char FindRank(double avg)
{
    if(avg >=90) return 'A';

    else if(avg >=70) return 'B';

    else if(avg>=50) return 'C';
    
    else if(avg>=30) return 'D';

    else return 'F';
}