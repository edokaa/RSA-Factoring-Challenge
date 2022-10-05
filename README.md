# RSA-Factoring-Challenge
RSA Factoring Challenge: RSA, HTTPS security and Prime Factorization

## Task 0: Factorize all the things!
    Factorize as many numbers as possible into a product of two smaller numbers.

    Usage: factors <file>

        where <file> is a file containing natural numbers to factor.
        One number per line
        You can assume that all lines will be valid natural numbers greater than 1
        You can assume that there will be no empy line, and no space before and after the valid number
        The file will always end with a new line

    Output format: n=p*q

        one factorization per line
        p and q don’t have to be prime numbers
    
    file: ./factors

## Task 1: RSA Factoring Challenge
    RSA Laboratories states that: for each RSA number n, there exist prime numbers p and q such that

        n = p × q.
    
    The problem is to find these two primes, given only n.
    This task is the same as task 0, except:

        p and q are always prime numbers
        There is only one number in the files
    
    Usage: rsa <file>
        where <file> is a file containing a natural number.

    file: ./rsa