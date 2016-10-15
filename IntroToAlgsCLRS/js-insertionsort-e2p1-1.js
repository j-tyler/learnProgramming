/** 
 * Written by Justin Marsh justin.marsh at holbertonschool.com
 *
 * Using Figure 2.2 as a model, issustrate the operation of Insertion-Sort
 * on the array A = (31,41,59,26,41,58).
 *
 * I am doing this without looking at source or pseudo-code.
 * This is my first functional result, not a refined solution.
 */


/**
 * isort - sort an array from small to large
 *         the array is sorted in place
 */

function isort(array, size) {
	for(var j = 1; j < size; j++) {
		var key = array[j];
		var i = j - 1;

		while (i >= 0 && key < array[i]) {
			array[i+1] = array[i];
			i--;
		}
		array[i+1] = key;
	}
}

var array = [2, 1, 3, 4, 5, 6, 7, 8, 0];

isort(array, array.length);
console.log(array)

