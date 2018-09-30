void ft_putchar(char c);

void ft_print_alphabet(void)
{
  char c = 'a';
  while('a' <= c && c <= 'z')
    ft_putchar(c++);
}

int main()
{
  ft_print_alphabet();
  return 0;
}
