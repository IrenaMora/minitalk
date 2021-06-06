#include "server.h"

int	main(void)
{
	g_data.count = 0;
	ft_putstr("Server pID: ");
	ft_putpID(1);
	ft_putstr("Waiting messages...\n");
	while (1)
	{
		signal(SIGUSR1, handler);
		signal(SIGUSR2, handler);
		pause();
	}
	return (0);
}
