#include <stdio.h>
#include <stdlib.h>

int main()
{   float N, KN;

    printf("Enter the value of Force in N\n");
    scanf("%f", &N);

    KN = N/1000 ;

    printf("The force in =%.2f\n",KN);


    return 0;
}
