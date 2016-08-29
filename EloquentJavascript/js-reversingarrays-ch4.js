// Write two functions, reverseArray and reverseArrayInPlace (if possible)
// The first, reverseArray, takes an array as argument and produces a new array
// that has the same elements in the inverse order. The second,
// reverseArrayInPlace, modifies the array given as an argument.
// Do not use build in reversing functions

function reverseArray(s1) {
	s2 = [];
	for (var i = 0, j = s1.length-1; i<s1.length; i++, j--) {
		s2[i] = s1[j];
	}
	return s2
}

// an array in a fucntion in js is 'passed by reference'
// so changing the array in the function changes the array in the whole program
function reverseArrayInPlace(s1) {
	for (var i = 0, j = s1.length-1; i<s1.length/2; i++, j--) {
		var temp = s1[i];
		s1[i] = s1[j];
		s1[j] = temp;		
	}
}

var arr = [1, 2, 3, 4, 5, 6, 7, 8];

// should print 8 ... 1 then 1 ... 8
reverseArrayInPlace(arr);
console.log(arr);
arr = reverseArray(arr);
console.log(arr);
