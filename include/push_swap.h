/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:51:23 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/15 16:59:53 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"
# include <limits.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct list
{
	int			nb;
	int			index;
	int			push_cost;
	bool		above_median;
	bool		cheapest;
	struct list	*target_node;
	struct list	*next;
	struct list	*previous;
}				t_stack;

///////////////////////////////////////////////////////////////////////
//							Check for errors							//
///////////////////////////////////////////////////////////////////////
char			**preparestrings(int argc, char **argv);
char			*ft_jointfree(char *str, char *buff);
int				check_errors(char **numbers_array);
int				check_number_n_space_str(char *str);
int				check_max_n_min_str(char *str);
int				check_for_dups_str(char **str);
///////////////////////////////////////////////////////////////////////
//							List Utils									//
///////////////////////////////////////////////////////////////////////

t_stack			*get_last_node(t_stack *stack);
void			create_stack(t_stack **stack, char **argv);
// void			create_stack_str(t_stack **stack, char *argv);
// void			create_stack_arr(t_stack **stack, int argc, char **argv);
void			create_node(t_stack **stack, char *str);
void			free_list_function(t_stack **stack);
void			free_arr_function(char **arr);

///////////////////////////////////////////////////////////////////////
//							Biggus								//
///////////////////////////////////////////////////////////////////////

void			biggus_sortus(t_stack **a, t_stack **b);
void			prepare_nodes_a(t_stack *a, t_stack *b);
void			move_a_to_b(t_stack **a, t_stack **b);
void			prepare_nodes_b(t_stack *a, t_stack *b);
void			move_b_to_a(t_stack **a, t_stack **b);
void			set_index_n_median(t_stack *stack);
void			set_target_a(t_stack *a, t_stack *b);
void			set_cost_a(t_stack *a, t_stack *b);
void			set_cheapest(t_stack *stack);
void			set_target_b(t_stack *a, t_stack *b);
void			prepare_push(t_stack **stack, t_stack *top_node,
					char stack_name);
t_stack			*find_max(t_stack *stack);
t_stack			*find_min(t_stack *stack);
t_stack			*get_cheapest(t_stack *stack);
void			min_is_top(t_stack **a);
///////////////////////////////////////////////////////////////////////
//							Swap utils								//
///////////////////////////////////////////////////////////////////////

void			swap_a(t_stack **stack_a);
void			rotate_a(t_stack **stack_a);
void			reverse_rotate_a(t_stack **stack_a);
void			swap_b(t_stack **stack_b);
void			rotate_b(t_stack **stack_b);
void			reverse_rotate_b(t_stack **stack_b);
void			push_a(t_stack **stack_a, t_stack **stack_b);
void			push_b(t_stack **stack_a, t_stack **stack_b);
void			ss(t_stack **stack_a, t_stack **stack_b);
void			rr(t_stack **stack_a, t_stack **stack_b);
void			rrr(t_stack **stack_a, t_stack **stack_b);

///////////////////////////////////////////////////////////////////////
//							Sorters										//
///////////////////////////////////////////////////////////////////////

bool			is_sorted(t_stack *stack);
int				ft_stacksize(t_stack *lst);
void			sort_three(t_stack **stack_a);

// Free

void			multiple_free(const char *format, ...);

#endif