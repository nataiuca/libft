/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:56:25 by natferna          #+#    #+#             */
/*   Updated: 2024/09/26 14:56:27 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strrchr(const char *s, int c) {
    const char *last = NULL;

    while (*s) {
        if (*s == (char)c) {
            last = s;  // Update last to the current matching character
        }
        s++;  // Move to the next character
    }

    // Check if c is the null terminator '\0'
    if (c == '\0') {
        return (char *)s;  // Return pointer to the null terminator
    }

    return (char *)last;  // Return the last occurrence or NULL if not found
}
