#include "h.h"

void init(int *array, int size)
{
  int i = 0;
  while (i < size)
    array[i++] = -1;
}

void available_spot(int *board, int *spot)
{
  int i = 0;
  int j = 0;
  init(spot,64);

  while (i < 64)
    {
      if (board[i] == -1)
	spot[j++] = i;
      i++;
    }
}

int avail(int *spot)
{
  if (spot[0] != -1)
    return 1;
  return 0;
}
