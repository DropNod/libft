NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_strlen.c ft_strlcpy.c ft_strlcat.c\
			ft_strdup.c ft_isalpha.c ft_isalnum.c\
			ft_isascii.c ft_isdigit.c ft_isprint.c\
			ft_memset.c ft_bzero.c ft_memcpy.c\
			ft_memmove.c ft_toupper.c ft_tolower.c\
			ft_strchr.c ft_strrchr.c ft_strncmp.c\
			ft_memchr.c ft_memcmp.c ft_strnstr.c\
			ft_atoi.c ft_calloc.c ft_substr.c\
			ft_strjoin.c ft_strtrim.c ft_itoa.c\
			ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
			ft_putstr_fd.c ft_split.c ft_putendl_fd.c\
			ft_putnbr_fd.c
SRC_BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c\
			ft_lstdelone.c ft_lstiter.c ft_lstlast.c\
			ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJ = $(SRC:%.c=%.o)
OBJ_BONUS = $(SRC_BONUS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar r $@ $^
	@echo "Libft compiled !"

bonus: $(OBJ_BONUS)
	@ar r $(NAME) $^
	@echo "Libft bonus compiled !"

%.o : %.c
	@echo "Compiling: $<"
	@$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
