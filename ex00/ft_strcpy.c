#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	char	*temp;
	
	temp = dest;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		printf("%c", src[i]);
		i++;
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

