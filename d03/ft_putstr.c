void ft_putchar(char c);
void ft_putstr(char *str)
{
  int i = 0;
  while (str[i])
    ft_putchar(str[i++]);
}
int main()
{
  char *str = "hello\n";
  ft_putstr(str);
  return 0;
}
