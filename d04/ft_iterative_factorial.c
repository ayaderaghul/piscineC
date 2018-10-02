int ft_iterative_factorial(int nb)
{
  if (nb < 0 || nb > 16)
    return 0;
  if (nb == 0)
    return 1;
  int res = 1;
  while (nb > 0)
    {
      res = res * nb;
      nb = nb - 1;
    }
  return res;
}

#include <stdio.h>

int main()
{
  int n = 17;
  printf("res: %d\n", ft_iterative_factorial(n));
  return 0;
}
      
