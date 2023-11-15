/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:58:44 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/15 18:05:52 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**strs;

	stack_a = NULL;
	stack_b = NULL;
	strs = preparestrings(argc, argv);
	if (argc == 1 || !strs[1][0] || check_errors(strs) == 0)
		return (multiple_free("%b", strs), 1);
	create_stack(&stack_a, strs);
	if (!is_sorted(stack_a))
	{
		if (ft_stacksize(stack_a) == 2)
			swap_a(&stack_a);
		else if (ft_stacksize(stack_a) == 3)
			sort_three(&stack_a);
		else
			biggus_sortus(&stack_a, &stack_b);
	}
	free_list_function(&stack_a);
	return (0);
}

char	**preparestrings(int argc, char **argv)
{
	int		i;
	char	*number_str;
	char	**strs;

	number_str = ft_strdup("");
	i = 1;
	while (i < argc)
	{
		number_str = ft_jointfree(number_str, argv[i]);
		number_str = ft_jointfree(number_str, " ");
		i++;
	}
	strs = ft_split(number_str, ' ');
	free(number_str);
	return (strs);
}

char	*ft_jointfree(char *str, char *buff)
{
	char	*tmp;

	tmp = ft_strjoin(str, buff);
	free(str);
	return (tmp);
}
