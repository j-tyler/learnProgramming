// 1. Create a program that counts the number of characters in the string:
// This is a String.
// 2. Change the 3 runes at position 4 to abc
// 3. Reverse the string

#include <stdio.h>

int main(void) {
	char s1[] = "This is a String.";

	printf("%s\n", s1);

	//sizeof(s1) returns the number of bytes, so /sizeof(element0) 
	//returns the number of characters. 
	//remember C arrays terminate with \0, so we -1 for only visable characters.
	int length = sizeof(s1)/sizeof(s1[0])-1;
	printf("The number of characters = %d\n", length);

	//looping through the array is the only way to replace parts of a string that I know
	char ts1[] = "abc";
	int i;
	for (i=0; i<3; i++) {
		s1[i+4] = ts1[i];
	}
	printf("%s\n", s1);

	//because we can't initiate j in the loop declaration, we doso outside the loop
	int j = length-1;
	for (i=0; i < length/2; i++) {
		char tmps1 = s1[j];
		s1[j] = s1[i];
		s1[i] = tmps1;
		j--;
	}
	printf("%s\n", s1);
}
