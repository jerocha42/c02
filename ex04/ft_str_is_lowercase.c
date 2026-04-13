/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 21:45:49 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/12 21:49:37 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_char_empty(char my_char)
{
	return (my_char == '\0');
}

int	is_char_a_lower_letter(char my_char)
{
	return ((my_char >= 'a') && (my_char <= 'z'));
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	if (is_char_empty(str[0]))
		return (1);
	while (str[i] != '\0')
	{
		if (!is_char_a_lower_letter(str[i]))
		{
			return (0);
		}
		i = i + 1;
	}
	return (1);
}

/*
void	tests(void)
{
	printf("Should return 1 when string is ''\n");
	printf("%d\n", (ft_str_is_lowercase("")));
	printf("Should return 1 when string is 'a'\n");
	printf("%d\n", (ft_str_is_lowercase("a")));
	printf("Should return 1 when string is 'abhjiz'\n");
	printf("%d\n", (ft_str_is_lowercase("abhjiz")));
	printf("Should return 0 when string is 'abc5xyz'\n");
	printf("%d\n", (ft_str_is_lowercase("abc5xyz")));
	printf("Should return 0 when string is 'abcDefg'\n");
	printf("%d\n", (ft_str_is_lowercase("abcDefg")));
	printf("Should return 0 when string is '?'\n");
	printf("%d\n", (ft_str_is_lowercase("?")));
}

int	main(void)
{
	tests();
	return (0);
}
*/