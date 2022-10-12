/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:12:51 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/12 17:04:49 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		ft_putchar_fd((char)*s++, fd);
}

/*int	main(void)
{
	int	fd;

	printf("\n******** Test de ft_putstr_fd ********\n'premier test':\n");
	ft_putstr_fd("premier test", 1);
	printf("\n******** Test ecriture dans un fichier 'testfilestr' ********");
	printf("\nEcriture de : mouslim\n");
	fd = open("testfilestr", O_WRONLY | O_CREAT, 0777);
	ft_putstr_fd("mouslim", fd);
	close(fd);
	printf("\nChaine de caractere ecrit dans le fichier 'testfilestr' : ");
	printf("\n");
	system("cat testfilestr");
	return (0);
}*/
