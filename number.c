/*
** number.c for number in /home/fossae_t/rendu/CPE_2015_BSQ
**
** Made by Fossaert Thomas
** Login   <fossae_t@epitech.net>
**
** Started on  Thu Dec  3 17:34:44 2015 Fossaert Thomas
** Last update Thu Dec  3 17:35:33 2015 Fossaert Thomas
*/

int     get_number(char *str, int i, int neg)
{
  int   nb;
  int   save;

  nb = 0;
  while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
      save = nb;
      if (save > (nb * 10 + (str[i] - '0')))
	return (0);
      nb = nb * 10 + (str[i++] - '0');
    }
  if (neg % 2 == 1)
    nb = nb * -1;
  return (nb);
}

int     my_getnbr(char *str)
{
  int   i;
  int   nb;
  int   neg;

  i = 0;
  neg = 0;
  while (str[i])
    {
      if (str[i] == '-')
	neg++;
      if (str[i] >= '0' && str[i] <= '9')
	{
	  nb = get_number(str, i, neg);
	  return (nb);
	}
      i++;
    }
  return (0);
}
