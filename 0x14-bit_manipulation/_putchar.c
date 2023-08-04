#include <unistd.h>

/**
 * _putchar  - Entry point
 * prints the passed char
 *
 * Returns: 1 when true
 * Or -1 on error
 */

int _putchar(char x)
{

        return write(1, &x, 1);
}
