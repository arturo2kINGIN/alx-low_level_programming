// C program to demonstrate
// isupper() function
#include <ctype.h>
#include <stdio.h>
int main()
{
	char ch = 'A';

	// checking uppercase
	if (isupper(ch))
		printf("\nEntered character is uppercase character");
	else
		printf("\nEntered character is not uppercase character");
}

