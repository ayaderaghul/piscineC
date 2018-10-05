#ifndef H_H
# define H_H

#include <unistd.h>
#include <stdio.h>

void init(int *array, int size);
void available_spot(int *board, int *spot);
int avail(int *spot);
void put_one(int *array, int posn);

void ft_putchar(char c);
void ft_putnbr(int n);
void ft_putstr(char *str);
void ft_putmess(char c, int n);

void print_array(int *array, int size);
int ft_eight_queens_puzzle(void);

#endif
