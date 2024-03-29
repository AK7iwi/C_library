/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:41:57 by mfeldman          #+#    #+#             */
/*   Updated: 2023/08/29 17:24:18 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

/* Linked list */

typedef struct s_list
{
	void			*content;
	int				value;
	struct s_list	*next;
}	t_list;

/* Is */

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);

/* Len */

size_t		ft_strlen(const char *s);
size_t		ft_intlen(int nb);
size_t		ft_uintlen(unsigned int nb);
size_t		ft_hexlen(unsigned long long int nb);
size_t		ft_longnblen(long long nb);

/* Mem */

void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
void		*ft_memset(void *s, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);

/* Str */

int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_atoi(const char *nptr);
char		*ft_itoa(int n);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *s1, const char *s2, size_t len);
char		*ft_strdup(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strjoin_char(char *s1, char *s2);
char		*ft_strjoin_onechar(char *s1, char c);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *str, char c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

/* Put */

void		ft_putchar_fd(char c, int fd);
void		ft_putchar_fdu(unsigned char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putnbr_fdu(unsigned int n, int fd);
void		ft_putnbr_base(unsigned long long int nb, char *base);

/* Linked list */

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int			ft_lstmax(t_list *lst);
int			ft_lstmin(t_list *lst);
int			ft_is_lst_sorted(t_list *lst);
int			ft_lst_maxpos(t_list *tmp);
int			ft_lst_minpos(t_list *tmp);
void		ft_lstadd_back_int(t_list **lst, int val);
void		ft_lstfree(t_list **lst);
int			ft_lst_scantop(t_list **a, int val);
int			ft_lst_scanbottom(t_list **a, int val);
int			*lst_to_arr(t_list **a);

/* Array */

int			*sort_arr(int *arr, int len);

#endif
