void ft_putchar(char c);

void ft_print_comb2(void)
{
  int i = 0;
  int j = 0;
  int k = 0;
  int l = 0;

  while (i <= 9)
    {
      j = 0;
      while (j <= 8)
	{
	  k = i;
	  while (k <= 9)
	    {
	      if (i == k)
		l = j + 1;
	      else
		l = 0;
	      while (l <= 9)
		{
		  ft_putchar(i+'0');
		  ft_putchar(j+'0');
		  ft_putchar(' ');
		  ft_putchar(k+'0');
		  ft_putchar(l+'0');
		  if (!(i == 9 && j == 8 && k == 9 && l == 9))
		    {
		      ft_putchar(',');
		      ft_putchar(' ');
		    }
		  ++l;
		}
	      ++k;
	    }
	  ++j;
	}
      ++i;
    }
}

int main()
{
  ft_print_comb2();
  return 0;
}
