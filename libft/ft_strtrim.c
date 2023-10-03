/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshoma <kshoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:04:06 by kshoma            #+#    #+#             */
/*   Updated: 2023/10/03 15:44:24 by kshoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft

char	*fttrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ftchr(set, (int)s1[start]) != NULL)
		start++;
	end = ftlen(s1);
	while (end > start && ftchr(set, (int)s1[end - 1]) != NULL)
		end--;
	result = (char *)malloc(end - start + 1);
	if (result == NULL)
		return (NULL);
	ftlcpy(result, s1 + start, end - start + 1);
	return (result);
}
