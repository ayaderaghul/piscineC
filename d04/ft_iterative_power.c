int ft_iterative_power(int nb, int power)
{
  if (power < 0)
    return 0;
  if (power == 0)
    return 1;
  int i = 0;
  int res = 1;
  while (i < power)
    {
      res = nb * res;
      ++i;
    }
  return res;
}
#include <stdio.h>
int main()
{
  int nb = -6;
  int power = 3;
  int res = ft_iterative_power(nb, power);
  printf("res: %d\n", res);
  return 0;
}
