#ifndef UNIONHEADER_H
#define UNIONHEADER_H
#define UNIONSIZE 2000000
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * struct unode - node structure for our unionfind implemention
 * @parent: address of the parent of the node
 * @depth: the depth of the tree, if current node is root
 */
typedef struct unode
{
	struct unode *parent;
	unsigned int depth;
} unode;
void _union(unode *n, unode *m);
void _init_union_data(unode *arr, int n);
unode *_findroot(unode *n);
int _is_connected(unode *n, unode *m);
#endif
