#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*temp;
	
	temp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (temp);
}

int	main(void)
{
	char	str_in [] = "inDarek";
	char	str_out[20];
	ft_strcpy(str_out, str_in);
	printf("%s", str_out);
}

