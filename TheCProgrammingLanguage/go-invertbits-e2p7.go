package main

import "fmt"
import "math"

//Write a function invert(x,p,n) that returns x with the n bits that begin at
//position p inverted (ie 1 changed into 0), leaving the others unchanged

func invert(x, p, n uint) uint {
	// working much differently than C and JS. it's flipping every bit, even the
	// leading zeros that 'don't exist'. I'm not sure of the solution right now.
    // so what I've done is just take 2 to the nth power in decimal
	// minus 1 to create a sequence of ones (11111) n length.
	// I feel like there has to be a more accurate solution.
	var mask uint = uint(math.Pow(2, float64(n)) - 1)
	mask = mask << (p-n)
    //lastly we flip all of those bits with the int x
    return x ^ mask;
}

func main() {
	fmt.Println(invert(1, 5, 5))
}
