/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:30:35 by angerard          #+#    #+#             */
/*   Updated: 2024/04/23 08:54:34 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_array(char **array, int num_elements)
{
	int	i;

	i = 0;
	if (array != NULL)
	{
		while (i < num_elements)
		{
			free(array[i]);
			i++;
		}
		free(array);
	}
}

static int	word_count(char const *s, char c)
{
	int	count;
	int	in_word;
	int	i;

	count = 0;
	in_word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	*get_next_word(const char *s, char c)
{
	char		*word;
	int			length;
	int			index;
	int			i;
	const char	*start;

	length = 0;
	index = 0;
	while (s[index] && s[index] == c)
		index++;
	start = s + index;
	while (s[index] && s[index] != c)
	{
		index++;
		length++;
	}
	word = (char *)malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	i = -1;
	while (i++ < length)
		word[i] = start[i];
	word[length] = '\0';
	return (word);
}

static char	**add_words_to_array(char const *s, char c, int words)
{
	char	**array;
	int		i;

	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		array[i] = get_next_word(s, c);
		if (array[i] == NULL)
		{
			free_array(array, i);
			return (NULL);
		}
		s += ft_strlen(array[i]);
		i++;
	}
	array[words] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int	words;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	return (add_words_to_array(s, c, words));
}

// int	main(void)
// {
// 	char const	*s;
// 	char		c;
// 	char		**words;

// 	s = "Hello, world! This is a split test";
// 	c = ' ';
// 	words = ft_split(s, c);
// 	if (words)
// 	{
// 		for (int i = 0; words[i] != NULL; i++)
// 		{
// 			printf("Word %d: %s\n", i + 1, words[i]);
// 			free(words[i]);
// 		}
// 		free(words);
// 	}
// 	return (0);
// }
