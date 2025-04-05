/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebricio <lebricio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 13:45:42 by lebricio          #+#    #+#             */
/*   Updated: 2025/04/05 13:45:52 by lebricio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <sys/wait.h>
# include <fcntl.h>
# include "../libft/libft.h"

/* Mandatory functions */
void	error(void);
char	*find_path(char *cmd, char **envp);
int		get_next_line(char **line);
void	execute(char *argv, char **envp);

#endif
