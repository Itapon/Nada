/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itapon <itapon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 11:35:40 by itapon            #+#    #+#             */
/*   Updated: 2025/09/22 17:50:57 by itapon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	ft_bzero(void *s,size_t n)
{
	size_t	i;
	char *ptr;

	ptr = (char *)s;
	i = 0;
	while(i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

int	main()
{
	char str[] = "123456789";
	size_t	n;

	n = 3;
	printf("el string original es: %s\n", str);
	ft_bzero(str, n);//le estamos diciendo que el p genérico apunta a str//
	//printf("el string se queda en: %s\n", str);
	int i = 0;
	while (i <=n)
	{
		printf("el string se queda en: %s\n", &str[i]);
		i++;
	}
	return (0);
}// al final lo que hacemos en el int main es recrear visulamente lo que
// hace la función//
