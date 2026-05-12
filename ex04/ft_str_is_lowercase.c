/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	out;

	out = 1;
	while (*str != '\0' && out == 1)
	{
		if (!(*str >= 'a'  && *str <= 'z'))
			out = 0;
		str++;
	}
	return (out);
}
/*
int main(void)
{
	char s[] = "dariusz!";
	printf("%d", ft_str_is_lowercase(s));
	return (0);
}*/
