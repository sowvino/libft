/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selango <selango@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-05 16:32:53 by selango           #+#    #+#             */
/*   Updated: 2024-03-05 16:32:53 by selango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return ((c >= 32) && (c <= 126));
}

// int	main(void)
// {
// 	char	*k;

// 	k = "APPL45";
// 	ft_isprint(k);
// 	printf("%d\n", ft_isprint(k));
// }
