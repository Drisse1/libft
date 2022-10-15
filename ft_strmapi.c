#include "libft.h"

char func(unsigned int i, char c)
{
    (void)i;
    return (c);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int     i;
    char    *str;

    str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!str)
        return (0);
    i = -1;
    while (s[++i])
        str[i] = f(i, s[i]);
    str[i] = '\0';
    return (str);
}

int main(void)
{
    const char *s = "hello world";
    char (*p)(unsigned int, char) = func;
    char *str = ft_strmapi(s, p(3, 'v'));
    printf("%s", str);
    free(str);
    return (0);
}