/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 10:11:02 by smuhamma          #+#    #+#             */
/*   Updated: 2023/01/13 15:27:05 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*ft_read_to_buffer(int fd, char *buffer);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *buffer, char *buff);
size_t	ft_strlen(char *s);
char	*ft_line_get(char *buffer);
char	*ft_new_line(char *buffer);

#endif