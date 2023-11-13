/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:32:17 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/03 13:56:53 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	create_stack_str(t_stack **stack, char *argv)
{
	char	**argv_array;
	int		i;

	argv_array = ft_split(argv, ' ');
	i = 0;
	while (argv_array[i] != 0)
	{
		create_node(stack, argv_array[i]);
		i++;
	}
	i = 0;
	while (argv_array[i] != 0)
	{
		free(argv_array[i]);
		i++;
	}
	free(argv_array);
}

void	create_stack_arr(t_stack **stack, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		create_node(stack, argv[i]);
		i++;
	}
}

void	create_node(t_stack **stack, char *str)
{
	t_stack	*last_node;
	t_stack	*new_node;

	last_node = get_last_node(*stack);
	new_node = calloc(1, sizeof(t_stack));
	if (!new_node)
	{
		return ;
	}
	new_node->nb = ft_atoi_change(str);
	new_node->next = NULL;
	new_node->previous = last_node;
	if (!last_node)
	{
		*stack = new_node;
	}
	else
	{
		last_node->next = new_node;
	}
}

t_stack	*get_last_node(t_stack *stack)
{
	if (!stack)
	{
		return (NULL);
	}
	while (stack->next != NULL)
	{
		stack = stack->next;
	}
	return (stack);
}

void	free_list_function(t_stack **stack)
{
	t_stack	*ptr;

	while ((*stack) != NULL)
	{
		ptr = (*stack)->next;
		free(*stack);
		*stack = ptr;
	}
}
