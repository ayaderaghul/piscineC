#include "h.h"
void put_one(int *array, int posn)
{
  int size = 8;
  int x = posn / size;
  int y = posn % size;
  int i = 0;
  int j = 0;
  while (j < size)
    array[x * 8 + j++] = 1;
  while (i < size)
    array[i++ * 8 + y] = 1;
  i = x;
  j = y;
  while (i < size && j < size)
    array[i++ * 8 + j++] = 1;
  i = x;
  j = y;
  while (i >= 0 && j >= 0)
    array[i-- * 8 + j--] = 1;
  i = x;
  j = y;
  while (i < size && j >= 0)
    array[i++ * 8 + j--] = 1;
  i = x;
  j = y;
  while (i >= 0 && j < size)
    array[i-- * 8 + j++] = 1;
}
