/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_export_parsing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:32:04 by lamasson          #+#    #+#             */
/*   Updated: 2023/06/20 16:44:02 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	ft_error_export(char *c, int g)
{
	if (g == 1)
	{
		printf("minishell: export: `%s': not a valid identifier\n", c);	
		g_status = 1;
	}
	else if (g == 2)
	{
		printf("minishell: export: invalid option\n");
		g_status = 2;
	}
}

int	ft_parse_export(char **c, t_files *files)
{
	int	len;

	len = ft_tablen(c);
	if (len == 1)
	{
		ft_export_no_arg(*files);
		return (0);
	}
	if (len > 2)
	{
		ft_error_export(c[2], 1);
		return (0);
	}


}
