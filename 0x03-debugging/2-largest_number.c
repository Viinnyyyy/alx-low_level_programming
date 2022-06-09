#include "main.h"

/**
 *largest_number - returns the largest of 3 numbers
 *@a: first integer
 *@b: second integer
 *@c: third integer
 *Return: largest number
 */

int largest_number(int a, int b, int c)
{
  int largest;

  if (a > b && (b > c || c > b) && a > c)
    {
      largest = a;
    }
  else if (b > a && (a > c || c > a)  && b > c)
    {
      largest = b;
    }
  else if (c > a && c > b && (a > b || b > a))
    {
      largest = c;
    }

  return (largest);
}
