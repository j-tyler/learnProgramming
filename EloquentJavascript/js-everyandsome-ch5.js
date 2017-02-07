// Remake the js methods Every and Some
arr = [1, 2, 3, 4, 5, 6, 7, 8];

function every(a, f) {
	for (var i = 0; i < a.length; i++) {
		if (!f(a[i], i, a)) {
			return false
		}
	}
	return true
}

function some(a, f) {
	for (var i = 0; i < a.length; i++) {
		if (f(a[i], i, a)) {
			return true
		}
	return false
	}
}

test = function (n) {
	return n < 8
}

console.log(every(arr, test))
console.log(some(arr, test))
