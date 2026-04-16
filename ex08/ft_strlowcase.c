/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 21:23:44 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/15 21:29:49 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = to_lowercase(str[i]);
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
void	tests(void)
{
	char	str1[] = "A";
	printf("Should return 'a' when string is 'A'\n");
	printf("%s\n\n", ft_strlowcase(str1));
	char	str2[] = "Tudo OK!";
	printf("Should return 'tudo ok!' when string is 'Tudo OK!'\n");
	printf("%s\n", ft_strlowcase(str2));
}

int	main(void)
{
	tests();
	return (0);
}
*/