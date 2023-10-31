#include "../include/push_swap.h"

int	check_number_n_space_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 0)
		{
			if(str[i] != ' ' && str[i] != '+' && str[i] != '-')
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int	check_max_n_min_str(char *str)
{
	int	i;
	long n;
	char **str_array;
	str_array = ft_split(str, ' ');

	i = 0;
	while (str_array[i] != 0)
	{
		n = ft_atoi_change(str_array[i]);
		if (n < -2147483648 || n > 2147483647)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_for_dups_str(char *str)
{
	int	i;
	int j;
	char **str_array;
	str_array = ft_split(str, ' ');
	
	i = 0;
	while (str_array[i] != 0)
	{
		j = i + 1;
		while (str_array[j] != 0)
		{
			if (ft_atoi_change(str_array[i]) == ft_atoi_change(str_array[j]))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
