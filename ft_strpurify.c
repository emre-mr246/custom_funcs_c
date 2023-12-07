/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpurify.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgul <emgul@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:43:00 by emgul             #+#    #+#             */
/*   Updated: 2023/12/07 03:24:07 by emgul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;

	if (ptr == NULL)
		return (malloc(size));
	if (!size)
		return (ptr);
	new_ptr = malloc(size);
	if (!new_ptr)
		return (NULL);
	ft_memcpy(new_ptr, ptr, size);
	return (new_ptr);
}

char	*ft_strpurify(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	if (!set[0])
		return (ft_strdup((char *)s1));
	result = (char *)malloc(sizeof(char) * (sizeof(s1) + 1));
	i = 0;
	while (*s1)
	{
		j = 0;
		while (set[j])
			if (*s1 != set[j++])
				result[i++] = *s1;
		s1++;
	}
	result[i] = '\0';
	return (ft_realloc(result, sizeof(result) + 1));
}
