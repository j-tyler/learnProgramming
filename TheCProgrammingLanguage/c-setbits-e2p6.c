#include <stdio.h>

// Exercise 2 - 6 from K&R. Write a function setbits(x,p,n,y) that returns x
// with the n bits that begin at position p set to the rightmost n bits of y
// leaving the other bits unchanged

// I don't think this is the best implementation, but it seems to work.

int setbits(int x, int p, int n, int y)
{
	//n = number of bits
	//p = position to change bits
	//y = the int to take the n rightmost bits from

	
	// Take the bits from y that we need.
	int ymask = y & ~(~0 << n);
	// Shift the y bits to the position we need
	ymask = ymask << (p-n);
	// Split the bit from x into the parts before and after y insertion
	// here we have xmask1 = the rightmost bits and
	int xmask = x & ~(~0 << (p-n));
	// and x is now only the leftmost bits
	x = x >> p << p;
	// now, we are just concatonating the 3 section of bits.
	x = x | ymask;
	x = x | xmask;	
	return x;
}

int main(void)
{
	int x = 100; // 1100100
	int y = 7; // 111
	x = setbits(x,4,2,y); // x should now be 110 11 00 = 108
	printf("%d\n", x); 
}
