#include <stdio.h>


int main()
{
    int n,sum=0,i;
    printf("Enter the last number of series\n");
    scanf("%d",&n);

    for (i=1; i<=n; i++){

        sum=sum+i ;
    }

    printf("The sum is =%.2d",sum);

    return 0;
}
