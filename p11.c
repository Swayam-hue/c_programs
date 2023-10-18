#include <stdio.h>

int main()
{
    int n = 4, y = 0, a = 2, b = 2;
    for (int z = 0; z<n*2-1; z++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("* ");
        }
        printf("\n");
        for (int j = 1; j<=y; j++)
        {
            if (j <= (n-1))
            printf(" ");
            else
            break;
        }
        for (int k = n - a; k>0;k--)
        {
            printf(" ");
        }
        a++;
        for (int l = 1; l>=b; l++)
        {
            printf("* ");
        }
        printf("\n");
    }
}