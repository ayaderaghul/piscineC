void ft_swap(int *a, int *b)
{
  int c;
  int *tmp = &c;
  *tmp = *a;
  *a = *b;
  *b = *tmp;
}

#include <stdio.h>

int main()
{
  int a = 4;
  int b = 2;
  int *pa = &a;
  int *pb = &b;
  ft_swap(pa, pb);
  printf("*pa: %d, *pb: %d\n",*pa,*pb);
  return 0;
}
