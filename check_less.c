#include "my.h"

int	check_less(char *str)
{
  int	i;
  int	less;

  i = 0;
  less = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '-')
	less++;
      i++;
    }
  if (less % 2 == 0)
    return (1);
  return (0);
}
