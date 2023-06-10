/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:31:55 by lamasson          #+#    #+#             */
/*   Updated: 2023/06/10 17:26:48 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>


void	sigint_handler(int signum)
{


}

void	sigquit_handler(int signum)
{


}

void	sigeof_handler(int signum)
{


}

int	main(void)
{
	signal(SIGINT, sigint_handler);
	signal(SIGQUIT, sigquit_handler);
	signal(EOF, sigeof_handler);
}
