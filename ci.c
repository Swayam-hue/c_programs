#include <stdio.h>
#include <math.h>

int main()
{
    double p, r, t, n, a;
    printf("Enter principle : ");
    scanf ("%lf",&p);
    printf("Enter rate : ");
    scanf("%lf",&r);
    printf("Enter time : ");
    scanf("%lf",&t);
    printf("Enter number of yearly interest compounding : ");
    scanf("%lf",&n);
    a = p * pow((1+r/n),(n*t));
    printf("The CI is %lf",a);
    return 0;
}