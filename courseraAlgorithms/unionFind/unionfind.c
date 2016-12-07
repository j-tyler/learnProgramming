#include "unionheader.h"
/**
 * main.c - Build and test the union find algorithm
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unode *arr;
	arr = malloc(sizeof(unode) * UNIONSIZE);
	int *rng1, *rng2, *rng3, *rng4;
	rng1 = malloc(sizeof(int) * UNIONSIZE);
	rng2 = malloc(sizeof(int) * UNIONSIZE);
	rng3 = malloc(sizeof(int) * UNIONSIZE);
	rng4 = malloc(sizeof(int) * UNIONSIZE);
	// Build arrays of UNIONSIZE random numbers
	srand(time(NULL));
	for (i = 0; i < UNIONSIZE; i++)
	{
		rng1[i] = rand() % UNIONSIZE;
		rng2[i] = rand() % UNIONSIZE;
		rng3[i] = rand() % UNIONSIZE;
		rng4[i] = rand() % UNIONSIZE;
	}

	// BEGIN CLOCKKEEPING
	clock_t tic = clock();

	// init nodes
	_init_union_data(arr, UNIONSIZE);
	// run unions from rng array rng1 and rng2
	for (i = 0; i < UNIONSIZE; i++)
	{
		_union(&arr[rng1[i]], &arr[rng2[i]]);
	}
	// run isconnected querys from rng array rng3 and rng4 on data
	for (i = 0; i < UNIONSIZE; i++)
	{
		_is_connected(&arr[rng3[i]], &arr[rng4[i]]);
	}

	// print out the connections for node 0
	//for (i = 0; i < UNIONSIZE; i++)
	//{
	//	printf("Node 0 is connected to Node %d?  %d\n",
	//	i, _is_connected(&arr[0], &arr[i]));
	//}

	// END CLOCKKEEPING
	clock_t toc = clock();
	printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);

	return (0);
}
/**
 * _init_union_data - Initialize all data in Union array
 * @arr: Array of structs used for our Union Find implementation
 * @n: number of nodes
 */
void _init_union_data(unode *arr, int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		arr[i].parent = &arr[i];
		arr[i].depth = 1;
	}
}
/**
 * _union - Link two nodes
 * @n: node one
 * @m: node two
 */
void _union(unode *n, unode *m)
{
	unode *rootn, *rootm;

	rootn = _findroot(n);
	rootm = _findroot(m);
	if (rootn->depth > rootm->depth)
		rootm->parent = rootn;
	else
	{
		rootn->parent = rootm;
		if (rootn->depth == rootm->depth)
			rootn->depth++;
	}
}
/**
 * _findroot - find the root of any node
 * @n: node to find root of
 *
 * Return: Address of root
 */
unode *_findroot(unode *n)
{
	unode *tmp = n;

	while (tmp != tmp->parent)
	{
		tmp = tmp->parent;
		// activate to turn on tree-flattening
		n->parent = tmp->parent;
	}
	return (tmp);
}
/**
 * _is_connected - find if two nodes are connected
 * @n: node one
 * @m: node two
 *
 * Return: 1 if connected, 0 if not connected
 */
int _is_connected(unode *n, unode *m)
{
	if (_findroot(n) == _findroot(m))
		return (1);
	return (0);
}
