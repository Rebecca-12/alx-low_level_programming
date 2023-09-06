#include "main.h"
#include <stdlib.h>

/**
* count_words - Counts the number of words in a string.
* @str: The input string.
*
* Return: The number of words in the string.
*/

int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
* strtow - Splits a string into words.
* @str: The input string.
*
* Return: If str is NULL or an empty string, or if memory allocation fails,
* returns NULL. Otherwise, returns a pointer to an array of strings
* containing the words from the input string, with the last element as NULL.
*
*/

char **strtow(char *str)
{
	char **words;
	int num_words, i, j, word_len, in_word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);
	words = malloc(sizeof(char *) * (num_words + 1))

	if (words == NULL)
		return (NULL);

	for (i = 0; i < num_words; i++)
	{
		while (*str == ' ')
			str++;
		in_word = 0;
	word_len = 0;

	while (str[word_len] != ' ' && str[word_len] != '\0')
	{
            word_len++;
            in_word = 1;
        }

	words[i] = malloc(sizeof(char) * (word_len + 1));

	if (words[i] == NULL)
	{
		for (j = 0; j < i; j++)
		free(words[j]);
		free(words);
		return (NULL);
	}

	for (j = 0; j < word_len; j++)
		words[i][j] = str[j];
	words[i][j] = '\0'
		str += word_len;
	}

	words[num_words] = NULL;

	return (words);
}
