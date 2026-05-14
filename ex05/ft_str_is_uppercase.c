#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str =! '\0'){
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);

}

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%d", ft_str_is_uppercase(argv[1]));
	}
	return (0);
}
