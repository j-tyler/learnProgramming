#!/usr/bin/env python

lower = -20
upper = 100
step = 5

celsius = lower
while celsius <= upper:
	fahr = celsius * 9 / 5 + 32
	print "%3d %6d" % (celsius, fahr)
	celsius += step
