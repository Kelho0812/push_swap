/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:58:44 by jorteixe          #+#    #+#             */
/*   Updated: 2023/10/31 12:26:18 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/push_swap.h"

int main(int argc, char **argv)
{
	(void)(argc);
	(void)(argv);
	// t_list	*a;
	// t_list	*b;

	// a = NULL;
	// b = NULL;
	if (argc == 1)
	{
		return (0);
	}
	else if (argc == 2)
	{
		if (check_errors(argv[1]) == 0)
		{
			printf("error");
			return (0);
		}
		else
		{
			printf("all gucci");
		}
		// ft_create_stack_str(argv[1]);
	}
	else if (argc > 2)
	{
		/* code */
	}
	return (0);
}

