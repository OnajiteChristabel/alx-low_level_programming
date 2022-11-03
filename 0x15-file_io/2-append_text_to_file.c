#include "main.h"

/**
<<<<<<< HEAD
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content : added content
 * Return: 1 if the file exists and -1 if the file does not exist
=======
 * _strlen - find length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * append_text_to_file - append text and only if file exists
 * @filename: file
 * @text_content: appends this content into file
 * Return: 1 on success, -1 on error
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
<<<<<<< HEAD
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(fd, text_content, nletters);
		if (rwr == -1)
			return (-1);
	}
=======
	int n_wrote;

	if (!filename)
		return (-1);

	/* open file if it exists */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* if nothing to write, still successful */
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/* write */
	n_wrote = write(fd, text_content, _strlen(text_content));
	if (n_wrote == -1 || n_wrote != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
	close(fd);
	return (1);
}
