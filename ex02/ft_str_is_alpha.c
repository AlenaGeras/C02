/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerasym <agerasym@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:02:03 by agerasym          #+#    #+#             */
/*   Updated: 2024/08/12 12:35:53 by agerasym         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')))
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_str_is_alpha("srgsgAFWRRWZza"));
// }