#include <stdio.h>
#include <math.h>

int main()
{
    float a=2, b=-5, c=2;
    float discriminant;
    float root1, root2;

    discriminant = b*b - 4*a*c;

    if (discriminant > 0)
    {
        root1 =(-b + sqrt(discriminant))/(2*a);
        root2 =(-b - sqrt(discriminant))/(2*a);


        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }

    return 0;
}
