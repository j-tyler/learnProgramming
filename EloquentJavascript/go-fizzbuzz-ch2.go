// Write a program that prints all the numbers from 1 to 100 with two exceptions.
// For numbers divisable by 3, print Fizz, for numbers divisible by 5, print Buzz.
// for numbers divisable by both 3 and 5, print FizzBuzz.

package main

import "fmt"

func main() {
	for i := 1; i <= 100; i++ {
		switch {						// I've never used switch in my programming
		case i % 3 == 0 && i % 5 == 0:	// and golang has a good implementation
			fmt.Println("FizzBuzz")		// so lets try it out
		case i % 3 == 0:
			fmt.Println("Fizz")
		case i % 5 == 0:
			fmt.Println("Buzz")
		default:
			fmt.Println(i)
		}
	}
}
