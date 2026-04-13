/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 21:50:37 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/12 21:53:09 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_char_empty(char my_char)
{
	return (my_char == '\0');
}

int	is_char_an_upper_letter(char my_char)
{
	return ((my_char >= 'A') && (my_char <= 'Z'));
}

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	if (is_char_empty(str[0]))
		return (1);
	while (str[i] != '\0')
	{
		if (!is_char_an_upper_letter(str[i]))
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
	printf("%d\n", (ft_str_is_uppercase("")));
	printf("Should return 1 when string is 'A'\n");
	printf("%d\n", (ft_str_is_uppercase("A")));
	printf("Should return 1 when string is 'ASDFGH'\n");
	printf("%d\n", (ft_str_is_uppercase("ASDFGH")));
	printf("Should return 0 when string is 'ASZX09V'\n");
	printf("%d\n", (ft_str_is_uppercase("ASZX09V")));
	printf("Should return 0 when string is 'MNbVC'\n");
	printf("%d\n", (ft_str_is_uppercase("MNbVC")));
	printf("Should return 0 when string is '?'\n");
	printf("%d\n", (ft_str_is_uppercase("?")));
}

int	main(void)
{
	tests();
	return (0);
}
*/