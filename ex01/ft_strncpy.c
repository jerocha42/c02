/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <jerocha-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 15:33:45 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/12 15:59:32 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	while (i < n)
	{
		dest[i] = '\0';
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
** 	ft_strncpy(copied_str, "Hello, Hola, Ola!", 100);
** 	printf("%s\n", copied_str);
** 	return (0);
** }
** 
*/