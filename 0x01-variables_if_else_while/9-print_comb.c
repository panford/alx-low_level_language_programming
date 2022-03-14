/**
 * main - beginning of function main
 * Return: value 0 if success
*/

#include<stdio.h>

int main(void)
{
int i;
int base;
base = 10;
for (i = 0; i < base; i++)
{
putchar('0' + i);
if (i != base - 1)
{
putchar(',');
putchar(' ');
};
};
putchar('\n');
return (0);
}
