#!/usr/bin/python3
import sys

'''
TASK 1. RSA Factoring Challenge

RSA Laboratories states that: for each RSA number n,
there exist prime numbers p and q such that n = p * q.
The problem is to find these two primes, given only n.

Note:
    p and q are always prime numbers
    There is only one number in the files
'''

'''
is_prime - function to check if a number is a prime number.

@n: the number to be checked

Return: True if n is prime otherwise False.
'''


def is_prime(n):
    num = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    for j in num:
        if n == j or j == 1:
            continue
        elif n % j == 0:  # is not prime
            is_p = False
            break
        elif n % j != 0:  # is prime
            is_p = True
            continue
    return True if is_p else False


'''
factor - function to break an integer and find its prime factors

@n: integer assumed to be the product of two prime numbers.

Return: on successs, it returns "n=p*q"
where p and q are the prime factors of n.
otherwise None.
'''


def factor(n):
    for i in range(2, n + 1):
        if n % i == 0:
            if is_prime(int(n / i)) and is_prime(i):
                return("{}={}*{}".format(n, int(n / i), i))


'''
def main() - the programs entry point

Return: Always success
'''


def main():
    with open(sys.argv[1], 'r') as f:
        for i in f:
            if factor(int(i)):
                print(factor(int(i)))


if __name__ == '__main__':
    main()
