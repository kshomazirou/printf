/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshoma <kshoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:10:44 by kshoma            #+#    #+#             */
/*   Updated: 2023/10/03 15:44:20 by kshoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	const char	*text;
	const char	*text2;
	size_t		num;

	num = 0;
	text = (const char *)buf1;
	text2 = (const char *)buf2;
	while (num < n)
	{
		if ((unsigned char)text[num] != (unsigned char)text2[num])
			return ((unsigned char)text[num] - (unsigned char)text2[num]);
		num++;
	}
	return (0);
}
