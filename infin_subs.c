#include "my.h"
#include <stdio.h>

void	calc_subs(char *nb1, char *nb2, char *result)
{
  int	len1;
  int	len2;

  send_nb_in_result(nb1, result);
  len1 = my_strlen(result) - 1;
  len2 = my_strlen(nb2) - 1;
  while (len2 >= 0)
    {
      result[len1] = result[len1] - (nb2[len2] - 48);
      if (result[len1] < '0')
	{
	  result[len1] += 10;
	  result[len1 - 1] = result[len1 - 1] - 1;
	}
      len1--;
      len2--;
    }
}

void	infin_subs(char *nb1, char *nb2)
{
  char	*result;

  result = my_strdup_res(nb1);
  if (my_strcmp(nb1, nb2) == 0)
    fill_zero(result, my_strlen(result));
  else if (my_strlen(nb1) < my_strlen(nb2))
    {
      free(result);
      result = my_strdup_res(nb2);
      my_putchar('-');
      calc_subs(nb2, nb1, result);
    }
  else
    calc_subs(nb1, nb2, result);
  aff_result(result);
  free(result);
}
