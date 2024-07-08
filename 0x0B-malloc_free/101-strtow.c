#include "main.h"

/**
 * count_words - counts number of words in a string
 *
 * @str: string
 * Return: number of words
 */

int count_words(char *str)
{
	int i, count = 0;
	int inWord = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			inWord = 0;
		}
		else if (!inWord)
		{
			count++;
			inWord = 1;
		}
	}
	return (count);
}

/**
 * strtow - splits a string into words
 *
 * @str: string
 * Return: an array of seperated words
 */

char **strtow(char *str)
{
	int i, j, num_words, word_index, word_start, word_length, inWord = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	word_index = word_start = word_length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i + 1] == '\0')
		{
			if (inWord)
			{
				words[word_index] = malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
					return (NULL);
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
	words[word_index] = NULL;
	return (words);
}
