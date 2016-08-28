package main

import "fmt"

//Write a function invert(x,p,n) that returns x with the n bits that begin at
//position p inverted (ie 1 changed into 0), leaving the others unchanged

func invert(x, p, n uint) uint {
	// working much differently than C and JS. it's flipping every bit, even the
	// leading zeros that 'don't exist'. I'm not sure of the solution right now.
    var mask uint = ^(1 << n)
	//fmt.Println(mask)
	mask = mask << (p-n)
    //lastly we flip all of those bits with the int x
    return x ^ mask;
}

func main() {
	fmt.Println(invert(1, 5, 5))
}
