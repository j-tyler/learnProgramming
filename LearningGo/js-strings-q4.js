// 1. Create a program that counts the number of characters in the string:
// This is a String.
// 2. Change the 3 runes at position 4 to abc
// 3. Reverse the string

var s1 = "This is a String.";
var s2 = "abc";

console.log(s1);
console.log("The number of characters =", s1.length);

//we are replacing index 3 of s1 with the contents of s2
s1 = s1.replace(s1.substr(4, s2.length), s2);

console.log(s1);

//reverse s1...

