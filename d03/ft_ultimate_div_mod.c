void ft_ultimate_div_mod(int *a, int *b)
{
  int tmp;
  int *pt = &tmp;
  *pt = *a / *b;
  *b = *a % *b;
  *a = *pt;
}

#include <stdio.h>

int main()
{
  int a = 10;
  int b = 3;
  int *pa = &a;
  int *pb = &b;
  ft_ultimate_div_mod(pa,pb);
  printf("*pa: %d, *pb: %d\n", *pa, *pb);
  return 0;
}
