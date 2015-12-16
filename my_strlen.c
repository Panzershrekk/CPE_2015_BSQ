/*
** my_strlen.c for my_strlen in /home/fossae_t/rendu/CPE_2015_BSQ
**
** Made by Fossaert Thomas
** Login   <fossae_t@epitech.net>
**
** Started on  Mon Dec 14 18:30:52 2015 Fossaert Thomas
** Last update Mon Dec 14 18:31:50 2015 Fossaert Thomas
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
