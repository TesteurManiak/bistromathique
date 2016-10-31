#include "../include/my.h"

void	my_err(char c)
{
  write(2, &c, 1);
}

void	my_puterr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_err(str[i]);
      i++;
    }
  exit(-1);
}
