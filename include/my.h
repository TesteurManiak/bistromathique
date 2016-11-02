#ifndef MY_H_
# define MY_H_

# define USAGE "echo 'calcul' | ./calc 'base' 'operateur' 'taille'\n"
# define SYNTAX "Syntax Error\n"

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_num
{
  int		value;
  char		*number;
}		t_num;

typedef struct	s_op
{
  char		plus;
  char		less;
  char		div;
  char		mod;
  char		mult;
  char		paren_o;
  char		paren_c;
}		t_op;

int	check_less(char *str);
int	my_strcmp(char *s1, char *s2);
int	my_strlen(char *str);

char	*my_strdup_res(char *result);
char	*my_strcpy(char *dest, char *src);
char	*my_strdup(char *src);

void	calc_add(char *nb1, char *nb2, char *result);
void	infin_mult(char *nb1, char *nb2);
void	del_neg(char *str);
void	send_nb_in_result(char *nb, char *result);
void	fill_zero(char *str, int len);
void	infin_subs(char *nb1, char *nb2);
void	aff_result(char *str);
void	my_putchar(char c);
void	infin_add(char *nb1, char *nb2);
void	bistro(char **av);
void	check_args(char **av);
void	my_putstr(char *str);
void	my_puterr(char *str);

#endif /* !MY_H_ */
