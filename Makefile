NAME = libft.a
SRC = ft_bzero.c    ft_isdigit.c  ft_memcpy.c   ft_strdup.c   ft_strlcpy.c  ft_strnstr.c  ft_tolower.c\
ft_isalnum.c  ft_isprint.c  ft_memset.c   ft_striteri.c ft_strlen.c   ft_strrchr.c  ft_toupper.c\
ft_isalpha.c  ft_memchr.c   ft_split.c    ft_strjoin.c  ft_strmapi.c  ft_strtrim.c  main.c\
ft_isascii.c  ft_memcmp.c   ft_strchr.c   ft_strlcat.c  ft_strncmp.c  ft_substr.c

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