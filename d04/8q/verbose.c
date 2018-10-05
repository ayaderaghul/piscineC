#include "h.h"

void ft_putchar(char c)
{
  write(1,&c,1);
}

void ft_putnbr_p(int n)
{
  if (n > 9)
    {
      ft_putnbr(n / 10);
      ft_putnbr(n % 10);
    }
  else
    ft_putchar((n % 10) + '0');
}

void ft_putnbr_n(int n)
{
  if (n < -9)
    {
      ft_putnbr(n / 10);
      ft_putnbr(n % 10);
    }
  else
    ft_putchar((-n % 10) + '0');
}

void ft_putnbr(int n)
{
  if (n < 0)
    {
      ft_putchar('-');
      ft_putnbr_n(n);
    }
  else
    ft_putnbr_p(n);
}

void ft_putstr(char *str)
{
  int i = 0;
  while (str[i])
    ft_putchar(str[i++]);
}

void ft_putmess(char c, int n)
{
  ft_putchar(c);
  ft_putstr(": ");
  ft_putnbr(n);
  ft_putstr(", ");
  //  ft_putchar('\n');
}

void print_array(int *array, int size)
{
  int i = 0;
  while (i < size)
    ft_putnbr(array[i++]);
    //    printf("%d, ",array[i++]);
  ft_putchar('\n');
}
      
