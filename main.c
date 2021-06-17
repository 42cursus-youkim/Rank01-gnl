/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkim <youkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:34:49 by youkim            #+#    #+#             */
/*   Updated: 2021/06/15 13:45:40 by youkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "get_next_line.h"

int	main(void)
{
	int		m;
	int		f;
	int		fd;
	int		stat;
	char	*line;
	char	*fc;

//	stat = get_next_line(0, &line);
//	printf("%d#%s#", stat, line);
//*
	printf("fd max / max iterations:");
	scanf("%d%d", &f, &m);
	for (; f > 2; f--)
	{
		fc = malloc(2);
		*fc = (char)(f + '0');
		*(fc + 1) = 0;
		printf("RESULT for fd #%d\n", f);
		printf("opening %s\n", ft_strjoin(fc, ".txt"));
		fd = open(fc, O_RDONLY);
		for (int i = 0; i < m; i++)
		{
			stat = get_next_line(fd, &line);
			printf(">>>%d/%d\n#%s#\n", i, stat, line);
		}
		printf("DONE\n\n");
	}
//*/
	return (0);
}
