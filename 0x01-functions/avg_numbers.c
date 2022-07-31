#include <stdio.h>

/**
 * find_average -> performs the average of three numbers
 * @n1: the first number
 * @n2: the second number
 * @n3: the third number
 * @total_n: holds the count of the numbers
 * involved in finding average which is 3 i.e n1, n2, n3
 * @sum: does the addition of the 3 numbers
 * @avg: holds the variable that does the average
 * Return: avg
 */

float find_average(float n1, float n2, float n3)
{
int total_n = 3;
float sum = n1 + n2 + n3;
float avg = sum / total_n;
return (avg);
}

int main()
{
float result = find_average(12.5, 18.2, 43.9);
printf("The average of %.2f, %.2f and %.2f = %.2f\n", 12.5, 18.2, 43.9, result);
printf("The average of %d, %d and %d = %.2f\n", 40, 23, 14, find_average(40, 23, 14));

return (0);
}
