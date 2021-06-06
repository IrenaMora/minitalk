#include "server.h"

int	ft_pow(int number, int degree)
{
	int	result;
	int	position;

	result = number;
	position = 1;
	if (degree == 0)
		return (1);
	while (position < degree)
	{
		result *= number;
		position++;
	}
	return (result);
}

int	ft_strlen(char *str)
{
	int	position;

	position = 0;
	while (str[position])
		position++;
	return (position);
}

char	*pID_to_str(pid_t pID)
{
	int		pos;
	char	*str;

	pos = 0;
	str = malloc(PID_SIZE + 1);
	if (!str)
		return (NULL);
	while (pos < PID_SIZE && pID != 0)
	{
		str[PID_SIZE - pos - 1] = pID % 10 + '0';
		pID /= 10;
		pos++;
	}
	str[pos] = '\0';
	return (str);
}
