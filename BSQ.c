/*
** BSQ.c for bsq in /home/fossae_t/rendu/CPE_2015_BSQ
**
** Made by Fossaert Thomas
** Login   <fossae_t@epitech.net>
**
** Started on  Tue Dec  1 17:24:00 2015 Fossaert Thomas
** Last update Fri Dec  4 11:53:41 2015 Fossaert Thomas
*/

#include	<fcntl.h>
#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>

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
      size[0] = number_of_line(argv[1]);
      size[1] = number_of_column(argv[1]);
      printf("%i\n", size[0]);
      printf("%i\n", size[1]);
      /*
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
      */
    }
}
