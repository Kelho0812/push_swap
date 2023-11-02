/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:32:17 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/02 17:32:20 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	create_stack_str(n_list **stack, char *argv)
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
}

void	create_stack_arr(n_list **stack, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		create_node(stack, argv[i]);
		i++;
	}
}

void	create_node(n_list **stack, char *str)
{
	n_list	*last_node;
	n_list	*new_node;

	last_node = get_last_node(*stack);
	new_node = malloc(sizeof(n_list));
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

n_list	*get_last_node(n_list *stack)
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
