#include <stdio.h>

int main()
{
    int a = 0;
    for (int i = 5; i>0; i--)
    {
        for (int j = i; j>0; j--)
        {
            printf("* ");
        }
        printf("\n");
        a++;
        for (int b = a; b>0; b--)
        {
            printf(" ");
        }
    }
}