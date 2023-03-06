/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:25:59 by arabelo-          #+#    #+#             */
/*   Updated: 2023/03/06 13:53:44 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	index2;
	int	temp;

	index = 0;
	index2 = 1;
	while (index < size)
	{
		while (index2 < size)
		{
			if (tab[index] > tab[index2])
			{
				temp = tab[index];
				tab[index] = tab[index2];
				tab[index2] = temp;
			}
			index2++;
		}
		index++;
		index2 = index + 1;
	}
}
