#include <stdio.h>

/**
 * summation -> A function that is being called
 *  to perform addition of two numbers
 * @a: first number variable
 * @b: second number variable
 * Return: add
 */

int summation(int a, int b)
{
int add = a + b;
return (add);
}

/**
 * main -> calls the function summation
 * with arguments
 * printf -> displays the result on screen
 */

int main()
{
int result = summation(25, 7);
printf("%d + %d = %d\n", 25, 7, result);
printf("%d + %d = %d\n", 15, 29, summation(15, 29));

return (0);
}
