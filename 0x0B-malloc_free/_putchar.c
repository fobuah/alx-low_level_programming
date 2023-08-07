#include "main.h"
#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character that will print
*
* Return: success 1.
* On an error, if -1 is returned, and errno is also set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
