#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "./libft/libft.h"

///////////////////////////////////////////////////////////////////////
//							Check for errors						 //
///////////////////////////////////////////////////////////////////////

/**
 * This file contains the declarations of functions used to check for errors in the input arguments of the push_swap program.
 * These functions are used to validate the input arguments before processing them further.
 * The functions check for errors such as invalid characters, duplicates, and out of range values.
 */
int	check_errors(int argc, char **argv);
int check_number_n_space_str(char *str);
int	check_max_n_min_str(char *str);
int	check_for_dups_str(char *str);
int	check_number_n_space_arr(int argc, char **argv);
int	check_max_n_min_arr(int argc, char **argv);
int	check_for_dups_arr(int argc, char **argv);

#endif