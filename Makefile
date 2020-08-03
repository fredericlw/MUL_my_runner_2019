##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Generic Makefile
##

SRC	=	src/main.c    \
		src/animations.c    \
		src/tools.c    \
		src/sound.c    \
		src/texture.c    \
		src/parallax.c    \
		src/clean.c    \
		src/display.c    \
		src/setup.c    \
		src/text.c    \
		src/check_pos.c    \
		src/map_handling.c    \
		src/game_setup.c    \
		src/set_obj.c    \
		src/collisions.c    \
		src/display_end.c    \
		src/display_menu.c

OBJ	=	$(SRC:.c=.o)

CFLAGS =	-L./lib/my -lmy -I./include/

CSFML_FLAGS =	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -I./include/ -L./lib/my -lmy

NAME =	my_runner

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C./lib/my
	gcc -o $(NAME) $(OBJ) $(CSFML_FLAGS)

clean:
	make clean -C./lib/my
	rm -f $(OBJ)

fclean: clean
	make fclean -C./lib/my
	rm -f $(NAME)

re: fclean all