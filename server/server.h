#ifndef SERVER_H
# define SERVER_H

# include <stdio.h>
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>

# define ONE '1'
# define ZERO '0'
# define PID_SIZE 5
# define BYTES_SIZE_MAX 8
# define ERROR_MALLOC "Memory is not allocated."

typedef struct s_data
{
	char	character[BYTES_SIZE_MAX];
	int		count;
}				t_data;

t_data	g_data;

int		ft_pow(int number, int degree);
int		ft_strlen(char *str);
int		ft_putstr(char *str);
void	ft_puterror(char *err);
int		ft_putpID(int newline);
char	*pID_to_str(pid_t pID);
void	handle_ready_data(void);
void	handler(int signal_number);

#endif
