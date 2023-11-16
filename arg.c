#include "mon.h"
/**
 * HA_free - freeing
 * @stack:arg
 */
void HA_free(the_stack *h)
{
	the_stack *t;

	t = h;
	while (h)
	{
		t = h->after;
		free(h);
		h = t;
	}
}
/**
 * pushing - fun
 * @node:para
 * Return:int
 */
int pushing(the_stack **node)
{
