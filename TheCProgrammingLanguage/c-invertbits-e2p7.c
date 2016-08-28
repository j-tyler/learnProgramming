#include <stdio.h>

//Write a function invert(x,p,n) that returns x with the n bits that begin at
//position p inverted (ie 1 changed into 0), leaving the others unchanged

int invert(int x, int p, int n) 
{
	//we first create a binary number n digits long of all 1s: ~(~0 << n)
	//this was hard for me to understand at first, so I'll explain.
	//  ~0 flips the binary number 0b0 into 0b1 = one.
	//  << n shifts it to the left, in the case example of 5 = 0b100000
	//  then ~() once again flips the bits to produce 0b011111 
	//  or just 0b11111, five bits turned on, as required.
	//we then shift those 1s to the left to start at position p: (p-n)
	int mask = (~(~0 << n) << (p-n));
	//lastly we flip all of those bits with the int x
	return x ^ mask;
}

int main(void)
{	
	int numb = 1;
	numb = invert(numb, 5, 5);
	printf("%d\n", numb); // 1, 5, 5 produces 0b11110 which = 30
}
