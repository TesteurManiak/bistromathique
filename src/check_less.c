#include "../include/my.h"

int	count_neg(char *str)
{
  int	i;
  int	neg;

  i = 0;
  neg = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '-')
	neg++;
      i++;
    }
  if (neg != 0 && (neg == 1 || neg % 3 == 0))
    return (2);
  return (0);
}
