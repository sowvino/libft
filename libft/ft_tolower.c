/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selango <selango@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-28 09:05:00 by selango           #+#    #+#             */
/*   Updated: 2024-05-28 09:05:00 by selango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
	{
		return (ch + 32);
	}
	return (ch);
}

// int main()
// {
//     int ch = 65;
//     printf("%d\n", ft_tolower(ch));
//     return 0;
// }
