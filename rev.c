#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int rev = 0, d, copy;
    copy = n;
    for (int i = 1;i<=copy;i++)
    {
        d = copy % 10;
        rev = (rev * 10) + d;
        copy = copy / 10;
    }
    if (rev == n)
    printf("Pallindrome");
    else 
    printf("Not pallindrome");
    return 0;
}