#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strdup(char *str)
{
	int		array_size;
	int		counter;
	char	*array;

	array_size = ft_strlen(str);
	array = (char *)malloc(array_size * sizeof(char) + 1);
	if (!array)
		return ();
	counter = 0;
	while (str[counter] != '\0')
	{
		array[counter] = str[counter];
		counter++;
	}
	array[counter] = '\0';
	return (array);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					counter;
	struct s_stock_str	*array;

	array = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!array)
		return (NULL);
	counter = 0;
	while (counter < ac)
	{
		array[counter].size = ft_strlen(av[counter]);
		array[counter].str = av[counter];
		array[counter].copy = ft_strdup(av[counter]);
		counter++;
	}
	array[counter].str = 0;
	array[counter].copy = 0;
	return (array);
}
