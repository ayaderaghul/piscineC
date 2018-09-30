void ft_putchar(char c);

void ft_print_numbers(void)
{
  char c = '0';
  while ('0' <= c && c <= '9')
    ft_putchar(c++);
}

int main()
{
  ft_print_numbers();
  return 0;
}
