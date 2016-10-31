#include "../include/my.h"

void	aff_result(char *result)
{
  int	i;

  i = 0;
  while (result[i] == '0' && result[i + 1] != '\0')
    i++;
  while (result[i] != '\0')
    {
      my_putchar(result[i]);
      i++;
    }
  my_putchar('\n');
}
