#include <unistd.h>
/* main - 101-quote.c
 *
 * Return: Always returns 1
 */
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = sizeof(str) - 1;
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len);
return (1);
}
