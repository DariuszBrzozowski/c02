/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	out;

	out = 1;
	while (*str != '\0' && out == 1)
	{
		if (*str >= 'a'  && *str <= 'z')
			out = 1;
		else if (*str >= 'A' && *str <= 'Z')
			out = 1;
		else
			out = 0;
		str++;
	}
	return (out);
}
/*
int main(void)
{
	char s[] = "dariusz!";
	printf("%d", ft_str_is_alpha(s));
	return (0);
}*/
