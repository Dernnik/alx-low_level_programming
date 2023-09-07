#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * main - print the name of the program
 * @argc: count of the arguments supplied to the program and the
 * @argv: an array of pointers to the strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
