#include <stdio.h>


int main()
{
    float Marks, Mean=0,Sum=0;;
    int count=0;

    printf("Enter the value of marks type -1 to stop\n",Marks);
    while(1){

        scanf("%f",&Marks);
        if (Marks ==-1)
        {
            break;
        }

        Sum= Sum+Marks;
       count=count+1;
    }


    if (count >0){

        Mean=Sum/count;
        printf("Average or Mean Marks=%.2f",Mean);
    }

    else {
        printf("No Marks Entered");
    }

    return 0;
}
