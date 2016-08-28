def invert(x, p, n):
    '''e first create a binary number n digits long of all 1s: ~(~0 << n)
      this was hard for me to understand at first, so I'll explain.
      ~0 flips the binary number 0b0 into 0b1 = one.
      << n shifts it to the left, in the case example of 5 = 0b100000
      then ~() once again flips the bits to produce 0b011111
      or just 0b11111, five bits turned on, as required.
      we then shift those 1s to the left to start at position p: (p-n)'''
    mask = (~(~0 << n) << (p-n))
    return x ^ mask;

print(invert(1, 5, 5)
