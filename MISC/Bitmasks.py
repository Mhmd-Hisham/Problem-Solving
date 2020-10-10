#!/usr/bin/env python3

import math

def flip_mask(x):
    # O(log2 x)
    return ~x & (1<<(int(math.log2(x))+1))-1

def xorZeroToX(x):
    # O(1)
    return [x, x^(r-1), x^(x-1)^(x-2), 0][x%4]

def xorRange(l, r):
    # O(1)
    return xorZeroToX(l)^xorZeroToX(r)^l
 
