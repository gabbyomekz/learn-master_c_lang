#include <stdio.h>

/**
 * factorial -> function definition that performs
 * the factorial of a number
 * @n: function parameter of type int
 * Return: exit successfully with 0
 */

int factorial(int n)
{
int ret = 1;
if (n != 0 && n != 1)
{
ret = n * factorial(n - 1);
}
return (ret);
}

// main -> calls the function factorial(int n)
// factorial -> A function that calls itself withim the same function hence recursion

int main()
{
int result = factorial(5);
printf("Factorial of %d = %d\n", 5, result);
// int result variable calls the function factorial(int n) with an argument n
// You can choose to use the function factorial(int n) directly with argument n
printf("Factorial of %d = %d\n", 3, factorial(3));

return (0);
}
