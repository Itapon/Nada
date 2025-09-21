/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itapon <itapon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 20:17:19 by itapon            #+#    #+#             */
/*   Updated: 2025/09/21 21:04:42 by itapon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *s,int c, size_t n)
{
	size_t	i;
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while(i < n)
	{
		ptr[i] = (char)c;
		i++;
	}
	return (s);
}

int	main()
{
	char str[] = "astrabudua";

	printf("el string original es: %s\n", str);
	ft_memset(str, 'c', 5);//le estamos diciendo que el p genérico apunta a str y le hemos dado el resto de valores//
	printf("El string modificado es: %s\n", str);
}