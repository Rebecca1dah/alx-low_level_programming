#include<stdio.h>
/**
 * main - print its name/
 * @argc: number of command line argument.
 * @argv: array that contains the command line arguments.
 * Return: (0) when successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", argv[0]);

	return (0);
}
