package main

import "fmt"

/* Prints chart of celsius to Fahr conversion */

func main() {
	var lower int = -20
	var upper int = 100
	var step int = 5

	var celsius, fahr int 

	for celsius = lower; celsius <= upper; celsius += step {
		fahr = celsius * 9 / 5 + 32
		/* fmt.Println(celsius, fahr) legal, but unformated */
		fmt.Printf("%3v %6v\n", celsius, fahr)
	}
}
