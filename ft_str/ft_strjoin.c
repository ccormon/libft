/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:36:26 by marvin            #+#    #+#             */
/*   Updated: 2024/02/29 13:31:14 by ccormon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s0;
	size_t	i;
	size_t	j;

	if (!s2)
		return (ft_strdup(s1));
	if (!s1)
		return (ft_strdup(s2));
	s0 = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!s0)
		return (NULL);
	i = 0;
	if (s1)
	{
		while (s1[i])
		{
			s0[i] = s1[i];
			i++;
		}
	}
	j = 0;
	while (s2[j])
		s0[i++] = s2[j++];
	s0[i] = '\0';
	return (s0);
}
