#Makefile

src	=	$(wildcard main.c src/*.c)

obj	=	$(src:.c=.o)

name	=	my_fg

cc	=	clang

flags	=	-Wall -Wextra -Werror -g3

all:	$(name)

$(name):	$(obj)
	        $(cc) $(src) $(flags) -o $(name)
			rm -f *.o src/*.o

clean:
	rm -f $(obj)

fclean:	clean
	rm -f $(name)

re:	fclean all