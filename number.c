/*
** number.c for number in /home/fossae_t/rendu/CPE_2015_BSQ
**
** Made by Fossaert Thomas
** Login   <fossae_t@epitech.net>
**
** Started on  Thu Dec  3 17:34:44 2015 Fossaert Thomas
** Last update Fri Dec  4 10:33:59 2015 Fossaert Thomas
*/

int     my_getnbr(char *str)
{
  int	nb;
  int	i;

  i = 0;
  nb = 0;
  while (str[i] != 0)
    {
      if (str[i] >= '0' && str[i] <= '9')
	nb = nb * 10 + str[i] - '0';
      i = i + 1;
    }
  if (str[0] == '-')
    nb = nb * (-1);
  return (nb);
}
