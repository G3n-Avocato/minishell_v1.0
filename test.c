/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:31:55 by lamasson          #+#    #+#             */
/*   Updated: 2023/06/11 13:51:30 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>


void	sigint_handler(int signum)
{


}

void	sigquit_handler(int signum)
{


}


int	main(void)
{

	g_status = 0;

	signal(SIGINT, sigint_handler);
	signal(SIGQUIT, sigquit_handler);

	while (1)
	{}


}
