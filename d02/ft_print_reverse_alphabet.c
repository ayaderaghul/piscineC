void ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
  char c = 'z';
  while (c >= 'a' && c <= 'z')
    ft_putchar(c--);
}

int main()
{
  ft_print_reverse_alphabet();
  return 0;
}
