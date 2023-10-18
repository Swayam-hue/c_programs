#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    if (n % 2 == 0)
        x = n / 2;
    else
        x = x / 2 + 1;
    int a = 1;
    for (int i = x; i > 0; i--)
    {
        for (int j = i;j > 0; j--)
        {
            if (j != 1)
            printf(" ");

            else
            break;
        }
        for (int b = 1; b <= a; b++)
        {
            printf("* ");
        }
        a+=1;
        printf("\n");
    }
    
}