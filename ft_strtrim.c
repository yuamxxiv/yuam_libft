/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amancheg <amancheg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:26:23 by amancheg          #+#    #+#             */
/*   Updated: 2025/12/12 22:12:41 by amancheg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	inizio;
	size_t	fine;

	if (!s1 || !set)
		return (NULL);
	inizio = 0;
	while (s1[inizio] != '\0' && ft_strchr(set, s1[inizio]))
		inizio++;
	len = ft_strlen(s1);
	if (inizio == len)
		return (ft_strdup(""));
	fine = len - 1;
	while (fine > inizio && ft_strchr(set, s1[fine]))
		fine--;
	return (ft_substr(s1, inizio, fine - inizio + 1));
}

// int main(void)
// {
//     char *s1 = "*+*+*+B*A*D+*+*+*+*";
//     char *set = "*+";
//     char *trims = ft_strtrim(s1, set);
//     printf("%s\n", trims);
//     return (0);
// }