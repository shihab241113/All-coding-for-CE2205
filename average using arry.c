#include <stdio.h>


int main()
{
    float marks[5]={40,50,60,70,80};
    float sum=0, Average;
    int i;

    for ( i=0; i <5; i++)
    {
        sum=sum+marks[i];
    }
    Average= sum/5;

    printf("Average =%.2f\n",Average);

    return 0;
}
