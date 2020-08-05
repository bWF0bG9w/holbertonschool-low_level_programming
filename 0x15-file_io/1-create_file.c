#include "holberton.h"

/**
 *
 *
 *
 *
 *
 */

int create_file(const char *filename, char *text_content)
{
	int a, file, create;

	create = file = a = 0;
	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[a] != '\0')
		{
			a++;
		}

		create = write(file, text_content, a);
	}

	if (create == -1 || create != a)
		return (-1);
	return (1);
}
