/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dropnod <dropnod@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:24:55 by dropnod           #+#    #+#             */
/*   Updated: 2023/12/06 21:04:59 by dropnod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @brief Checks if an integer is an alpha character in ASCII.
 * @param c An integer.
 * @return A boolean.
 */
int		ft_isalpha(int c);

/**
 * @brief Checks if an integer is a digit character in ASCII.
 * @param c An integer.
 * @return A boolean.
 */
int		ft_isdigit(int c);

/**
 * @brief Checks if an integer is an alphanumeric character in ASCII.
 * @param c An integer.
 * @return A boolean.
 */
int		ft_isalnum(int c);

/**
 * @brief Checks if an integer is a character in ASCII.
 * @param c An integer.
 * @return A boolean.
 */
int		ft_isascii(int c);

/**
 * @brief Checks if an integer is a printable character in ASCII.
 * @param c An integer.
 * @return A boolean.
 */
int		ft_isprint(int c);

/**
 * @brief Gives the length of the given string.
 * @param str A pointer to a string.
 * @return The length of str.
 */
size_t	ft_strlen(const char *str);

/**
 * @brief Fills memory area with the given value.
 * @param ptr A pointer to the area to fill.
 * @param value The value to fill with.
 * @param size The number of octets to fill.
 * @return A pointer to the filled area.
 */
void	*ft_memset(void *ptr, int value, size_t size);

/**
 * @brief Fills memory area with zeros.
 * @param ptr A pointer to the area to fill.
 * @param size The number of octets to fill.
 * @return A pointer to the filled area.
 */
void	*ft_bzero(char *ptr, size_t size);

/**
 * @brief Copies memory area.
 * @param dest A pointer to the destination.
 * @param src A pointer to the source.
 * @param size The number of octets to copy.
 * @return A pointer to the destination.
 */
void	*ft_memcpy(void *dest, const void *src, size_t size);

/**
 * @brief Moves memory area.
 * @param dest A pointer to the destination.
 * @param src A pointer to the source.
 * @param size The number of octets to move.
 * @return A pointer to the destination.
 */
void	*ft_memmove(void *dest, const void *src, size_t size);

/**
 * @brief Copies string.
 * @param dest A pointer to the destination.
 * @param src A pointer to the source.
 * @param size The number of characters to copy.
 * @return The length of the new string.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

/**
 * @brief Concatenates strings.
 * @param dest A pointer to the destination.
 * @param src A pointer to the source.
 * @param size The number of characters to concatenate.
 * @return The length of the new string.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size);

/**
 * @brief Convert an integer to uppercase in ASCII.
 * @param c An integer.
 * @return The converted integer.
 */
int		ft_toupper(int c);

/**
 * @brief Convert an integer to lowercase in ASCII.
 * @param c An integer.
 * @return The converted integer.
 */
int		ft_tolower(int c);

/**
 * @brief Gives a pointer to the first occurence of character in a string.
 * @param str A string.
 * @param c An integer.
 * @return A pointer to the character.
 */
char	*ft_strchr(const char *str, int c);

/**
 * @brief Gives a pointer to the last occurence of character in a string.
 * @param str A string.
 * @param c An integer.
 * @return A pointer to the character.
 */
char	*ft_strrchr(const char *str, int c);

/**
 * @brief Compares two strings.
 * @param str_1 A string.
 * @param str_2 A string.
 * @param size The number of characters to compare.
 * @return An integer resulting of the comparison.
 */
int		ft_strncmp(const char *str_1, const char *str_2, size_t size);

/**
 * @brief Gives a pointer to the first occurence of value in a memory area.
 * @param ptr A pointer to the area.
 * @param value The value to search.
 * @param size The number of octets to search in.
 * @return A pointer to the first occurence of the value.
 */
void	*ft_memchr(const void *ptr, int value, size_t size);

/**
 * @brief Compares two memory areas.
 * @param ptr_1 A pointer.
 * @param ptr_2 A pointer.
 * @param size The number of octets to compare.
 * @return An integer resulting of the comparison.
 */
int		ft_memcmp(const void *ptr_1, const void *ptr_2, size_t size);

/**
 * @brief Gives a pointer to the first occurence of a string in another string.
 * @param str A string.
 * @param str_to_find The string to find.
 * @param size The number of characters to search in.
 * @return A pointer to the first occurence of the string.
 */
char	*ft_strnstr(const char *str, const char *str_to_find, size_t size);

/**
 * @brief Converts a string into an integer.
 * @param str A string.
 * @return An integer.
 */
int		ft_atoi(const char *str);

/**
 * @brief Allocates a memory area and fills it with zeros.
 * @param nb Number of elements.
 * @param size Size of one element.
 * @return A pointer to the allocated space.
 */
void	*ft_calloc(int nb, size_t size);

/**
 * @brief Allocates a space and copies a string into it.
 * @param str A string.
 * @return The allocated string.
 */
char	*ft_strdup(const char *str);

/**
 * @brief Creates a substring from a string.
 * @param str A string.
 * @param start The start index.
 * @param size The number of characters.
 * @return The resulting subsring.
 */
char	*ft_substr(const char *str, unsigned int start, size_t size);

/**
 * @brief Creates a string from two strings.
 * @param str_1 A string.
 * @param str_2 A string.
 * @return The resulting string.
 */
char	*ft_strjoin(const char *str_1, const char *str_2);

/**
 * @brief Creates a string from two strings.
 * @param str_1 A string.
 * @param str_2 A string.
 * @return The resulting string.
 */
char	*ft_strtrim(const char *str, const char *set);

/**
 * @brief Splits a string in multiple string.
 * @param str A string.
 * @param c A delimiter.
 * @return The resulting strings.
 */
char	**ft_split(const char *str, char c);

/**
 * @brief Converts an integer into a string.
 * @param str A string.
 * @return An integer.
 */
char	*ft_itoa(int nb);

/**
 * @brief Passes all the characters of a string through a function
 * and creates a new string.
 * @param str A string.
 * @param f A function.
 * @return The new string.
 */
char	*ft_strmapi(const char *str, char (*f)(unsigned int, char));

/**
 * @brief Passes all the characters of a string through a function.
 * @param str A string.
 * @param f A function.
 */
void	ft_striteri(char *str, void (*f)(unsigned int, char *));

/**
 * @brief Outputs a character to a file descriptor.
 * @param c A character.
 * @param fd A file descriptor.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs a string to a file descriptor.
 * @param str A string.
 * @param fd A file descriptor.
 */
void	ft_putstr_fd(char *str, int fd);

/**
 * @brief Outputs a string followed by a newline to a file descriptor.
 * @param str A string.
 * @param fd A file descriptor.
 */
void	ft_putendl_fd(char *str, int fd);

/**
 * @brief Outputs an integer to a file descriptor.
 * @param nb An integer.
 * @param fd A file descriptor.
 */
void	ft_putnbr_fd(int nb, int fd);

/**
 * @brief Creates a new node.
 * @param content The content of the node.
 * @return A node.
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief Adds a node at the beginning of the list.
 * @param lst The adress of a pointer to the list.
 * @param node A pointer to the node.
 */
void	ft_lstadd_front(t_list **lst, t_list *node);

/**
 * @brief Gives the size of a list.
 * @param lst A pointer to the list.
 * @return The size of the list.
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief Gives a pointer to the last node of a list.
 * @param lst A pointer to the list.
 * @return  A pointer to the last node of the list.
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief Adds a node at the end of the list.
 * @param lst The adress of a pointer to the list.
 * @param new A pointer to the node.
 */
void	ft_lstadd_back(t_list **lst, t_list *node);

/**
 * @brief Deletes with a given function the content and frees a node.
 * @param node A pointer to the node.
 * @param del A function.
 */
void	ft_lstdelone(t_list *node, void (*del)(void *));

/**
 * @brief Deletes with a given function the content and frees
 * all the nodes of a list.
 * @param lst The adress of a pointer to the list.
 * @param del A function.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Pass all the contents of a list through a function.
 * @param lst A pointer to the list.
 * @param f A function.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Pass all the contents of a list through a function and
 * creates a new list.
 * @param lst A pointer to the list.
 * @param f A function.
 * @param del A function.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
			void (*del)(void *));

#endif