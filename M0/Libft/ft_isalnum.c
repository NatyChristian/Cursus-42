/*#include <stdio.h>*/
#include "libft.h"

int	ft_isalnum(char c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

/*int main(void)
{
    printf("a: %d\n", ft_isalnum('a'));
    printf("2: %d\n", ft_isalnum('2'));
    printf("Z: %d\n", ft_isalnum('Z'));
    printf("!: %d\n", ft_isalnum('!'));
    return (0);
}*/
