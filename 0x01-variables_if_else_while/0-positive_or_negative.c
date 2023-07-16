#include <stdio.h>
int main(void)
{
int n;
printf("Enter an integer: ");
scanf("%d", &n);
if (n > 0)
{
printf("positive\n", n);
}
else if (n < 0)
{
printf("negative\n", n);
}
else
{
printf("Zero\n", n);
}
return (0);
}
