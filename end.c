/*
** end.c for end in /home/fossae_t/rendu/CPE_2015_BSQ
**
** Made by Fossaert Thomas
** Login   <fossae_t@epitech.net>
**
** Started on  Sun Dec 20 15:16:39 2015 Fossaert Thomas
** Last update Sun Dec 20 19:16:13 2015 Fossaert Thomas
*/

#include	<stdlib.h>
#include	<stdio.h>
#include	"my.h"

int	max_pos_y(char **tab, int **dem, int c, int l)
{
  int	i;
  int	j;
  int	m;

  i = 0;
  j = 0;
  m = find_max(tab, dem, c, l);
  while (j != l)
    {
      while (i != c)
	{
	  if (dem[j][i] == m)
	    return (j);
	  i++;
	}
      i = 0;
      j++;
    }
  return (j);
}

int	max_pos_x(char **tab, int **dem, int c, int l)
{
  int	i;
  int	j;
  int	m;

  i = 0;
  j = 0;
  m = find_max(tab, dem, c, l);
  while (j != l)
    {
      while (i != c)
	{
	  if (dem[j][i] == m)
	    return (i);
	  i++;
	}
      i = 0;
      j++;
    }
  return (i);
}

void	final(char **tab, int **dem, int c, int l)
{
  int	x;
  int	y;
  int	m;
  int	x_min;
  int	y_min;

  x = max_pos_x(tab, dem, c, l);
  y = max_pos_y(tab, dem, c, l);
  m = find_max(tab, dem, c, l);
  x_min = x - m;
  y_min = y - m;
  while (y != y_min)
    {
      while (x != x_min)
	{
	  tab[y][x] = 'x';
	  x--;
	}
      x = max_pos_x(tab, dem, c, l);
      y--;
    }
  display_bsq(tab, dem, c, l);
}

void	display_bsq(char ** tab, int **dem, int c, int l)
{
  int	i;
  int	j;

  i = 1;
  j = 2;
  while (j != l + 1)
    {
      while (i != c + 2)
	{
	  my_putchar(tab[j][i]);
	  i++;
	}
      i = 1;
      j++;
      my_putchar('\n');
    }
}
