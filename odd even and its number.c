#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ,i;
    int odd_sum=0 , even_sum=0;
    int even_number , odd_numbers ;

    printf("Enter the value of n\n", n);
    scanf("%d", &n);

    for ( i=1; i<=n ; i++){
        if(i%2 == 0)
        {
            even_number++;
            even_sum= even_sum+i;

        }

        else {

            odd_numbers++;
            odd_sum = odd_sum+i;
        }

    }

    printf("Total even_number is=%.2d\n",even_number);
    printf("Even Sum is=%.2d\n",even_sum);
    printf("Total odd_numbers =%.2d\n", odd_numbers);
    printf("Odd sum is =%.2d\n", odd_sum);


    return 0;
}
