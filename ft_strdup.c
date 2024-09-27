/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 00:29:27 by natferna          #+#    #+#             */
/*   Updated: 2024/09/27 00:33:50 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
    if (!s)
        return (NULL);
    size_t len = ft_strlen(s);
    char *dup = malloc(len + 1); 
    if (!dup)
        return (NULL);
    char *p = dup;
    while ((*p++ = *s++)); 
    return (dup);
}
