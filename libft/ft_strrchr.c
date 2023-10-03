/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshoma <kshoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:30:33 by kshoma            #+#    #+#             */
/*   Updated: 2023/10/03 15:44:24 by kshoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft

char	*ftrchr(const char *s, int c)
{
	int	num;

	num = ftlen(s);
	while (num >= 0)
	{
		if (s[num] == (char)c)
			return ((char *)&s[num]);
		num--;
	}
	return (NULL);
}
