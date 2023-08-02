#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int m, n, p = 0, h = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
			h++;
	}
	h += ac;

	str = malloc(sizeof(char) * h + 1);
	if (str == NULL)
		return (NULL);
	for (m = 0; m < ac; m++)
	{
	for (n = 0; av[m][n]; n++)
	{
		str[p] = av[m][n];
		p++;
	}
	if (str[p] == '\0')
	{
		str[p++] = '\n';
	}
	}
	return (str);
}

