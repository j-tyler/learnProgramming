package main

import "fmt"

// Labeling rough because I don't quite understand slices
// not sure how to change s1 without an assignment to the fuction return
// but this could be proper implementation.


// When squeeze is given two arrays, remove all characters found in string2
// from string1.

func squeeze(s1 string, s2 string) string {
	for s1r, s2r, i := []rune(s1), []rune(s2), 0; i < len(s1r); i++ {
        for j := 0; j < len(s2r); j++ {
            if s1r[i] == s2r[j] {
                s1r = s1r[:i+copy(s1r[i:], s1r[i+1:])]  // I don't understand how this
            }                                           // works, got from golang wiki
        }
        s1 = string(s1r)
    }
	return s1
}

func main() {
	var s1 string = "Hello, mj. Does this program work?"
	var s2 string = "ek"

	s1 = squeeze(s1, s2)
	fmt.Println(s1)
}
