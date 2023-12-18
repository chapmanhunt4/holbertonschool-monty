#include "monty.h"

/**
 * main - monty bytecode interpreter
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on fail
 **/

int main(int argc, char **argv)
{
	FILE *file;
	char *opcode;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 1;
	stack_t *head = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, file)) != -1)
	{
		opcode = strtok(line, " \t\n");
		execute_op(opcode, &head, line_number);
		line_number = line_number + 1;
	}
	fclose(file);
	return (EXIT_SUCCESS);
}
