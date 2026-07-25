#include <stdio.h>
#include <math.h>

int main()
{
    int n,i, even_sum=0 , odd_sum=0;

    printf("Enter the value of n\n");
    scanf("%d", &n);

    for ( i=1 ; i<=n ; i++){

    if (i% 2 ==0)
        {
        even_sum = even_sum + i ;
        }


        else
         {
         odd_sum = odd_sum + i;

        }

    }

        printf("The even_sum is =%.2d", even_sum);

        printf("The odd_sum is =%.2d", odd_sum);


    return 0;
}
