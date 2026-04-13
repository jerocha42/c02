/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:34:23 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/13 20:25:53 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_char_printable(char my_char)
{
	return ((my_char >= 32) && (my_char < 127));
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_char_printable(str[i]))
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
	printf("%d\n", (ft_str_is_printable("")));
	printf("Should return 1 when string is 'Tudo OK!'\n");
	printf("%d\n", (ft_str_is_printable("Tudo OK!")));
	printf("Should return 0 when string is 'Erro\\n'\n");
	printf("%d\n", (ft_str_is_printable("Erro\n")));
	printf("Should return 0 when string is '\\t'\n");
	printf("%d\n", (ft_str_is_printable("\t")));
}

int	main(void)
{
	tests();
	return (0);
}
*/