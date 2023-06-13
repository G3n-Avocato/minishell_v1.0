/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <gbertet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:54:31 by gbertet           #+#    #+#             */
/*   Updated: 2023/06/02 15:43:28 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	ft_free_str(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

void	ft_free_cmds(t_mishell *m)
{
	int	i;

	i = 0;
	if (m->full_cmd)
		free(m->full_cmd);
	while (m->cmds[i].c)
	{
		ft_free_str(m->cmds[i].c);
		free(m->cmds[i].path);
		free(m->cmds[i].fds->fd_in);
		free(m->cmds[i].fds->fd_out);
		free(m->cmds[i].fds);
		i++;
	}
	free(m->cmds);
}

void	ft_free_files(t_mishell *mish)
{
	ft_free_tab(mish->files->tab_path);
	ft_free_tab(mish->files->tab_var_env);
	free(mish->files);
}

void    ft_exit(t_mishell *m)   
{
	if (m)
	{
		ft_free_cmds(m);
		ft_free_files(m);
		free(m->pid);
	}
	exit (1);
}
