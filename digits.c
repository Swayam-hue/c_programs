#include <stdio.h>

int main()
{
    int s = 0;
    int n, d;
    printf("Enter the number : ");
    scanf("%d", &n);
    int copy = n;
    for (int i = 1;i<=copy; i++)
    {
        d = copy % 10;
        s = s + d;
        copy = copy / 10;
    }
    printf("The sum of the digits of the number entered by the user is : %d", s);
    return 0;
}