/*
** my.h for my.h in /home/fossae_t/rendu/CPE_2015_BSQ
**
** Made by Fossaert Thomas
** Login   <fossae_t@epitech.net>
**
** Started on  Mon Dec  7 18:06:19 2015 Fossaert Thomas
** Last update Mon Dec 14 17:08:13 2015 Fossaert Thomas
*/

#ifndef		_MY_H_
# define	_MY_H_

typedef struct	s_square
{
		int	x;
		int	y;
}		t_square;

void		tableau(char *tab, char **tab2);
int		take(char *filepath, int x);
void		my_read(char *filepath, char *tab, int x);
int		count_line(char *tab);
int		count_column(char *tab);
int		square(int j, int k, char **tab2);

#endif		/* _MY_H_ */
