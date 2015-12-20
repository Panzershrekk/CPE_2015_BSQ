/*
** square.c for square in /home/fossae_t/rendu/CPE_2015_BSQ
**
** Made by Fossaert Thomas
** Login   <fossae_t@epitech.net>
**
** Started on  Mon Dec 14 16:00:28 2015 Fossaert Thomas
** Last update Sun Dec 20 15:20:20 2015 Fossaert Thomas
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	"my.h"

void	my_tab(char **tab, int c, int l)
{
  int	i;
  int	**dem;

  i = 0;
  dem = malloc(sizeof(int *) * l);
  while (i <= l)
    {
      dem[i] = malloc(sizeof(int) * c);
      i++;
    }
  fill_tab(tab, dem, c, l);
}

void	fill_tab(char **tab, int **dem, int c, int l)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (i != c)
    {
      if (tab[l][c] == '.')
	dem[l][c] = 1;
      if (tab[l][c] == 'o')
	dem[l][c] = 0;
      i++;
    }
  i = 0;
  while (j != l)
    {
      if (tab[l][c] == '.')
	dem[l][c] = 1;
      if (tab[l][c] == 'o')
	dem[l][c] = 0;
      j++;
    }
  find_square(tab, dem, c, l);
}

int	calc_min(int **dem, int i, int j)
{
  if (dem[j][i-1] < dem[j-1][i-1] && dem[j][i-1] < dem[j-1][i])
    return (dem[j][i-1]);
  else if (dem[j-1][i-1] < dem[j][i-1] && dem[j-1][i-1] < dem[j-1][i])
    return (dem[j-1][i-1]);
  else if (dem[j-1][i] < dem[j-1][i-1] && dem[j-1][i] < dem[j][i-1])
    return (dem[j-1][i]);
}

void	find_square(char **tab, int **dem, int c, int l)
{
  int	i;
  int	j;
  int	m;

  i = 0;
  j = 1;
  m = 0;
  while (j != l)
    {
      while (i != c + 1)
	{
	  if (tab[j][i] == '.')
	    {
	      m = calc_min(dem, i, j) + 1;
	      dem[j][i] = m;
	    }
	  if (tab[j][i] == 'o')
	    dem[j][i] = 0;
	  i++;
	}
      i = 1;
      j++;
    }
  final(tab, dem, c, l);
}

int	find_max(char **tab, int **dem, int c, int l)
{
  int	i;
  int	j;
  int	m;

  i = 0;
  j = 0;
  m = 0;
  while (j != l)
    {
      while (i != c)
	{
	  if (dem[j][i] > m)
	    m = dem[j][i];
	  i++;
	}
      i = 0;
      j++;
    }
  return (m);
}
