/**                                                                      
 * main - entry point of the function                                    
 * Return: 0 if successful                                               
 */
#include<stdio.h>

int main(void)
{
int i;
for (i = 0; i <= 25; i++)
{
putchar('a' + i);
};

for (i = 0; i <= 25; i++)
{
putchar('A' + i);
};
 
putchar('\n');
return (0);
}
