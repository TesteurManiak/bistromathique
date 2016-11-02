#include "../include/my.h"
#include <stdio.h>

void	send_nb_in_result(char *nb, char *result)
{
  int	len1;
  int	len2;

  len1 = my_strlen(nb) - 1;
  len2 = my_strlen(result) - 1;
  while (len1 >= 0)
    {
      result[len2] += (nb[len1] - 48);
      len1--;
      len2--;
    }
}

void	fill_zero(char *str, int len)
{
  int	i;

  i = 0;
  while (i < len)
    {
      str[i] = '0';
      i++;
    }
  str[i] = '\0';
}

char	*my_strdup_res(char *str)
{
  char	*s;

  if ((s = malloc(my_strlen(str) + 1)) == 0)
    return (0);
  fill_zero(s, my_strlen(str) + 1);
  return (s);
}

void	calc_add(char *nb1, char *nb2, char *result)
{
  int	len1;
  int	len2;

  send_nb_in_result(nb2, result);
  len1 = my_strlen(nb1) - 1;
  len2 = my_strlen(result) - 1;
  while (len1 >= 0)
    {
      result[len2] += (nb1[len1] - 48);
      if (result[len2] - 48 > 9)
	{
	  result[len2] = (result[len2] - 48) % 10 + 48;
	  result[len2 - 1] += 1;
	}
      len1--;
      len2--;
    }
}

void	infin_add(char *nb1, char *nb2)
{
  char	*result;

  result = my_strdup_res(nb1);
  if (my_strlen(nb1) < my_strlen(nb2))
    {
      free(result);
      result = my_strdup_res(nb2);
      calc_add(nb2, nb1, result);
    }
  else
    calc_add(nb1, nb2, result);
  aff_result(result);
  free(result);
}
