#include<stdio.h>

/**
 * main - print its name
 *
 * @argc: number of command line argument
 * @argv: array that contains the command line arg
 *
 * Return: (0) when successful
 */

int main(int argc, char *argv[]) {
    
	(void)argc;
    
	printf("%s\n", argv[0]);
        return (0);
}
