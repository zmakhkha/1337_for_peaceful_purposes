SRC = $(ss)


all: _GET $(NAME)
	echo $(SRC)

_GET :
	export {ss=$(/bin/ls *.h)}

clean:
		rm -f *.o
fclean:
		rm -f *.o *.a
NAME= libft.a



#$(NAME)	:	$(SRC)
#	gcc -Wall -Wextra -Werror -c %.c