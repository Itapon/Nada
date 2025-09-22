/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itapon <itapon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 18:02:50 by itapon            #+#    #+#             */
/*   Updated: 2025/09/22 19:43:21 by itapon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclong;

	srclong = 0;
	i = 0;
	while (src[srclong] != '\0')
	{
		srclong++;
	}
	if (size == 0)
	{
		return (srclong);
	}
	while (i < size -1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclong);
}

int	main(void)
{
	char	dst[5];
	char	src[] = "vaquita";

	size_t	result = strlcpy(dst, src, 4);

	printf("la longitud del string original es: %zu\n", result);
	printf("el estring copiado se queda en: %s\n", dst);
}
