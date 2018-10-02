#include <unistd.h>

int number(char c)
{
  if ('0' <= c && c <= '9')
    return 1;
  return 0;
}

int sign(char c)
{
  if (c == '-')
    return -1;
  if (c == '+')
    return 1;
  return 0;
}

int ft_atoi(char *str)
{
  int n = 0;
  int i = 0;
  int s = 0;

  while (str[i] == ' ')
    ++i;
  s = sign(str[i]);
  if (s)
    {
      if (!(number(str[i+1])))
	return 0;
      i++;
    }
  while (number(str[i]))
    {
      n = n * 10 + (str[i] - '0');
      ++i;
    }
  return (n * s);
}

#include <stdlib.h>
#include <stdio.h>

int main()
{
  char *str = "    -1042  ";
  char *str2 = "    -+12  ";
  printf("my atoi: %d, atoi: %d\nmyatoi: %d, atoi: %d\n", ft_atoi(str),atoi(str), ft_atoi(str2),atoi(str2));
  return 0;
}
  
	
	      
      
      
