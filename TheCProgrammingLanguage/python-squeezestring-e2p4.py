#!/usr/bin/env python

# I hate this implementation, but I cannot figure out a cleaner way. I will mark
# this as rough and return when I have a stronger grasp of python.

def squeeze(s1, s2):
	for i in range(s2.__len__()):
		for j in range(s1.count(s2[i])):
			s1.remove(s2[i]) 

# How do we easily evaluate each character in an string?
# This is a list 'array' implementation.

s1 = ["H", "e", "l", "l", "o", ",", " ", "m", "j", ".", " ", "D", "o", "e", "s"," ", "t", "h", "i", "s", " ", "p", "r", "o", "g", "r", "a", "m", " ", "w", "o", "r", "k", "?"]
s2 = ["e", "k"]

squeeze(s1, s2)

for k in range(s1.__len__()):
	print(s1[k], end='')

print()
