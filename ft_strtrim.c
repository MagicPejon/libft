/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:36:23 by amalbrei          #+#    #+#             */
/*   Updated: 2022/08/24 20:54:06 by amalbrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t		i;
	size_t		s1_len;
	char		*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	s1_len = ft_strlen(s1 + i);
	while (s1_len > 0 && ft_strchr(set, *(s1 + i + s1_len - 1)))
		s1_len--;
	str = ft_substr(s1, i, s1_len);
	return (str);
}
