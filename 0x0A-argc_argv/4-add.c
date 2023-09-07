#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print addition
 * @argc: number of command line argument
 * @argv: array that contains the program command line arg
 * Return: (0) when successful.
 */
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("0\n");
        return (0);
    }

    int sum = 0;

    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            if (!isdigit(argv[i][j])) {
                printf("Error\n");
                return (1);
            }
        }

        int num = atoi(argv[i]);
        if (num < 0) 
	{
            printf("Error\n");
            return (1);
        }

        sum += num;
    }

    printf("%d\n", sum);

    return 0;
}

