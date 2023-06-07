/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_quote_var_env.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:33:52 by lamasson          #+#    #+#             */
/*   Updated: 2023/06/07 20:55:03 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

char	*ft_literal_doll(char *s)
{
	int		i;
	char	c;

	i = 0;
	c = '\0';
	while (s[i] != '$')
	{
		if (!c && (s[i] == '\'' || s[i] == '\"'))
		{
			c = s[i];
			s = remove_char(s, i);
		}
		else if (c == s[i])
		{
			c = '\0';
			s = remove_char(s, i);
		}
		else
			i++;
		printf("%s\n", s);
	}
	return (s);
}

int	ft_check_quotes_dollar(t_var_env *data)
{
	

}


/*
void	ft_init_quo(t_var_env *data)
{
	int	i;

	i = 0;
	data->one = malloc(sizeof(int) * data->nb_dol);
	data->dos = malloc(sizeof(int) * data->nb_dol);
	while (i < data->nb_dol)
	{
		data->one[i] = 0;
		data->dos[i] = 0;
		i++;
	}
}


int ft_check_quotes_dollar(t_var_env *data)
{
	int	j;
	int	sos;

	j = 0;
	sos = 0;
	ft_init_quo(data);
	while (data->str[data->pos])
	{
		if (data->one[j] == 0 && data->str[data->pos] == '\'' && ft_betweenquotes(data->str, data->pos) == 0)
		{
			data->one[j] = 1;
			if (data->dos[j] == 0)
				sos = 1;
		}
		else if (data->one[j] == 1 && data->str[data->pos] == '\'' && ft_betweenquotes(data->str, data->pos) == 0)
			data->one[j] = 0;
		if (data->dos[j] == 0 && data->str[data->pos] == '\"' && ft_betweenquotes(data->str, data->pos) == 0)
		{
			data->dos[j] = 1;
			if (data->one == 0)
				sos = 2;
		}
		else if (data->dos[j] == 1 && data->str[data->pos] == '\"' && ft_betweenquotes(data->str, data->pos) == 0)
			data->dos[j] = 0;
		data->pos++;
		if (data->nb_dol > 1 && data->str[data->pos] == '$')
			j++;
	}
}*/
