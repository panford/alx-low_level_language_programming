/**
* main - entry point of the function
* Return: 0 if successful
*/

#include<stdio.h>

int main(void)
{
int i;
int lastNum;
lastNum = 9;
for (i = 0; i <= lastNum; i++)
{
putchar('0' + i);
};
putchar('\n');
return (0);
}
