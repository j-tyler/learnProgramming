#!/usr/bin/env python

# 1. Create a program that counts the number of characters in the string:
# This is a String.
# 2. Change the 3 runes at position 4 to abc
# 3. Reverse the string

s1 = "This is a String."
s2 = "abc"

print(s1)
print("The number of characters =", len(s1))
s1 = s1[0:4] + s2 + s1[7:]
print(s1)


# This creates a slice of s1. 
# The format is [where we start:where we end:size of step]
# if the step is negative, it itterates from the end to the start.
# when start and end are blank it defaults to the beginning/end.
s1 = s1[::-1]

print(s1)
