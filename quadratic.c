#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double r, r1, r2;
    printf("Enter value of a, b, c : ");
    scanf("%d", "%d", "%d", &a, &b, &c);
    r = (b*b) - (4*a*c);

    if (r>=0)
    {
        r1 = (-b + sqrt(r))/(2*a);
        r2 = (-b - sqrt(r))/(2*a);
        printf("The first and second root are : %lf and %lf", r1, r2);
    }
    else
    printf("The roots are complex");
    return 0;
}