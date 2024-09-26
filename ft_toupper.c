/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:58:34 by natferna          #+#    #+#             */
/*   Updated: 2024/09/26 14:58:35 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c) {
    // Check if c is a lowercase letter (ASCII range 'a' to 'z')
    if (c >= 'a' && c <= 'z') {
        c -= 32;  // Convert to uppercase by adjusting the ASCII value
    }
    
    return c;  // Return the converted or unchanged character
}
