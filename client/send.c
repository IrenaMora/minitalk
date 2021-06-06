#include "client.h"

void	ft_send_byte(pid_t pID, char byte)
{
	if (byte == ONE)
		kill(pID, SIGUSR1);
	else
		kill(pID, SIGUSR2);
	usleep(USLEEP_TIME);
}

void	ft_send_char(pid_t pID, unsigned int c)
{
	int		position;
	char	*bytes;

	position = 0;
	bytes = char_to_bits(c);
	while (position < BYTES_SIZE_MAX)
		ft_send_byte(pID, bytes[position++]);
	free(bytes);
}

void	ft_send_message(pid_t pID, char *message)
{
	int	position;

	position = 0;
	while (message[position] != '\0')
		ft_send_char(pID, message[position++]);
}
