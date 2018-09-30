void ft_putchar(char c);

void ft_print_comb2(void)
{
  int i = 0;
  int j = 0;
  int k = 0;
  int l = 0;

  while (i <= 9)
    {
      while (j <= 8)
	{
	  while (k <= 9)
	    {
	      l = k + 1;
	      while (l <= 9)
		{
		  ft_putchar(i+'0');
		  ft_putchar(j+'0');
		  ft_putchar(' ');
		  ft_putchar(k+'0');
		  ft_putchar(l+'0');
		  ft_putchar(',');
		  ft_putchar(' ');
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
