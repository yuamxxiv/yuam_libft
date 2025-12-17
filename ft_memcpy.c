/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amancheg <amancheg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:57:09 by amancheg          #+#    #+#             */
/*   Updated: 2025/12/17 16:46:53 by amancheg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
        return (NULL);

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
int main(void)
{
    char src[] = "Copia questo testo!";
    char dest1[50]; // Buffer per la tua funzione
    char dest2[50]; // Buffer per la funzione originale

    // Copio usando la TUA funzione
    ft_memcpy(dest1, src, strlen(src) + 1); // +1 per copiare anche il \0 finale
    
    // Copio usando la funzione ORIGINALE
    memcpy(dest2, src, strlen(src) + 1);

    printf("Originale: %s\n", dest2);
    printf("Tua funz : %s\n", dest1);

    if (strcmp(dest1, dest2) == 0)
        printf("RESULT: OK \n\n");
    else
        printf("RESULT: KO \n\n");

    // Questo serve a provare che void * funzioni bene coi byte
    int nums_src[] = {10, 20, 30, 40, 50};
    int nums_dest[5];

    // sizeof(nums_src) calcola i byte totali (5 numeri * 4 byte = 20 byte)
    ft_memcpy(nums_dest, nums_src, sizeof(nums_src));

    int i = 0;
    printf("Numeri copiati: ");
    while (i < 5)
    {
        printf("%d ", nums_dest[i]);
        i++;
    }
    printf("\nExpected      : 10 20 30 40 50\n");
    
    if (nums_dest[2] == 30) // Controllo a campione
        printf("RESULT: OK\n\n");
    else
        printf("RESULT: KO\n\n");

    // Se la tua funzione non ha l'if (!dest && !src), qui crasherà (Segfault)
    void *risultato = ft_memcpy(NULL, NULL, 5);
    
    if (risultato == NULL)
        printf("Gestione NULL: OK (Non è crashato)\n");
    else
        printf("Gestione NULL: KO (Comportamento strano)\n");

    return (0);
}
