#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
int n, m;

for (n = 0; n < 9; n++)
{
for (m = 1; m < 10; m++)
{
if (n < m && n != m)
{
putchar(n + '0');
putchar(m + '0');
if (n + m != 17)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
