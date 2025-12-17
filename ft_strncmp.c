/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amancheg <amancheg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 15:51:38 by amancheg          #+#    #+#             */
/*   Updated: 2025/12/12 19:42:37 by amancheg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	s1 [] = "ArigatO";
	char	s2 [] = "AriGato";
	size_t	n = 3;

	printf("ft_strncmp:%d\n", ft_strncmp(s1, s2, n));
	printf("strncmp:%d\n", strncmp(s1, s2, n));
	return (0);
}*/
