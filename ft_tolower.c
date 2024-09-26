/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:58:14 by natferna          #+#    #+#             */
/*   Updated: 2024/09/26 14:58:16 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c) {
    // Check if c is a lowercase letter (ASCII range 'A' to 'Z')
    if (c >= 'A' && c <= 'Z') {
        c += 32;  // Convert to uppercase by adjusting the ASCII value
    }
    
    return c;  // Return the converted or unchanged character
}
