#include "main.h"

/**
 * is_prime - function to check if a number is a prime number.
 * @n: the number to be checked
 * Return: True if n is prime otherwise False.
 */

bool is_prime(int n)
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr_lenght = sizeof(nums) / sizeof(nums[0]);
    int i = 0;
    bool is_p = false;

    for (i; i < arr_lenght; i++)
        {
            if (nums[i] == n || nums[i] == 1)
                continue;
            else if (n % nums[i] == 0)
            {
                is_p = false;
                break;
            }
            else if (n % nums[i] != 0)
            {
                is_p = true;
                continue;
            }
            printf("%d\n", i);
        }
    if (is_p)
    return true;
    return false;
}
