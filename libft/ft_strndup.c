/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:06:59 by agheredi          #+#    #+#             */
/*   Updated: 2024/01/30 18:09:29 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *) malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0' && i < len)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
