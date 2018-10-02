int ft_strlen(char *str)
{
  int i = 0;
  while (str[i])
    ++i;
  return i;
}

char *ft_strrev(char *str)
{
  int l = ft_strlen(str);
  char res[l];
  int i = 0;
  int j = l - 1;
  while (str[i])
    res[j--] = str[i++];
  str = res;
  return str;
}

#include <stdio.h>
int main()
{
  char *str = "hello";
  printf("res: %s\n", ft_strrev(str));
  return 0;
}
  
