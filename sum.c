#include <stdio.h>
#include <math.h>

int main()
{
    int s = 0;
    int n;
    printf("Enter limit of the series : ");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++)
    {
        s = s + pow(i,2);
    }
    printf("The sum is : %d", s);
    return 0;
}