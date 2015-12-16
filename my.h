/*
** my.h for my.h in /home/fossae_t/rendu/CPE_2015_BSQ
**
** Made by Fossaert Thomas
** Login   <fossae_t@epitech.net>
**
** Started on  Mon Dec  7 18:06:19 2015 Fossaert Thomas
** Last update Wed Dec 16 09:25:27 2015 Fossaert Thomas
*/

#ifndef		_MY_H_
# define	_MY_H_

typedef struct	s_square
{
  int	x;
  int	y;
  int	size;
  int	area;
}	t_square;

void		tableau(char *tab, char **tab2);
int		take(char *filepath, int x);
void		my_read(char *filepath, char *tab, int x);
int		count_line(char *tab);
int		count_column(char *tab);
void		display_square(char **tab2, int stock[1], int size, int *var);
int		*find_the_square(int c, int l, char **tab2, int *var);
void		check_bsq(char **tab2, int *var);

void		mallocking(char **tab2, int c, int l);

#endif		/* _MY_H_ */
