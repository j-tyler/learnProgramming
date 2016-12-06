#include "unionheader.h"
/**
 * main.c - Build and test the union find algorithm
 *
 * Return: 0
 */
int main(void)
{
	// Build 2 arrays of 10,000 random numbers
	// init 10,000 nodes
	// run 10,000 unions from random number array
	// run 10,000 isconnected querys from random number array on data
	unode arr[UNIONSIZE];

	_init_union_data(arr, UNIONSIZE);
	_union(&arr[0], &arr[1]);
}
void _init_union_data(unode *arr, int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		arr[i].parent = &arr[i];
		arr[i].depth = 1;
	}
}
void _union(unode *n, unode *m)
{
	unode *rootn, *rootm;

	rootn = _findroot(n);
	rootm = _findroot(m);
	// findroot of n, findroot of m
	// if they are the same, do nothing
	// if they are not the same, change the root of the shorter tree to the longer
	printf("%p\n", rootn->parent);
	if (rootn->depth > rootm->depth)
		rootm->parent = rootn;
	else
	{
		rootn->parent = rootm;
		if (rootn->depth == rootm->depth)
			rootn->depth++;
	}
	printf("%p\n", rootn->parent);
	printf("%d\n", rootn->depth);

}
unode *_findroot(unode *n)
{
	unode *tmp = n;

	while (tmp != tmp->parent)
		tmp = tmp->parent;
	return (tmp);
}
