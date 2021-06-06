#include "server.h"

int	ft_putstr(char *str)
{
	int	length;

	length = ft_strlen(str);
	write(1, str, length);
	return (length);
}

void	ft_puterror(char *err)
{
	int	length;

	length = ft_strlen(err);
	write(2, "Error\n", 6);
	write(2, err, length);
	write(2, "\n", 1);
	exit(0);
}

int	ft_putpID(int newline)
{
	pid_t	pID;
	char	*str;

	pID = getpid();
	str = pID_to_str(pID);
	ft_putstr(str);
	if (newline)
		ft_putstr("\n");
	free(str);
	return (PID_SIZE);
}
