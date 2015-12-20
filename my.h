/*
** my.h for my.h in /home/fossae_t/rendu/CPE_2015_BSQ
**
** Made by Fossaert Thomas
** Login   <fossae_t@epitech.net>
**
** Started on  Mon Dec  7 18:06:19 2015 Fossaert Thomas
** Last update Sat Dec 19 14:19:58 2015 Fossaert Thomas
*/

#ifndef		_MY_H_
# define	_MY_H_

void		tableau(char *tab, char **tab2);
int		take(char *filepath, int x);
void		my_read(char *filepath, char *tab, int x);
int		count_line(char *tab);
int		count_column(char *tab);
void		square(char **tab, int li, int co);
void		check_map(char **tab2, int x, int y);
void		mallocking(char **tab2, int c, int l);
void		area_max(int *var, int *index, char **tab2);
void		display_bsq(char **tab, int **dem, int l, int c);
void		my_putchar(char c);
int		find_max(char **tab, int **dem, int c, int l);
void		find_square(char **tab, int **dem, int c, int l);
int		calc_min(int **dem, int i, int j);
void		fill_tab(char **tab, int **dem, int c, int l);
void		my_tab(char **tab, int c, int l);
void		final(char **tab, int **dem, int c, int l);
int		max_pos_x(char **tab, int **dem, int c, int l);
int		max_pos_y(char **tab, int **dem, int c, int l);

#endif		/* _MY_H_ */
