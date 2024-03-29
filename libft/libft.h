/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:58:19 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/07/07 09:56:52 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

void					ft_putchar(char c);
void					ft_putstr(char const *s);
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_isprint(int c);
int						ft_tolower(int c);
int						ft_toupper(int c);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strchr(const char *s, int c);
int						ft_strcmp(const char *s1, const char *s2);
char					*ft_strcpy(char *dest, const char *src);
char					*ft_strncat(char *s1, const char *s2, size_t n);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
char					*ft_strncpy(char *dest, const char *src, size_t len);
char					*ft_strnstr(const char *haystack, const char *needle,
		size_t len);
int						ft_strlen(const char *str);
char					*ft_strdup(const char *src);
char					*ft_strstr(const char *haystack, const char *needle);
char					*ft_strrchr(const char *s, int c);
void					*ft_memset(void *b, int c, size_t len);
void					*ft_memmove(void *dst, const void *src, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
void					*ft_memccpy(void *dst, const void *src,
		int c, size_t n);
void					ft_bzero(void *s, size_t n);
size_t					ft_strlcat(char *dst, const char *src, size_t dstsize);
void					ft_putnbr(int n);
void					ft_putendl(char const *s);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);
char					*ft_strnew(size_t size);
void					ft_strdel(char **as);
void					ft_strclr(char *s);
int						ft_strequ(char const *s1, char const *s2);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_strsub(char const *s,
		unsigned int start, size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s,
		char (*f)(unsigned int, char));
int						ft_atoi(const char *str);
void					ft_putnbr_fd(int n, int fd);
char					**ft_strsplit(char const *s, char c);
char					*ft_itoa(int n);
void					ft_swap(int *a, int *b);
t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lst_print(t_list *lst);
size_t					ft_lstsize(t_list *lst);

#endif
