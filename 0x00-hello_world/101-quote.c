#include <stdio.h>
#include <unistd.h>

/**
 * main - prints string in put function
 * Description : code prints out and that piece of art is useful"
 * - Dora Korpar, 2015-10-19";
 * follwed by a new line
 * Return: 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
