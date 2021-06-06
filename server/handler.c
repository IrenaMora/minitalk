#include "server.h"

void	handle_ready_data(void)
{
	int	c;
	int	position;

	c = 0;
	position = 0;
	while (position < BYTES_SIZE_MAX)
	{
		if (g_data.character[BYTES_SIZE_MAX - position - 1] == ONE)
			c += ft_pow(2, position);
		position++;
	}
	write(1, &c, 1);
	g_data.count = 0;
}

void	handler(int signal_number)
{
	if (signal_number == SIGUSR1)
		signal_number = ONE;
	else
		signal_number = ZERO;
	g_data.character[g_data.count] = signal_number;
	g_data.count += 1;
	if (g_data.count >= BYTES_SIZE_MAX)
		handle_ready_data();
}
