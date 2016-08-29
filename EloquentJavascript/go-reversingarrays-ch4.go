package main

import "fmt"

// Write two functions, reverseArray and reverseArrayInPlace (if possible)
// The first, reverseArray, takes an array as argument and produces a new array
// that has the same elements in the inverse order. The second,
// reverseArrayInPlace, modifies the array given as an argument.
// Do not use build in reversing functions

// Having to know the array size before writing the function has to be incorrect
// as it is so clunky, but I'm unsure.

// according to the internet, this is actually correct, if we are using arrays.
// go has 'slices' which are very similar to arrays and would work well
// I'd use slices if I were making my own program of similar sort
// but the question is specifically asking to reverse an array
// and arrays of different sizes are different types, an important distinction.
// [3]int is not the same type as [4]int, and functions must know the type 
// of parameter they are accepting, thus we must know the size of the array.

func reverseArray (s1 [8]int) [8]int {
	// this method is fairly ineffective considering Go's capability
	var s2 [len(s1)]int
	for i, j := 0, len(s1)-1; i < len(s1); i, j = i+1, j-1 {
		s2[i] = s1[j]
	}
	return s2
}

// We must send and recieve the array as a pointer so the array is passed by reference.
func reverseArrayInPlace (s1 *[8]int)  {
	for i, j := 0, len(s1)-1; i<j; i, j = i+1, j-1 {
		s1[i], s1[j] = s1[j], s1[i]
	}
}

func main() {
	arr := [8]int{1, 2, 3, 4, 5, 6, 7, 8}

	// should print 8 ... 1 then 1 ... 8
	reverseArrayInPlace(&arr)
	fmt.Println(arr)
	arr = reverseArray(arr)
	fmt.Println(arr)
}
