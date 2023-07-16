#include <stdio.h>
int main(void)
{
int n;
printf("Enter an integer: ");
scanf("%d", &n);
if (n > 0)
{
printf("positive\n");
}
else if (n < 0)
{
printf("negative\n");
}
else
{
printf("Zero\n");
}
return (0);
}
