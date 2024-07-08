#include "main.h"

/**
 * strtow - splits a string into words
 *
 * @str: string
 * Return: an array of seperated words
 */

char **strtow(char *str)
{
	int i, j;	/* loop controllers */
	int num_words, word_index, word_start, word_length;
	int inWord = 0;
	char **words;

	num_words = 0;
	if (str == NULL || *str == '\0')
		return NULL;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			inWord = 0;
		}
		else if (!inWord)
		{
			num_words++;
			inWord = 1;
		}
	}

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	word_index = word_start = word_length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (inWord)
			{
				words[word_index] = malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					for (j = 0; j < word_length; j++)
						free(words[i]);
					free(words);
					return (NULL);
				}

				for (j = 0; j < word_length; j++)
					words[word_index][j] = str[word_start + j];
				words[word_index][word_length] = '\0';

				word_index++;
			}
			inWord = 0;
		}
		else
		{
			if (!inWord)
			{
				word_length = 0;
				word_start = i;
				inWord = 1;
			}
			word_length++;
		}
	}
	if (word_length > 0)
	{
		words[word_index] = malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			for (j = 0; j < word_length; j++)
				free(words[i]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < word_length; j++)
			words[word_index][j] = str[word_start + j];
		words[word_index][word_length] = '\0';

		word_index++;
	}
	words[word_index] = NULL;
	return (words);
}
