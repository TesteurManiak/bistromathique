#include "../include/my.h"

void	init_data(t_op *data, char *av)
{
  data->paren_o = av[0];
  data->paren_c = av[1];
  data->plus = av[2];
  data->less = av[3];
  data->mult = av[4];
  data->div = av[5];
  data->mod = av[6];
}

void	bistro(char **av)
{
  t_op	data;

  init_data(&data, av[2]);
}
