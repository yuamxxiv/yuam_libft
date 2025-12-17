/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amancheg <amancheg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:02:11 by amancheg          #+#    #+#             */
/*   Updated: 2025/12/12 19:41:51 by amancheg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		v[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = v[i];
		i++;
	}
	return (dest);
}

/*int main(void) 
{
    char src[20] = "ABCDEFGH";
    char ss[20] = "ABCDEFGH";
    printf("Prima di memmove: %s\n", src);

    ft_memmove(src, src, 6);
	memmove(ss, ss, 6);

    printf("Dopo memmove:  %s\n", src);
	printf("Dopo memmove:  %s\n", ss);
    return 0;
}*/
