#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if ((a>=b) && (a>=c))
    printf("A is the greatest");
    else if ((b>=a) && (b>=c))
    printf("B is greatest");
    else 
    printf("C is greatest");
    return 0;
}