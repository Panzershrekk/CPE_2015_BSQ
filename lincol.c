/*
** lincol.c for lincol in /home/fossae_t/rendu/CPE_2015_BSQ
**
** Made by Fossaert Thomas
** Login   <fossae_t@epitech.net>
**
** Started on  Thu Dec  3 17:08:50 2015 Fossaert Thomas
** Last update Thu Dec  3 18:07:50 2015 Fossaert Thomas
*/

#include        <unistd.h>
#include        <fcntl.h>

int	number_of_line(char *str)
{
  int	fd;
  char	buffer[4096];
  int	ret;
  int	l;

  i = 0;
  fd = open(filepath, O_RDONLY);
  if (fd != -1)
    return (-1);;
  ret = -1
    while (ret != 0)
      ret = read(fd, buffer, 4096);
  lines = my_getnbr(buff)
  close(fd);
  return (lines);
}

int	number_of_column()
{
}
