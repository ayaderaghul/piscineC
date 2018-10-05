#include "h.h"

int ft_eight_queens_puzzle(void)
{
  int board[64];
  init(board, 64);
  int spots[8][64];
  int i = 0;
  while (i < 8)
    init(spots[i++], 64);
  int q = 0;
  int b = 0;
  int f = 0;
  int c = 0;
  int s = 0;
  while (f < 64)
    {
      ft_putmess('f', f);
      
      while (0 <= q && q <= 8)
	{
	  available_spot(board, spots[q]);
	  if (!(avail(spots[q])))
	    {
	      b++;
	      --q;
	    }
	  
	  s = spots[q][b];
	  
	  put_one(board, s);

	  ft_putstr("after put one: ");
	  print_array(board,64);
	  
	  ++q;
	}

      if (q == 8)
	++c;
      if (q == 0)
	++f;
    }
  return c;
}
