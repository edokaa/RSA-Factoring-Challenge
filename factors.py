#!/usr/bin/python3
import sys

'''
TASK 0. Factorize all the things!

Factorize as many numbers as possible
into a product of two smaller numbers.

Output format: n=p*q
    one factorization per line
    p and q don’t have to be prime numbers
'''

'''
factor - function to break an integer and find its two smallest factors

@n: integer to be factorized.

Return: always "n=p*q"
'''


def factor(n):
    for i in range(2, n + 1):
        if n % i == 0:
            return "{}={}*{}".format(n, int(n / i), i)


'''
def main() - the programs entry point

Return: Always success
'''


def main():
    with open(sys.argv[1], 'rb') as f:
        for i in f:
            print(factor(int(i)))


if __name__ == '__main__':
    main()
