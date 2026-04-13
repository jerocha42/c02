/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 21:40:31 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/12 21:46:06 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_char_empty(char my_char)
{
	return (my_char == '\0');
}

int	is_char_a_number(char my_char)
{
	return ((my_char >= '0') && (my_char <= '9'));
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	if (is_char_empty(str[0]))
		return (1);
	while (str[i] != '\0')
	{
		if (!is_char_a_number(str[i]))
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
	printf("%d\n", (ft_str_is_numeric("")));
	printf("Should return 1 when string is '9'\n");
	printf("%d\n", (ft_str_is_numeric("9")));
	printf("Should return 1 when string is '0290078'\n");
	printf("%d\n", (ft_str_is_numeric("0290078")));
	printf("Should return 0 when string is '000d000'\n");
	printf("%d\n", (ft_str_is_numeric("000d000")));
	printf("Should return 0 when string is 'abc'\n");
	printf("%d\n", (ft_str_is_numeric("abc")));
	printf("Should return 0 when string is '?'\n");
	printf("%d\n", (ft_str_is_numeric("?")));
}

int	main(void)
{
	tests();
	return (0);
}
*/