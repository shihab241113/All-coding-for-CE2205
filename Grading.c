#include <stdio.h>


int main()
{

    float Marks;
    printf("Enter the value of Marks\n",Marks);
        scanf("%f",&Marks);

    if (Marks> 100 || Marks <0){
        printf("Invalid Marks");}

        else if (Marks>=80){
        printf("You got A+");}

         else if (Marks>=75){
        printf("You got A");}

         else if (Marks>=70){
        printf("You got A-");}

         else if (Marks>=65){
        printf("You got B+");}

        else if (Marks>=60){
        printf("You got B");}

        else if (Marks>=55){
        printf("You got B-");}

         else if (Marks>=50){
        printf("You got C+");}

        else if (Marks>=45){
        printf("You got C");}

        else if (Marks>=40){
        printf("You got D");}

        else
            printf("You fail");




    return 0;
}
