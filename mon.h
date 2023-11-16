#ifndef HAMON_H
#define HAMON_H
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * struct our_stack - stack or queue
 * @after:the next element
 * @before:the last elemnt
 * @n:number
 */
typedef struct our_stack
{
	int n;
	struct our_stack *after;
	struct our_stack *before;
} the_stack;
/**
 * struct car - handles arguments
 * @com:arguments
 * @cot:para
 * @folder:our file
 * @F:num
 */
typedef struct car_t
{
	char *com;
	char *cot;
	FILE *folder;
	int F;
} car_a;
extern car_a car;


void HA_free(the_stack *h);
#endif
