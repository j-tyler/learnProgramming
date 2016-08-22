package main

import "fmt"

// Tried multiple implimentations, none have worked.
// not quite sure how GO strings work yet :/

func main() {
	var s1 string = "Hello, mj. Does this program work?"
	var s2 string = "ek"
	
	for s3, i := "", 0; i < len(s1); i++ {
		fmt.Println(i)
		for samechar, j, i := false, 0, i; j < len(s2); j++ {
			if s1[i] == s2[j] {
				samechar = true
			}
			if samechar == false && j+1 == len(s2) {
				s3 += string(s1[i])
			}
		}
		s1 = s3
	}
	fmt.Println(s1, s2)
}
