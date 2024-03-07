#include <stdio.h>
#include <stdlib.h>

int main()
{
     double R, area;
    const double pi = 3.141592653;
    printf("enter the radius: ");
    scanf("%lf", &R);
    area = pi * R * R;

    printf("A=%.4f\n", area);



    return 0;
}
