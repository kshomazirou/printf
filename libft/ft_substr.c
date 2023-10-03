/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshoma <kshoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:56:28 by kshoma            #+#    #+#             */
/*   Updated: 2023/10/03 15:40:09 by kshoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft

char	*ftstr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	i = 0;
	if (s == NULL || start >= ftlen(s))
		return (ftdup(""));
	if (len > ftlen(s) - start)
		len = ftlen(s) - start;
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i + start] != '\0')
	{
		result[i] = s[i + start];
		i++;
	}
	result[i] = '\0';
	return (result);
}
