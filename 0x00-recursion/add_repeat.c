#include <stdio.h>

/**
 * addUp -> function to add a number num to all its (num - 1)
 * @num: function parameter to hold the number input
 * Return: (all)
 */

int addUp(int num)
{
int all = 0;
if (num > 0)
{
all = num + addUp(num - 1);
}
return (all);
}

int main()
{
int sum = addUp(10);
printf("The sum of numbers below %d and itself = %d\n", 10, sum);
printf("The sum of numbers below %d and itself = %d\n", 4, addUp(4));

return (0);
}
