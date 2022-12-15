#!/usr/bin/python3
<<<<<<< HEAD
def isPalindrome(mul):
    return(str(mul) == str(mul)[::-1])
=======

def isPalindrome(mul):
    return(str(mul) == str(mul)[::-1])

>>>>>>> 388f9406589a11e5910489283c0f09c194b8dd5e
def find_biggest_palindrome():
    biggestPal = 0
    for i in range(999, 100, -1):
        for j in range (999, 100, -1):
            mul = i * j
            if (isPalindrome(mul)):
                if mul > biggestPal:
                    biggestPal = mul
    return(biggestPal)
<<<<<<< HEAD
=======

>>>>>>> 388f9406589a11e5910489283c0f09c194b8dd5e
print(find_biggest_palindrome())
