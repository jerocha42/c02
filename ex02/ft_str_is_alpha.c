/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 16:01:54 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/12 16:04:17 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_char_empty(char my_char)
{
	return (my_char == '\0');
}

int	is_char_a_letter(char my_char)
{
	int	is_lower_case;
	int	is_upper_case;

	is_lower_case = ((my_char >= 'a') && (my_char <= 'z'));
	is_upper_case = ((my_char >= 'A') && (my_char <= 'Z'));
	return (is_lower_case || is_upper_case);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	is_alpha = 0;
	if (is_char_empty(str[0]))
		is_alpha = 1;
	while (str[i] != '\0')
	{
		if (is_char_a_letter(str[i]))
		{
			is_alpha = 1;
		}
		i = i + 1;
	}
	return (is_alpha);
}

/*
** int	tests(void)
** {
** 	printf("Should return 1 when string is ''\n");
** 	printf("%d\n", (ft_str_is_alpha("")));
** 	printf("Should return 1 when string is 'a'\n");
** 	printf("%d\n", (ft_str_is_alpha("a")));
** 	printf("Should return 1 when string is 'abz'\n");
** 	printf("%d\n", (ft_str_is_alpha("abz")));
** 	printf("Should return 1 when string is 'CASA'\n");
** 	printf("%d\n", (ft_str_is_alpha("CASA")));
** 	printf("Should return 1 when string is 'Z'\n");
** 	printf("%d\n", (ft_str_is_alpha("Z")));
** 	printf("Should return 0 when string is '5'\n");
** 	printf("%d\n", (ft_str_is_alpha("5")));
** 	printf("Should return 0 when string is '?'\n");
** 	printf("%d\n", (ft_str_is_alpha("?")));
** }
** 
** int	main(void)
** {
** 	tests();
** 	return (0);
** }
** 
*/