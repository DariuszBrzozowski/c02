/*#include <stdio.h>*/

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
/*
int main(void)
{
	char s[] = "dariusz!";
	printf("%d", ft_str_is_alpha(s));
	return (0);
}*/
