int ft_recursive_power(int nb, int power)
{
  if (power < 0)
    return 0;
  if (power == 0)
    return 1;
  return(nb*ft_recursive_power(nb,power - 1));
}

#include <stdio.h>
int main()
{
  int nb = 6;
  int power = 3;
  int res = ft_recursive_power(nb, power);
  printf("res: %d\n", res);
  return 0;
}
