#include "../include/push_swap.h"

int	check_errors(char *str)
{
	if (check_number_n_space(str) == 0 || check_max_n_min(str) == 0 || check_for_dups(str) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	check_number_n_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 0)
		{
			if(str[i] != ' ')
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int	check_max_n_min(char *str)
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

int	check_for_dups(char *str)
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
			if (ft_strcmp(str_array[i], str_array[j]) == 0)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
	{
		i++;
	}
	if (str1[i] != str2[i])
	{
		return (1);
	}
	return (0);
}
