/*
** bsq.c for bsq.c in /home/fossae_t/rendu/CPE_2015_BSQ/test
**
** Made by Fossaert Thomas
** Login   <fossae_t@epitech.net>
**
** Started on  Mon Dec 14 11:48:59 2015 Fossaert Thomas
** Last update Tue Dec 22 12:11:29 2015 Fossaert Thomas
*/

#include	<fcntl.h>
#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	"my.h"

void	my_malloc(int i, int j, int k, char **tab2)
{
  while (i <= j)
    {
      tab2[i] = malloc(sizeof(char) * k);
      i++;
    }
}

void	tableau(char *tab, char **tab2)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 1;
  k = 0;
  while (tab[i] != '\n')
    i++;
  while (tab[i] != '\0')
    {
      if (tab[i] == '\n')
	{
	  j++;
	  k = 0;
	}
      tab2[j][k] = tab[i];
      i++;
      k++;
    }
}

int	take(char *filepath, int x)
{
  int	fd;
  int	ret;
  char	buffer[x];

  fd = open(filepath, O_RDONLY);
  if (fd != -1)
    ret = read(fd, buffer, x);
  else
    return (-1),
  close(fd);
  return (ret);
}

void	my_read(char *filepath, char *tab, int x)
{
  int	fd;
  int	ret;
  char	buffer[x];
  int	i;

  i = 0;
  fd = open(filepath, O_RDONLY);
  if (fd != -1)
    {
      ret = read(fd, buffer, x);
      while (i < ret)
	{
	  tab[i] = buffer[i];
	  i++;
	}
    }
  close(fd);
}

int	main(int ac, char **av)
{
  int		ret;
  char		*tab;
  char		**tab2;
  int		i;
  int		j;
  int		k;

  if (ac != 2)
    return (-1);
  ret = take(av[1], 4096);
  tab = malloc(sizeof(char) * ret);
  my_read(av[1], tab, ret -1);
  i = 0;
  j = count_line(tab);
  k = count_column(tab);
  tab2 = malloc(sizeof(char *) * j);
  my_malloc(i, j, k, tab2);
  if (j > 500 && k > 500)
    return (-1);
  tableau(tab, tab2);
  my_tab(tab2, k, j);
  return (0);
}
