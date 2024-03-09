/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:13:13 by mrk               #+#    #+#             */
/*   Updated: 2024/03/07 17:22:16 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int count_words(const char *s, char c) {
    int count = 0;
    int i = 0;

    // Count non-empty words
    while (s[i]) {
        if (s[i] != c) {
            count++;
            // Move to the end of the current word
            while (s[i] && s[i] != c)
                i++;
        } else {
            // Skip consecutive delimiters
            while (s[i] && s[i] == c)
                i++;
        }
    }

    return count;
}

char **ft_split(const char *s, char c) {
    int num_words = count_words(s, c);
    char **result = malloc((num_words + 1) * sizeof(char *));
    if (!result)
        return NULL;

    int word_index = 0;
    int i = 0;

    // Split the string into words
	while (s[i]) 
	{
        	if (s[i] != c) 
		{
            		int start = i;
            		// Find the end of the word
            		while (s[i] && s[i] != c)
                		i++;

            		// Allocate memory for the word and copy it
            		int word_length = i - start;
            		result[word_index] = malloc((word_length + 1) * sizeof(char));
            		if (!result[word_index]) 
			{
                		// Free memory and return NULL if allocation fails
                		while (word_index > 0) {
                    		free(result[--word_index]);
                	}
                	free(result);
                	return NULL;
            		}
            		// Copy the word
            		for (int j = 0; j < word_length; j++) 
			{
                	result[word_index][j] = s[start + j];
            		}
            		result[word_index][word_length] = '\0';
            		word_index++;
        	} 
		else 
		{
            		// Skip consecutive delimiters
            		while (s[i] && s[i] == c)
                	i++;
        	}
    }
    result[word_index] = NULL; // Mark the end of the result array
    return result;
}
/*#include <stdio.h>
#include <unistd.h>
void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}
int	main()
{
	int	i = 0;
	char **tabstr;
	tabstr = ft_split("split  ||this|for|me|||||!|", '|');
	while (tabstr[i] != NULL)
	{
		ft_print_result(tabstr[i]);
		write(1, "\n", 1);
		i++;
	}	
}*/
