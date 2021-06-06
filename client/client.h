#ifndef CLIENT_H
# define CLIENT_H

# include <stdio.h>
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>

# define ONE '1'
# define ZERO '0'
# define USLEEP_TIME 60
# define BYTES_SIZE_MAX 8
# define ERROR_MALLOC "Memory is not allocated."
# define ERROR_ARGS "Wrong arguments count."
# define ERROR_PID "Wrong pID in the arguments."

int		ft_strlen(char *str);
int		ft_putstr(char *str);
void	ft_puterror(char *err);
char	*char_to_bits(int c);
pid_t	pid_parser(char *str);
void	ft_send_message(pid_t pID, char *message);

#endif
