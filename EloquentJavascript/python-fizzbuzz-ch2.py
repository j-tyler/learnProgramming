#!/usr/bin/env python

# Write a program that prints all the numbers from 1 to 100 with two exceptions.
# For numbers divisable by 3, print Fizz, for numbers divisible by 5, print Buzz.
# for numbers divisable by both 3 and 5, print FizzBuzz.

for i in range(1,101):				#note the unique looping structure
	if i % 3 == 0 and i % 5 == 0:
		print("FizzBuzz")
	elif i % 3 == 0:				#python also uses elif instead of else if
		print("Fizz")				#print automatically makes a newline
	elif i % 5 == 0:
		print("Buzz", end="\n")		#use end= to change how print ends output
	else:
		print(i)
