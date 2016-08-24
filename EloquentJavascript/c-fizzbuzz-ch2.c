#include <stdio.h>

// Write a program that prints all the numbers from 1 to 100 with two exceptions.
// For numbers divisable by 3, print Fizz, for numbers divisible by 5, print Buzz.
// for numbers divisable by both 3 and 5, print FizzBuzz.

int main(void) 
{
	int i;

	for (i=1; i<=100; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			printf("FizzBuzz\n");
		} else if (i % 3 == 0) {
			printf("Fizz\n");
		} else if (i % 5 == 0) {
			printf("Buzz\n");
		} else {
			printf("%d\n", i);
		}
	}
}
