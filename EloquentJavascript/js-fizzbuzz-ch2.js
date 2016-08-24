
// Write a program that prints all the numbers from 1 to 100 with two exceptions.
// For numbers divisable by 3, print Fizz, for numbers divisible by 5, print Buzz.
// for numbers divisable by both 3 and 5, print FizzBuzz.

for (var i = 1; i <=100; i++) {
	if (i % 3 == 0 && i % 5 == 0) {
		console.log("FizzBuzz");
	} else if (i % 3 == 0) {
		console.log("Fizz");
	} else if (i % 5 == 0) {
		console.log("Buzz");
	} else {
		console.log(i);
	}
}
