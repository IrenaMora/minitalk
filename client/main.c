#include "client.h"

int	main(int args_count, char **args)
{
	char	*message;
	pid_t	pID;

	if (args_count != 3)
		ft_puterror(ERROR_ARGS);
	pID = pid_parser(args[1]);
	message = args[2];
	ft_putstr("Sending to ");
	ft_putstr(args[1]);
	ft_putstr("...\n");
	ft_send_message(pID, message);
	ft_putstr("Completed.\n");
	return (0);
}
