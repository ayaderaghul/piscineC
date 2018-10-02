void ft_ft(int *nbr)
{
  *nbr = 42;
}

#include <stdio.h>
int main()
{
  int n;
  int *p = &n;
  ft_ft(p);
  printf("n: %d, *p: %d\n", n, *p);
  return 0;
}
