#include "../include/my.h"

void	check_doublon(char *str)
{
  int	i;
  int	j;

  while (*str)
    {
      i = 1;
      j = my_strlen(str);
      while (i < j)
	{
	  if (str[0] == str[i])
	    my_puterr(SYNTAX);
	  i++;
	}
      str++;
    }
}

void	check_args(char **av)
{
  if (my_strlen(av[2]) != 7 || my_strlen(av[1]) < 2)
    my_puterr(SYNTAX);
  check_doublon(av[1]);
  check_doublon(av[2]);
}
