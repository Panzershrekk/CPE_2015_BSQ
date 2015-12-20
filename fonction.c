/*
** fonction.c for fonction in /home/fossae_t/rendu/CPE_2015_BSQ
**
** Made by Fossaert Thomas
** Login   <fossae_t@epitech.net>
**
** Started on  Thu Dec 17 16:24:16 2015 Fossaert Thomas
** Last update Thu Dec 17 16:26:40 2015 Fossaert Thomas
*/

#include	<unistd.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}
