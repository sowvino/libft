/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selango <selango@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-22 11:48:07 by selango           #+#    #+#             */
/*   Updated: 2024-05-22 11:48:07 by selango          ###   ########\         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	int		i;

	a = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == a)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (a == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

// int main()
// {
// 	char s[] = "Hello & world &";
// 	int c = '\0';
// 	printf("%s\n", ft_strchr(s, c));
// 	printf("%s\n",strchr(s,c));
// }
