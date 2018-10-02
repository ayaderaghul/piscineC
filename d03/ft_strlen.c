int ft_strlen(char *str)
{
  int i = 0;
  while (str[i])
    ++i;
  return i;
}
#include <stdio.h>
int main()
{
  char *str = "hello";
  printf("str: %s\nft_strlen: %d\n",str, ft_strlen(str));
  return 0;
}
