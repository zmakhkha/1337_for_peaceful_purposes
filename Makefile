NAME = libft.a
SRC = ft_bzero.c      ft_isprint.c    ft_putchar_fd.c ft_strdup.c     ft_strmapi.c    ft_tolower.c\
ft_calloc.c     ft_memchr.c     ft_putendl_fd.c ft_striteri.c   ft_strncmp.c    ft_toupper.c\
ft_isalnum.c    ft_memcmp.c     ft_putnbr_fd.c  ft_strjoin.c    ft_strnstr.c    main.c\
ft_isalpha.c    ft_memcpy.c     ft_putstr_fd.c  ft_strlcat.c    ft_strrchr.c\
ft_isascii.c    ft_memmove.c    ft_split.c      ft_strlcpy.c    ft_strtrim.c\
ft_isdigit.c    ft_memset.c     ft_strchr.c     ft_strlen.c     ft_substr.c

OBJ = $(SRC:.c=.o)

all: $(NAME) 

$(OBJ) : $(SRC)
	cc -c -Wall -Wextra -Werror -g $(SRC)

$(NAME) : $(OBJ) libft.h
	ar -rc	$(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re	: fclean	all