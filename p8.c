#include <stdio.h>

int main()
{
    int a = 0;
    for (int i = 5; i>0; i--)
    {
        for (int j = 4; j>0; j--)
        {
            printf("* ");
        }
        printf("\n");
        a++;
        for (int b = 1; b<=a; b++)
        {
            printf(" ");
        }
    }
}