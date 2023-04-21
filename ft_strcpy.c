#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*result;

	if (dest == NULL)
	{
		printf("Error: destination string is NULL");
		return (NULL);
	}
	result = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (result);
}
