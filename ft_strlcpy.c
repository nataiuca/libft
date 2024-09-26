/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:42:57 by natferna          #+#    #+#             */
/*   Updated: 2024/09/26 14:42:58 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size) {
    size_t src_len = 0;
    
    // Calculate the length of src
    while (src[src_len]) {
        src_len++;
    }

    // If size is not zero, copy up to size - 1 characters
    if (size) {
        size_t i = 0;
        while (i < size - 1 && src[i]) {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';  // NUL-terminate the result
    }
    
    return src_len;  // Return the total length of src
}
