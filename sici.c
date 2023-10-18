#include <stdio.h>

int main()
{
    int p, r, t,si;

    printf("Enter principle : ");
    scanf("%d",&p);
    printf("Enter rate : ");
    scanf("%d",&r);
    printf("Enter time : ");
    scanf("%d",&t);
    si = (p*r*t) / 100;
    printf("For the principle %d and rate %d and time %d, Your SI is = %d", p,r,t,si);
    return 0;
}
