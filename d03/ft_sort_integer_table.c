void ft_sort_integer_table(int *tab, int size)
{
  int i = 1;
  int tmp;
  while (i < size)
    {
      if (i == 0)
	i++;
      if (tab[i] < tab[i - 1])
	{
	  tmp = tab[i];
	  tab[i] = tab[i-1];
	  tab[i-1] = tmp;
	  --i;
	}
      else
	++i;
    }
}
#include <stdio.h>
int main()
{
  int tab[4] = {6,4,0,1};
  ft_sort_integer_table(tab,4);
  int i = 0;
  while (i < 4)
    {
      printf("%d, ",tab[i]);
      ++i;
    }
  return 0;
}
