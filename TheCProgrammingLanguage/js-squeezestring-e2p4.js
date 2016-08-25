// When the function squeeze is given two arrays, 
// it removes all characters found in string2 from string1.

// I'm not entirely happy with how this squeeze function works. marking rough
function squeeze(s1, s2) {
	for (var i = 0; i < s2.length; i++) {
		while (s1.indexOf(s2[i]) != -1) {	//while any of s2 is in s1, replace 		
			s1 = s1.replace(s2[i], "");		//replace only does 1? instance
		}
	}
	return s1;
}

var s1 = "Hello, mj. Does this program work?";
var s2 = "ek";

s1 = squeeze(s1, s2);

console.log(s1);
