/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:48:56 by lamasson          #+#    #+#             */
/*   Updated: 2023/06/11 15:03:51 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	g_status;

void	sigint_outfork(int signum)
{
	if (signum == SIGINT)
	{
		// print "^C" auto pas sur \n
		ft_putstr_fd("\n", 2);
		//return prompt readline
		g_status = 130;
	}
}

void	sigquit_outfork_d(int signum)
{
	(void)signum;
	printf("exit");
	exit (2);
}

int	main(void)
{
	char	*buf;
	int		d;

	d = -1;
	g_status = 0;
	buf = malloc(sizeof(char) * 1024);
	

	signal(SIGINT, sigint_outfork);
	signal(SIGQUIT, SIG_IGN);
	while (read(0, buf, sizeof(buf)) != 0)
	{
		if (g_status == 130)
			break ;
	}
	printf("%d\n", g_status);
	return (0);
}
