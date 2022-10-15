#include "libft.h"

int	main(void)
{
	char	c;
	char	*s;
	int		i;
	char	**str;

	s = "              loool                                     lol1";
	c = ' ';
	i = -1;
	//printf("%d\n", ft_words_count(s, c));
	str = ft_split(s, c);
	while (str[++i])
		printf("%s\n", str[i]);
	//while (1);
	free(str);
	return (0);
}