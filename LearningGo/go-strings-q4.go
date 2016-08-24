// 1. Create a program that counts the number of characters in the string:
// This is a String.
// 2. Change the 3 runes at position 4 to abc
// 3. Reverse the string

package main

import "fmt"

func main() {
	var s1 string = "This is a String."
	var s1r = []rune(s1)

	fmt.Println(s1)
	fmt.Println("The number of characters =", len(s1r))
	
	// copy abc in rune form []rune("abc") to array s1r starting at position 4

	copy(s1r[4:], []rune("abc"))			 

	fmt.Println(string(s1r))

	// swap using a 3rd temp variable ts1r, stopping in the middle of the string

	for i, j := 0, len(s1r)-1; i < (len(s1r)/2); i, j = i+1, j-1 {
		ts1r := s1r[j]
		s1r[j] = s1r[i]
		s1r[i] = ts1r
	}

	fmt.Println(string(s1r))
}
