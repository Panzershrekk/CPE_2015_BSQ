/*
** square.c for square in /home/fossae_t/rendu/CPE_2015_BSQ
**
** Made by Fossaert Thomas
** Login   <fossae_t@epitech.net>
**
** Started on  Mon Dec 14 16:00:28 2015 Fossaert Thomas
** Last update Wed Dec 16 09:45:06 2015 Fossaert Thomas
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	"my.h"

void	display_square(char **tab2, int stock[1], int size, int *var)
{
  int	i;
  int	j;
  int	x;
  int	y;

  i = 0;
  j = 1;
}

int	*find_the_square(int c, int l, char **tab2, int *var)
{
  int	fir;
  int	sec;

  var[2] = 0;
  while (var[2] <= var[3])
    {
      sec = l + var[3];
      while (l <= sec)
	{
	  fir = c + var[3];
	  while (c <= fir)
	    {
	      if (l > (var[1] - 1))
		return (var);
	      if (c > (var[0] -1))
		fir = 0;
	      if (tab2[l][c] != '.')
		return (var);
	      c++;
	    }
	  c = var[5];
	  l++;
	}
      l = var[6];
      var[2]++;
    }
  var[3]++;
  find_the_square(c, l, tab2, var);
  return (var);
}

void	check_bsq(char **tab2, int *var)
{
  int	i;
  int	j;
  int	size;
  int	stock[1];

  size = 0;
  j = 1;
  i = 0;
  while (j != var[1])
    {
      var[2] = 0;
      var[3] = 0;
      var[4] = 0;
      var[6] = j;
      while (i != var[0])
	{
	  var[5] = i;
	  var = find_the_square(i, j, tab2, var);
	  if (var[3] > size)
	    {
	      size = var[3];
	      stock[0] = var[5];
	      stock[1] = var[6];
	    }
	  i++;
	}
      i = 0;
      j++;
    }
  display_square(tab2, stock, size, var);
}

void	mallocking(char **tab2, int c, int l)
{
  int	*var;

  var = malloc(sizeof(int) * 6);
  var[0] = c;
  var[1] = l;
  var[2] = 0;
  var[3] = 0;
  var[4] = 0;
  check_bsq(tab2, var);
}
