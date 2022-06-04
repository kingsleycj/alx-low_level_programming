#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;
	for ( int low = 'A'; low <= 'z'; low++)
	{
		low = tolower(low);
		putchar(low);
		putchar('\n');
	}
	return (0);
}
