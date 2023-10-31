#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include <unistd.h>
# include "./libft/libft.h"

typedef struct	number_stack
{
	int			number;
	struct number_stack	*next;
	struct number_stack	*previous;
}n_stack;

#endif