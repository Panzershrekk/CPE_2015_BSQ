/*
** BSQ.c for bsq in /home/fossae_t/rendu/CPE_2015_BSQ
**
** Made by Fossaert Thomas
** Login   <fossae_t@epitech.net>
**
** Started on  Tue Dec  1 17:24:00 2015 Fossaert Thomas
** Last update Thu Dec  3 17:51:39 2015 Fossaert Thomas
*/

#include	<fcntl.h>
#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	"my.h"


void	fctionread(char *array, int lenght, char *filepath)
{
  int	fd;
  char	buffer[4096];

  fd = open(filepath, O_RDONLY);
  if (fd == 3)
    read(fd, array, lenght);
  close(fd);
}
int	counting(char *filepath)
{
  int	fd;
  char	buff[4096];
  int	count;

  fd = open(filepath, O_RDONLY);
  count = read(fd, buf, 4096);
  close(fd);
  return(count);
}

int	main(int argc, int **argv)
{
  int	i;
  int	*size;
  char	**map;

  i = 0;
  if (argc != 2)
    return (-1);
  else
    {
      size = malloc(sizeof(int) * 2);
      size[0] = number_of_line(av[1]);
      size[1] = number_of_column(av[1]);
      map = malloc(sizeof(char *) * size[0] + 1);
      while (i < size[1])
	{
	  map[i] = malloc(sizeof(char) * size[1] + 1);
	  i++;
	}
      free(map);
    }
  return (0);
}
