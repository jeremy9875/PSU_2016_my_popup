/*
** my_popup.c for my_popup in /home/jeremy.elkaim/PSU_2016_my_popup
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Dec  5 15:20:25 2016 jeremy elkaim
** Last update Tue Dec 13 07:45:08 2016 jeremy elkaim
*/
#include <ncurses.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

int	main(int ac, char **av)
{
  int	u;
  int	i;
  
  u = 1;
  i = 1;
  while (av[i] != '\0')
    {
      i = i + 1;
      while (u != i)
	{
	  if (u < (i - 1))
	    {
	      my_putchar('t');
	    }
	  u = u + 1;
	  if (u == i)
	    {
	      my_putchar('\n');
	    }
     	}
    }
  return (0);
}
