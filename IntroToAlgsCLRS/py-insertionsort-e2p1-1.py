#!/usr/bin/env python

##
# Written by Justin Marsh justin.marsh at holbertonschool.com
#
# Using Figure 2.2 as a model, issustrate the operation of Insertion-Sort
# on the array A = (31,41,59,26,41,58).
#
# I am doing this without looking at source or pseudo-code.
# This is my first functional result, not a refined solution.
##

##
# isort - sort an array from small to large
#         the array is sorted in place
##

def isort(array, n):
	for j in range(len(array)-1):
		key = array[j+1]
		i = j
		while (i >= 0 and key < array[i]):
			array[i+1] = array[i]
			i = i-1
		array[(i+1)] = key		

array = [2, 1, 3, 4, 5, 6, 7, 8, 0]

isort(array, len(array))
print(array)
