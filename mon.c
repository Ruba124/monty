#include "mon.h"
car_a car = {NULL, NULL, NULL, 0};
/**
 * main - func
 * @argv:para
 * @argc:para
 * Return:int
 */
int main(int argc, char *argv[])
{
	size_t a = 0;
	ssize_t input = 0;
	unsigned int count = 0;
	FILE *folder;
	char *cot;
	the_stack stack = NULL;

	if(argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	folder = fopen(argv[1], "r");
	car.folder = folder;
	if (!folder)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	for(; input > 0; )
	{
		cot = NULL;
		input = getline(&cot, &a, folder);
		car.cot = cot;
		count += 1;
		if (input > 0)
		{
			execute(cot, &stack, count, folder);
		}
		free(content);
	}
	HA_free(stack);
	fclose(folder);
}
