#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, F;
    printf("Enter the value of Temperature in Farenheit",F);
    scanf("%f",&F);

    C=(F-32)*5/9;

    printf("Temperature in Celcius=%.2f",C);
    return 0;
}
