#include "../h.h"

int main()
{
  ft_putstr("test init: ");
  int array[10];
  init(array,10);
  print_array(array, 10);

  
  int board[64];
  init(board,64);

  int spot[64];
  init(spot,64);

  available_spot(board,spot);
  ft_putstr("avail spot: ");
  print_array(spot,64);
  
  put_one(board,0);
  ft_putstr("board after put one: ");
  available_spot(board,spot);
  print_array(board,64);

  ft_putstr("spot after put one: ");
  print_array(spot,64);

  ft_putstr("avail? :");
  ft_putnbr(avail(array));
  ft_putchar('\n');
  
  return 0;
}
