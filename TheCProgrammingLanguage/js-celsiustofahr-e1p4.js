// Take a list of celsius temps, and convert to fahrenheit

var fahr, celsius;
var lower = -20;
var upper = 100;
var step = 5;

celsius = lower;

while (celsius <= upper) {
	fahr = celsius * 9 / 5 + 32;
	console.log(celsius, fahr);				//I am unaware of console.log formatting
	celsius += step;						//or printf fuctions built into js
}
