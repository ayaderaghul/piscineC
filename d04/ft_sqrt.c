
#include <stdio.h>

int ft_sqrt(int nb)
{
  //  printf("nb: %d\n",nb);
  if (nb < 0)
    return 0;
  if (nb == 0)
    return 0;
  int x0 = nb;
  int x1 = 0.5 * (x0 + nb / x0);
  while (x1 - x0 < -1 || x1 - x0 > 1)
    {
      x0 = x1;
      x1 = 0.5 * (x0 + nb / x0);
      //      printf("x0: %d, x1: %d\n",x0,x1);
    }
  if (x1 - x0 != 0)
    return 0;
  return x1;
}


int main()
{
  int tab[6] = {-1,0,1,9, 125,126};
  int i = 0;
  while (i < 6)
    printf("%d\n",ft_sqrt(tab[i++]));
  return 0;
}
