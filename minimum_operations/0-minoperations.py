#!/usr/bin/python3
"""Module contains minoperations function"""


def minOperations(n):
    """ Returns the minimum number of operations needed to result in exactly n H characters in the file."""
    operations = 0
    string = 1
    buffer = 0

    while string < n:
        if n % string == 0:
            buffer = string
            string *= 2
            operations += 1
        else:
            string += buffer
        operations += 1

    return operations
