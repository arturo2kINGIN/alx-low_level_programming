#include <stdio.h>


/**
 * main - Entry point 
 * Return: Always 0 (Success)
 */

int main(void)

{
	char se;


	for (se = 'z'; se >= 'a'; se--)

		putchar(se);


	putchar('\n');


	return (0);
}
