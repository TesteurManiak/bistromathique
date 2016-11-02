#include "../include/my.h"

int	main(int ac, char **av)
{
  if (ac == 3)
    {
      infin_add(av[1], av[2]);
      infin_subs(av[1], av[2]);
      infin_mult(av[1], av[2]);
    }
  /*if (ac == 4)
    {
      check_args(av);
      bistro(av);
      }*/
  else
    my_putstr(USAGE);
  return (0);
}
