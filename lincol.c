/*
** lincol.c for lincol in /home/fossae_t/rendu/CPE_2015_BSQ
**
** Made by Fossaert Thomas
** Login   <fossae_t@epitech.net>
**
** Started on  Thu Dec  3 17:08:50 2015 Fossaert Thomas
** Last update Fri Dec  4 11:48:32 2015 Fossaert Thomas
*/

#include	<fcntl.h>
#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>

int	count_first_line(char *str, int f)
{
  int	fd;
  char	buffer[4096];
  int	ret;

  fd = open(str, O_RDONLY);
  if (fd == -1)
    return (-1);
  read(fd, buffer, 4096);
  while(buffer[f] != '\n')
    f++;
  f++;
  close (fd);
  return (f);
}

int	number_of_line(char *str)
{
  int	fd;
  char	buffer[4096];
  int	ret;
  int	l;

  fd = open(str, O_RDONLY);
  if (fd == -1)
    return (-1);
  ret = -1;
  while (ret != 0)
    ret = read(fd, buffer, 4096);
  l = my_getnbr(buffer);
  close(fd);
  return (l);
}

int	number_of_column(char *str)
{
  int	fd;
  char	buffer[4096];
  int	ret;
  int	c;
  int	f;

  c = 0;
  f = 0;
  f = count_first_line(str, f);
  printf("%i\n", f);
  fd = open(str, O_RDONLY);
  if (fd == -1)
    return (-1);
  while (buffer[f] != '\n')
    {
      c++;
      f++;
    }
  close (fd);
  return (c);
}
