/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:39:36 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/10/03 12:17:38 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <fcntl.h>

#include <unistd.h>

#include <stdio.h>

char	*get_next_line(int fd)
{
	static t_list	*stash = NULL;
	char			*line;
	int				readed;

	if (fd < 0 || BUFFER_SIZE <= 0 || (read(fd, &line, 0) < 0))
		return (NULL);
	readed = 1;
	line = NULL;
	// 1 read from fd and add to linked list
	// 2 extract from stash to line
	// clean up stash 
	return (line);
}
