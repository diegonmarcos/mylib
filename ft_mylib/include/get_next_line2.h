/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:12:35 by dinepomu          #+#    #+#             */
/*   Updated: 2025/01/23 17:44:45 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

// --- LIBFT FUNCTIONS ---
size_t	ft_strlen_gnl(char *s, int c);
/**
* @brief Returns the size of the string.
*/

char	*ft_strchr_gnl(char *s, int c);
/**
 * @brief Returns a pointer to the first occurrence of the character c in the
 * 			string s.
 */

char	*ft_strjoin_gnl(char *left_str, char *buff, int c);
/**
 * @brief Concatenates two strings and returns a pointer to the new string.
 */

// --- GET_NEXT_LINE FUNCTIONS ---
int	ft_read_to_left_str(int fd, char **left_str);
/**
 * @brief Updates the left_str by removing the line that has been read.
 * @param left_str The string to update.
 */

char	*ft_new_left_str(char *left_str);
/**
 * @brief Extracts the next line from the left_str.
 * @param left_str The string to extract the line from.
 * @return A pointer to the extracted line.
 */

char	*ft_get_line(char *left_str);
/**
 * @brief Reads the next line from the file descriptor.
 * @param fd The file descriptor to read from.
 * @return A pointer to the next line read from the file descriptor.
 */

int	get_next_line(int fd, char **line);
/**
 * @brief Reads the next line from the file descriptor.
 * @param fd The file descriptor to read from.
 * @return A pointer to the next line read from the file descriptor.
 */

int	ft_read_to_left_str(int fd, char **left_str);
/**
 * @brief Reads the next line from the file descriptor.
 * @param fd The file descriptor to read from.
 * @param left_str The string to update.
 * @return A pointer to the next line read from the file descriptor.
 */

char	*ft_new_left_str(char *left_str);
/**
 * @brief Updates the left_str by removing the line that has been read.
 * @param left_str The string to update.
 * @return A pointer to the new left_str.
 */

char	*ft_get_line(char *left_str);
/**
 * @brief Extracts the next line from the left_str.
 * @param left_str The string to extract the line from.
 * @return A pointer to the extracted line.
 */

int	get_next_line(int fd, char **line);
/**
 * @brief Reads the next line from the file descriptor.
 * @param fd The file descriptor to read from.
 * @return A pointer to the next line read from the file descriptor.
 */

#endif