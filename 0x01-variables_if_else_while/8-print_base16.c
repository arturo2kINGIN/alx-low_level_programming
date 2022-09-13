#include <stdio.h>


/**
 * main - Entry point
 * Return: Always 0 (Success)
 */


int main(void)

{
	int num;

	char ca;



	for (num = 0; num < 10; num++)

		putchar((num % 10) + '0');


	for (ca = 'a'; ca <= 'f'; ca++)

		putchar(ca);

	putchar('\n');


	return (0);
}
