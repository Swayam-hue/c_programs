#include <stdio.h>

/*Print the multiplication table of a number entered by the user in pretty form

Example: 
INPUT
Enter the number you want multiplication table of : 
6

OUTPUT
Table of 6 : 
6 x 1 = 6
6 x 2 = 12
.
.
.
.

*/

int main()
{
int x,ans;
printf ("Enter the number you want multiplication table of : ");
scanf ("%d/n"&x);
printf("%d X 1 = %d/n"x, x*1, ans);
printf("%d X 2 = %d/n"x, x*2, ans);
printf("%d X 3 = %d/n"x, x*3, ans);
printf("%d X 4 = %d/n"x, x*4, ans);
printf("%d X 5 = %d/n"x, x*5, ans);
printf("%d X 6 = %d/n"x, x*6, ans);
printf("%d X 7 = %d/n"x, x*7, ans);
printf("%d X 8 = %d/n"x, x*8, ans);
printf("%d X 9 = %d/n"x, x*9, ans);
printf("%d X 10 = %d/n"x, x*10, ans);
return 0;
}