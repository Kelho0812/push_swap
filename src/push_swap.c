/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:58:44 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/02 17:43:48 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	n_list	*stack_a;
	n_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || check_errors(argc, argv) == 0)
		return (0);
	create_stack(&stack_a, argc, argv);
	push_b(&stack_a, &stack_b);
	push_b(&stack_a, &stack_b);
	push_b(&stack_a, &stack_b);
	rrr(&stack_a, &stack_b);
	while (stack_a)
	{
		printf("\n");
		printf("%d", stack_a->nb);
		stack_a = stack_a->next;
	}
	printf("\n-------------------");
	while (stack_b)
	{
		printf("\n");
		printf("%d", stack_b->nb);
		stack_b = stack_b->next;
	}
	return (0);
}
