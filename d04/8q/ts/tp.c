#include "../h.h"

int main()
{
  int board[64];
  init(board,64);
  ft_putstr("initial board: ");
  print_array(board,64);
  
  put_one(board,0);
  ft_putstr("after one queen: ");
  print_array(board,64);

  return 0;
}
  
