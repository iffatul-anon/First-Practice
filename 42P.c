# include <stdio.h>
#include <math.h>
// if a number is greater than 9 & less than 100 -> true (2 digit number)
int main()
{ 
    int x;
printf("enter number :");
scanf("%d", &x);
printf("%d \n", x>9 && x<100);

    return 0;
}
// 78 will print
// 101 will not print, because it is not 2 digit number