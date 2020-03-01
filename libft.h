/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslave <jslave@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:41:58 by jslave            #+#    #+#             */
/*   Updated: 2019/10/04 18:56:57 by jslave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

int						ft_atoi (const char *str);
void					ft_bzero(void *s, size_t n);
int						ft_isalpha(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isdigit (int c);
int						ft_isprint(int c);
void					*ft_memccpy(void *dst, void const \
		*src, int c, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memcpy(void *dst, \
		const void *src, size_t n);
void					*ft_memmove(void *dst, const void *src, size_t len);
void					*ft_memset(void *dest, int val, size_t count);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strchr(const char *s, int c);
int						ft_strcmp(const char *s1, const char *s2);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strdup(const char *src);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
size_t					ft_strlen(const char *str);
char					*ft_strncat(char *s1, const char *s2, size_t n);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
char					*ft_strncpy(char *dst, const char *src, size_t len);
char					*ft_strnstr(const char *haystack, \
		const char *needle, size_t len);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *haystack, const char *needle);
int						ft_tolower(int c);
int						ft_toupper(int c);
void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);
void					ft_strdel(char **as);
char					*ft_strnew(size_t size);
void					ft_strclr(char *s);
void					ft_striter(char *s, void (*f) (char *));
void					ft_striteri(char *s, void (*f) (unsigned int, char *));
char					*ft_strmap(char const *s, char (*f) (char));
char					*ft_strmapi(char const *s, char (*f) (unsigned int,
		char));
int						ft_strequ(char const *s1, char const *s2);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_strsub(char const *s, unsigned int start, size_t
len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s);
char					**ft_strsplit(char const *s, char c);
char					*ft_itoa(int n);
void					ft_putchar(char c);
void					ft_putstr(char const *s);
void					ft_putendl(char const *s);
void					ft_putnbr(int n);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putnbr_fd(int n, int fd);
t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_lstdelone(t_list **alst, void (*del) (void *,
		size_t));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstadd(t_list **alst, t_list *new1);
void					ft_lstiter(t_list *lst, void (*f) (t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void					ft_foreach(int *tab, int length, void (*f)(int));
t_list					*ft_lstdellast(t_list *begin);
t_list					*ft_lstpushelem(t_list *begin, void const *content, \
		size_t content_size);
t_list					*ft_lstappendelem(t_list *start, t_list *new1);
int						ft_count_if(char **tab, int (*f)(char *));
char					*ft_strjoinfree_s1(char *s1, char *s2);
char					*ft_strjoinfree_s2(char *s1, char *s2);
char					*ft_strjoinfree_both(char *s1, char *s2);
int						get_next_line(int fd, char **line);
int						ft_atoi_base(const char *str, int base);
char					*ft_itoa_base(unsigned long long int value, int base);
char					*ft_itoa_base_unsigned(unsigned long long int num,
		int base);
unsigned long long int	ft_atoi_long_long_uns(const char *str);
size_t					find_len_of_num(long long int n);
char					*ft_itoa_long_long_uns(unsigned long long int n);
char					*ft_itoa_long_long(long long int n);
char					*ft_strreverse(char *str);

#endif
