/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaanani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 03:52:24 by slaanani          #+#    #+#             */
/*   Updated: 2018/09/09 06:33:21 by slaanani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
