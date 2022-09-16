// C program to demonstrate
// isupper() function

#include <ctype.h>
#include <stdio.h>

// called function
int ttl_upper(int i, int counter)
{
	char ch;
	char a[50] = "GeeksForGeeks";
	ch = a[0];

	// counting of upper case
	while (ch != '\0') {
		ch = a[i];
		if (isupper(ch))
			counter++;

		i++;
	}

	// returning total number of upper case present in sentence
	return (counter);
}
int main()
{
	int i = 0;
	int counter = 0;

	// calling function
	counter = ttl_upper(i, counter);
	printf("\nNumber of upper case present in the sentence is : %d", counter);
	return 0;
}


