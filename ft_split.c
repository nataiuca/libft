/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:42:15 by natferna          #+#    #+#             */
/*   Updated: 2024/09/26 14:11:52 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*get_next_word(const char **s, char c)
{
	const char	*start;

	while (**s && **s == c)
		(*s)++;
	start = *s;
	while (**s && **s != c)
		(*s)++;
	return (strndup(start, *s - start));
}

char	**ft_split(char const *s, char c)
{
	int	word_count;
	int	i;
	char *	word;
	char **	result;

	word_count = count_words(s, c);
	result = malloc((word_count + 1) * sizeof(char *));
	if (!s)
		return (NULL);
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		word = get_next_word(&s, c);
		if (word)
		{
			result[i++] = word;
		}
	}
	result[i] = NULL;
	return (result);
}
