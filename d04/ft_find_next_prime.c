int ft_is_prime(int nb)
{
  if (nb <= 1)
    return 0;
  int i = 2;
  while (i <= nb/2)
    {
      if (nb % i == 0)
	return 0;
      ++i;
    }
  return 1;
}

int ft_find_next_prime(int nb)
{
  int i = nb;
  while (i <= 2147483647)
    {
      if (ft_is_prime(i))
	return i;
      else
	++i;
    }
  return i;
}
#include <stdio.h>
int main()
{
  int tab[] = {-1,0,5,100,90000,2147483645};
  int i = 0;
  while (i < 6)
    {
      printf("%d: %d\n",tab[i],ft_find_next_prime(tab[i]));
      ++i;
    }
  return 0;
}
