/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 20:35:37 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/15 21:09:22 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = to_uppercase(str[i]);
		i++;
	}
	return (str);
}

/*
#include <stdio.h>	
void	tests(void)
{
	char	str1[] = "a";
	printf("Should return 'A' when string is 'a'\n");
	printf("%s\n\n", ft_strupcase(str1));
	char	str2[] = "Tudo OK!";
	printf("Should return 'TUDO OK!' when string is 'Tudo OK!'\n");
	printf("%s\n", ft_strupcase(str2));
}

int	main(void)
{
	tests();
	return (0);
}
*/