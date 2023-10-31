#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "./libft/libft.h"

int ft_create_stack_str(char *str);

///////////////////////////////////////////////////////////////////////
//							Check for errors						 //
///////////////////////////////////////////////////////////////////////

int	check_errors(char *str);
int check_number_n_space(char *str);
int	check_max_n_min(char *str);
int	check_for_dups(char *str);
int	ft_strcmp(const char *s1, const char *s2);

#endif