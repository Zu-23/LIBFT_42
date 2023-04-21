#include "libft.h"

int	delim_at_start(char *delim, char **srcString)
{
	while (**srcString && ft_strchr(delim, **srcString))
		(*srcString)++;
	if (**srcString == 0)
		return (-1);
	return (0);
}

char	*ft_strtok(char *srcString, char *delim)
{
	static char	*backup_string;
	char		*ret;

	if (!srcString)
		srcString = backup_string;
	if (!srcString)
		return (NULL);
	if (delim_at_start(delim, &srcString))
		return (NULL);
	ret = srcString;
	while (1)
	{
		if (*srcString == 0)
		{
			backup_string = srcString;
			return (ret);
		}
		if (ft_strchr(delim, *srcString))
		{
			*srcString = '\0';
			backup_string = srcString + 1;
			return (ret);
		}
		srcString++;
	}
}
