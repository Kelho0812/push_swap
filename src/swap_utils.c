#include "../include/push_swap.h"

int	check_errors(int argc, char **argv)
{
	if (argc == 2)
	{
		if (check_number_n_space_str(argv[1]) == 0 || check_max_n_min_str(argv[1]) == 0 || check_for_dups_str(argv[1]) == 0)
		{
			printf("Error");
			return (0);
		}
	}
	if (argc > 2)
	{
		if (check_number_n_space_arr(argc, argv) == 0 || check_max_n_min_arr(argc, argv) == 0 || check_for_dups_arr(argc, argv) == 0)
		{
			printf("Error");
			return (0);
		}
	}
	return(1);
}
