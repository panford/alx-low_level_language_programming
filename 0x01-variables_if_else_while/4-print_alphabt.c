/**
* main - entry point of the function
* Return: 0 if successful
*/

#include<stdio.h>

int main(void)
{
int i;
char character;
for (i = 0; i <= 25; i++)
{
character = 'a' + i;
if (i != 'q'-'a' || i != 'e'- 'a')
{
putchar(character);
};
};
putchar('\n');
return (0);
}
