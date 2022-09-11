#include <stdio.h>

/**
* main - prints string in put function
*
* Description: using the main function to execute code
* this program prints  size of various types
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("size of a long int: %lu.\n", (unsigned long)sizeof(li));
	printf("Size of long long int: %lu.\n", (unsigned long)sizeof(lli));
	printf("Size of float: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
