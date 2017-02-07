#!/usr/bin/python3

def every(arr, f):
    for i in range(0, len(arr)):
        if not f(arr[i]):
            return False
    return True 


def some(arr, f):
    for i in range(0, len(arr)):
        if f(arr[i]):
            return True
    return False


def tester(n):
    return n < 8


arr = [1, 2, 3, 4, 5, 6, 7, 8]
print(every(arr, tester))
print(some(arr, tester))
