#include "client.h"

int	ft_strlen(char *str)
{
	int	position;

	position = 0;
	while (str[position])
		position++;
	return (position);
}

void	bits_init(char *bits)
{
	int	position;

	position = 0;
	while (position < BYTES_SIZE_MAX)
		bits[position++] = ZERO;
}

char	*char_to_bits(int c)
{
	int		position;
	char	*bits;

	position = 0;
	bits = malloc(BYTES_SIZE_MAX);
	if (!bits)
		ft_puterror(ERROR_MALLOC);
	bits_init(bits);
	while (c != 0 && position < BYTES_SIZE_MAX)
	{
		bits[BYTES_SIZE_MAX - position - 1] = c % 2 + '0';
		c /= 2;
		position++;
	}
	return (bits);
}

int	ft_str_is_digit(char *str)
{
	int	position;
	int	c;

	position = 0;
	while (str[position])
	{
		c = str[position];
		if (c < '0' || c > '9')
			return (0);
		position++;
	}
	return (1);
}

pid_t	pid_parser(char *str)
{
	int		position;
	pid_t	number;
	int		length;

	if (!ft_str_is_digit(str))
		ft_puterror(ERROR_PID);
	position = 0;
	number = 0;
	length = ft_strlen(str);
	while (position < length)
	{
		number = number * 10 + str[position] - '0';
		if (number > 99999)
			ft_puterror(ERROR_PID);
		position++;
	}
	if (number < 10000)
		ft_puterror(ERROR_PID);
	return (number);
}
