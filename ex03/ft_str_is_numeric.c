#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	out;

	out = 1;
	while (*str != '\0' && out == 1)
	{
		if (!(*str >= '0'  && *str <= '9'))
			out = 0;
		str++;
	}
	return (out);
}

int main(int argc, char *argv[])
{
        if (argc == 2)
        {
                printf("%d", ft_str_is_numeric(argv[1]));
        }
        return (0);
}

