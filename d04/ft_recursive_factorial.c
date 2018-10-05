int ft_recursive_factorial(int nb)
{
  if (nb < 0 || nb > 16)
    return 0;
  if (nb == 0)
    return 1;
  return(nb * ft_recursive_factorial(nb-1));
}
#include <stdio.h>
int main()
{
  int n = 16;
  int res = 0;
  res = ft_recursive_factorial(n);
  printf("res: %d\n", res);
  return 0;
}
