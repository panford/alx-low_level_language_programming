/**
* main - entry point of the function
* Return: 0 if successful
*/

#include<stdio.h>

int main(void)
{
int i;
int base;
base = 16;
for (i = 0; i < base; i++)
{
if (i >= 10)
{
putchar('a' + (i % 10));
}
else
{
putchar('0' + i);
};
};
putchar('\n');
return (0);
}
