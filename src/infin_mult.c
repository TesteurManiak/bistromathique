#include "../include/my.h"

int	get_last_num(char *nb)
{
  int	i;

  i = my_strlen(nb);
  while (nb[i] > '0')
    i--;
  return (i);
}

void	calc_mult(char *nb1, char *nb2, char *res)
{
  int	pos_last;

  pos_last = get_last_num(nb2);
  while (nb2[pos_last] > '0')
    {
      calc_add(nb1, nb1, res);
      nb2[pos_last]--;
    }
}

void	infin_mult(char *nb1, char *nb2)
{
  char	*res;

  res = malloc(sizeof(char) * (my_strlen(nb1) + my_strlen(nb2)));
  fill_zero(res, my_strlen(nb1) + my_strlen(nb2));
  calc_mult(nb1, nb2, res);
  aff_result(res);
  free(res);
}
