#include <stdio.h>
/**
 * main - program
 * program should print a number, followed by a new line.
 * @argc: number of command line argument.
 * @argv: array that contains the command line arguments.
 * Return: (0) when successful
 */
int main(int argc, char **argv __attribute__((unused)))
{

	printf("%d\n", argc - 1);
        return (0);	
}
