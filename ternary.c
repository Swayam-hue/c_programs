#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int greatest = ( (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c) );
    printf("The greatest number is %d", greatest);
    return 0;
}