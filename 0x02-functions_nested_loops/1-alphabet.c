#include "main.h"
#include <unistd.h>
/**
*print_alphabet - Entry point
*/
void print_alphabet(void)
{
char letter;
for (letter = 'a'; <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
