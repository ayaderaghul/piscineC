void ft_putchar(char c);

void ft_is_negative(int n)
{
  if (n < 0)
    ft_putchar('N');
  else
    ft_putchar('P');
}

int main()
{
  int i = -3;
  while (i < 3)
    ft_is_negative(i++);
  return 0;
}
