/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerasym <agerasym@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:38:31 by agerasym          #+#    #+#             */
/*   Updated: 2024/08/12 14:50:26 by agerasym         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			return (0);
		}
		str ++;
	}
	return (1);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_str_is_printable("\t"));
// }