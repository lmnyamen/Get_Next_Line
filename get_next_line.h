/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 14:48:10 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/07/10 13:50:20 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 42
# define FD_SIZE 1024

# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>
# include "./libft/libft.h"

int		get_next_line(const int fd, char **line);

#endif
