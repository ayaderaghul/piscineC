void ft_putchar(char c);

void ft_put_positive_nbr(int nb)
{
  if (nb > 9)
    {
      ft_put_positive_nbr(nb / 10);
      ft_put_positive_nbr(nb % 10);
    }
  else
    ft_putchar(nb + '0');
}

void ft_put_negative_nbr(int nb)
{
  if (nb < -9)
    {
      ft_put_negative_nbr(nb / 10);
      ft_put_negative_nbr(nb % 10);
    }
  else
    ft_putchar(-nb + '0');
}

void ft_putnbr(int nb)
{
  if (nb < 0)
    {
      ft_putchar('-');
      ft_put_negative_nbr(nb);
    }
  else
    ft_put_positive_nbr(nb);
}

int main()
{
  int m = 1042;
  int n = -2147483648;
  ft_putnbr(m);
  ft_putchar('\n');
  ft_putnbr(n);
  ft_putchar('\n');
  return 0;
}
