#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 * read_textfile- read and sent to stdout a number of charss.
 *
 * @filename: name of file
 * @letters: number of letters
 * Return: Number of printed chars.
 */
int main(int ac, char **av)
{
	int i, j, flag, fd, h;
	int leido = 0; 
	long int number, number2, k;
	char *buffer, *buffer2;
	int letters = 100;

	leido = leido;
	ac = ac;
	number = 0;
	fd = open(av[1], O_RDONLY);
	buffer = malloc(1000 * sizeof(char));
	buffer2 = malloc(120 * sizeof(char));
	leido = read(fd, buffer, letters);
	i = 0;
	while (buffer[i] != 0)
	{
		j = 0;
		for (h = 0; h <= 100; h++)
			buffer2[h] = 0;
		while (buffer[i] != 10)
		{
			buffer2[j] = buffer[i];
			i++;
			j++;
		}
	number = atol(buffer2);
	flag = 0;
	for (k = 2; k < number / 2 && flag == 0; k++)
	{
		if (number % k == 0)
			flag = 1;
	}
	number2 = number / (k - 1);
	printf("%li=%li*%li\n", number, number2, k - 1);
	i++;
	}
	free(buffer);
	free(buffer2);
	close(fd);
	return(0);
}
