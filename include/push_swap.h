#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "./libft/libft.h"

typedef struct list
{
	int				nb;
	struct list	*next;
	struct list	*previous;
}					n_list;

///////////////////////////////////////////////////////////////////////
//							Check for errors						 //
///////////////////////////////////////////////////////////////////////

//This contains the declarations of functions used to check for errors in the input arguments of the push_swap program.
//These functions are used to validate the input arguments before processing them further.
//The functions check for errors such as invalid characters, duplicates, and out of range values.

int	check_errors(int argc, char **argv);
int check_number_n_space_str(char *str);
int	check_max_n_min_str(char *str);
int	check_for_dups_str(char *str);
int	check_number_n_space_arr(int argc, char **argv);
int	check_max_n_min_arr(int argc, char **argv);
int	check_for_dups_arr(int argc, char **argv);

///////////////////////////////////////////////////////////////////////
//							Creates lists							 //
///////////////////////////////////////////////////////////////////////

void create_stack(n_list **stack, int argc, char **argv);
void create_stack_str(n_list **stack, char *argv);
void create_stack_arr(n_list **stack, int argc, char **argv);
void create_node (n_list **stack, char *str);
n_list *get_last_node(n_list *stack);

///////////////////////////////////////////////////////////////////////
//							Swap utils							 	 //
///////////////////////////////////////////////////////////////////////

void swap_a(n_list **stack_a);
void rotate_a(n_list **stack_a);
void reverse_rotate_a(n_list **stack_a);
void swap_b(n_list **stack_b);
void rotate_b(n_list **stack_b);
void reverse_rotate_b(n_list **stack_b);
void push_a (n_list **stack_a, n_list **stack_b);
void push_b (n_list **stack_a, n_list **stack_b);
void ss (n_list **stack_a, n_list **stack_b);
void rr (n_list **stack_a, n_list **stack_b);
void rrr (n_list **stack_a, n_list **stack_b);

#endif