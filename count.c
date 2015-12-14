/*
** count.c for count in /home/fossae_t/rendu/CPE_2015_BSQ/test
**
** Made by Fossaert Thomas
** Login   <fossae_t@epitech.net>
**
** Started on  Mon Dec 14 12:12:14 2015 Fossaert Thomas
** Last update Mon Dec 14 13:04:20 2015 Fossaert Thomas
*/

#include	<fcntl.h>
#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	"my.h"

int		count_line(char *tab)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (tab[i] != '\0')
    {
      if (tab[i] == '\n')
	j++;
      i++;
    }
  return (j + 1);
}

int		count_column(char *tab)
{
  int	i;
  int	a;

  i = 0;
  a = 0;
  while (tab[i] != '\n')
    i++;
  i++;
  a = i;
  while (tab[i] != '\n' && tab[i] != '\0')
    {
      i++;
      a++;
    }
  return (a);
}
