/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:26:29 by natferna          #+#    #+#             */
/*   Updated: 2024/09/19 18:27:06 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
   int  i;

   i = 0;
   if (fd >= 0 && s)
   {
    while (s[i] != '\0')
        write(fd, &s[i], 1);
        i++;
   }
}