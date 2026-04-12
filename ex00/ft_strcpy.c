/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 15:17:17 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/12 15:30:39 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}

/*
** int	main(void)
** {
** 	char	*copied_str;
** 
** 	printf("%s\n", copied_str);
** 	ft_strcpy(copied_str, "My beautiful string");
** 	printf("%s\n", copied_str);
** 	return (0);
** }
** 
*/