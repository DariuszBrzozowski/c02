#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			if (!(*str >= 'A' && *str <= 'Z'))
			{
				return (0);
			}
		}
		str++;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d", ft_str_is_alpha(argv[1]));
	}
	return (0);
}
