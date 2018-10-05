int ft_fibonacci(int index)
{
  if (index < 0)
    return -1;
  if (index == 0)
    return 0;
  if (index == 1)
    return 1;
  return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
#include <stdio.h>
int main()
{
  int i = -1;
  while (i < 5)
    printf("%d\n", ft_fibonacci(i++));
  return 0;
}
