#include "../include/my.h"

void	del_neg(char *str)
{
  int	i;
  
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '-')
	str[i] = '0';
      i++;
    }
}
