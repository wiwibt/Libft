/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wibouamo <wibouamo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 04:21:41 by wibouamo          #+#    #+#             */
/*   Updated: 2026/11/10 14:51:09 by wibouamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	counter = 0;
	i = 0;
	while (s[i] == c)
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i])
				i++;
			if (s[i])
				counter++;
		}
		else
			i++;
	}
	return (counter + 1);
}

static void	free_td(char **spine)
{
	int	i;

	i = 0;
	while (spine[i])
	{
		free(spine[i]);
		i++;
	}
	free(spine);
}

static size_t	ft_lenght(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*copy(char const *s, size_t *increment_i, char c)
{
	char	*slot;
	size_t	len_word;

	len_word = ft_lenght(s, c);
	slot = malloc(sizeof(char) * (len_word + 1));
	if (!slot)
		return (NULL);
	ft_strlcpy(slot, s, len_word + 1);
	*increment_i = *increment_i + len_word;
	return (slot);
}

char	**ft_split(char const *s, char c)
{
	char	**spine;
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	spine = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (spine == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		spine[j] = copy(&s[i], &i, c);
		if (!spine[j++])
			return (free_td(spine), NULL);
	}
	spine[j] = NULL;
	return (spine);
}
