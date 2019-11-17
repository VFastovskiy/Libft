/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:49:27 by kcharlet          #+#    #+#             */
/*   Updated: 2019/09/12 19:36:44 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	char *tmp_ptr;
	unsigned char tmp_char;

	tmp_char = (unsigned char) c;
	tmp_ptr = (char *) b;
	i = 0;
	if (tmp_ptr == NULL)
		return (0);
	else 
	{
		while (i < len)
		{
			tmp_ptr[i] = tmp_char;
			i++;
		}
	}
	return (b);
}

int		main()
{
	char str[] = "Hello";
	ft_putstr(str);
	ft_putchar('\n');
	ft_memset(str, '1', 5);
	ft_putstr(ft_memset(str, '1', 5));
	ft_putchar('\n');
	return (0);
}
