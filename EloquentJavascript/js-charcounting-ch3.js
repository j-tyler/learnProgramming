

// Write a function countChar that takes two arguments
// arg1 is a string, arg2 is a char.
// return the number of arg2 in the string.

function countChar(s1, ch1) {
	var count = 0;
	
	for (var i = 0; i < s1.length; i++) {
		if (s1[i] == ch1) {
			count++;
		}
	}
	return count;
}

s1 = "This could be a very long string of ANYTHING!!! :)";
ch1 = "T";

console.log(s1);
console.log("There are", countChar(s1, ch1), ch1, "chars in this string.");
