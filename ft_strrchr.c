/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouss <mouss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 04:06:56 by mouss             #+#    #+#             */
/*   Updated: 2022/10/05 04:18:51 by mouss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char) c)
		{
			return ((char *)&s[i]);
		}
		else
			i--;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("Ft_strrchr : %s\n", ft_strrchr(argv[1], atoi(argv[2])));
	printf("strrchr : %s\n", strrchr(argv[1], atoi(argv[2])));
	return (0);
}*/
