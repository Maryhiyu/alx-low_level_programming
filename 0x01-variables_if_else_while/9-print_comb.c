#include <stdio.h>
/**
 * main - Entry point
 *
 * description print
 *
 * Return: Always 0 (Sucsess)
 */
int main(void)
{
   int l;

   for (l = 0; l < 10; l++)
   {
    putchar(l + 48);
    if (l ! = 9)
    {
    putchar(',');
    putchar(' ');
    }
  }
  putchar('\n');
  return (0);
 }
