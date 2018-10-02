void ft_putchar(char c);

void init(int *array, int size)
{
  int i = 0;
  while (i < size)
    {
      array[i] = i;
      ++i;
    }
}

void print_array(int *array, int size)
{
  int i = 0;
  while (i < size)
    ft_putchar(array[i++]+'0');
}

void ft_print_combn(int n)
{
  if (n <=0 || n > 10)
    return;
  int i = 0;
  int A[n];
  init(A,n);

  while (A[0] <= 9 - n + 1)
    {
      i = n - 1;
      while (A[i] == 9 - (n - i) + 1)
	--i;
      print_array(A,n);
      if (i >= 0)
	{
	  A[i] = A[i] + 1;
	  while (i < n - 1)
	    {
	      A[i + 1] = A[i] + 1;
	      i++;
	    }
	}
      else
	break ;
      ft_putchar(',');
      ft_putchar(' ');
    }
}

int main()
{
  int n = -1;
  ft_print_combn(n);
  return 0;
}
