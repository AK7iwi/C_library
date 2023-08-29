CC				= gcc 
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I./includes
NAME			= libft.a
SRCS			=	./srcs/ft_isalpha.c ./srcs/ft_isdigit.c ./srcs/ft_isalnum.c ./srcs/ft_isascii.c \
					./srcs/ft_isprint.c ./srcs/ft_strlen.c ./srcs/ft_memset.c ./srcs/ft_bzero.c \
					./srcs/ft_memcpy.c ./srcs/ft_memmove.c ./srcs/ft_strlcpy.c ./srcs/ft_strlcat.c \
					./srcs/ft_toupper.c ./srcs/ft_tolower.c ./srcs/ft_strchr.c ./srcs/ft_strrchr.c \
					./srcs/ft_strncmp.c ./srcs/ft_memchr.c ./srcs/ft_memcmp.c ./srcs/ft_strnstr.c \
					./srcs/ft_atoi.c ./srcs/ft_calloc.c ./srcs/ft_strdup.c ./srcs/ft_substr.c \
					./srcs/ft_strjoin.c ./srcs/ft_strjoin_char.c ./srcs/ft_strjoin_onechar.c ./srcs/ft_strtrim.c \
					./srcs/ft_split.c ./srcs/ft_itoa.c ./srcs/ft_longnblen.c ./srcs/ft_strmapi.c \
					./srcs/ft_putchar_fd.c ./srcs/ft_putstr_fd.c ./srcs/ft_putendl_fd.c ./srcs/ft_putnbr_fd.c \
					./srcs/ft_striteri.c ./srcs/ft_lstnew.c ./srcs/ft_lstadd_front.c ./srcs/ft_lstsize.c \
					./srcs/ft_lstlast.c ./srcs/ft_lstadd_back.c ./srcs/ft_lstdelone.c ./srcs/ft_lstclear.c \
					./srcs/ft_lstiter.c ./srcs/ft_lstmap.c ./srcs/ft_putnbr_base.c ./srcs/ft_putnbr_fdu.c \
					./srcs/ft_intlen.c ./srcs/ft_uintlen.c ./srcs/ft_hexlen.c ./srcs/ft_putchar_fdu.c  \
					./srcs/ft_is_lst_sorted.c ./srcs/ft_lst_maxpos.c ./srcs/ft_lst_minpos.c ./srcs/ft_lstadd_back_int.c \
					./srcs/ft_lstfree.c ./srcs/ft_lst_scanbottom.c ./srcs/ft_lst_scantop.c ./srcs/ft_lst_to_arr.c \
					./srcs/ft_sort_arr.c ./srcs/ft_lstmax.c ./srcs/ft_lstmin.c \

OBJS			= $(SRCS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re 