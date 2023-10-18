#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter value of A : ");
    scanf("%d", &a);
    printf("Enter value of B : ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of A is : %d ", a);
    printf("The value of b is : %d", b);
}