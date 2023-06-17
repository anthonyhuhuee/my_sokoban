##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## it does make
##

SRC		=	./src/main.c								\
			./src/error/error.c							\
			./src/error/error_char.c					\
			./src/open_window.c							\
			./src/init_game.c							\
			./src/map/load_file_in_mem.c				\
			./src/map/mem_alloc_2d_array.c				\
			./src/map/load_map.c						\
			./src/map/count_row.c						\
			./src/map/max_line.c						\
			./src/map/empty_temp.c						\
			./src/map/print_map.c						\
			./src/map/last_line.c						\
			./src/player/found_player.c					\
			./src/player/check_player.c					\
			./src/player/change_position.c				\
			./src/key_up/key_up.c						\
			./src/key_up/move_player_up.c	 			\
			./src/key_up/move_box_up.c		 			\
			./src/key_down/key_down.c					\
			./src/key_down/move_player_down.c			\
			./src/key_down/move_box_down.c				\
			./src/key_right/key_right.c					\
			./src/key_right/move_player_right.c			\
			./src/key_right/move_box_right.c			\
			./src/key_left/key_left.c					\
			./src/key_left/move_player_left.c			\
			./src/key_left/move_box_left.c				\
			./src/check_wall.c							\
			./src/box/found_box.c						\
			./src/box/check_box.c						\
			./src/ig_storage/found_storage.c			\
			./src/ig_storage/check_storage.c			\
			./src/flag_h_sokoban.c

OBJ			=	$(SRC:.c=.o)

NAME		=	my_sokoban

LDFLAGS		=	-L ./lib

LDLIBS		=	-lmy -lncurses

LDCRI		= 	--coverage -lcriterion

CPPFLAGS	=	-I ./include

LIB			=	./lib/libmy.a

UNIT 		= 	unit_tests

all:	$(NAME)

$(NAME):	$(LIB) $(OBJ)
	gcc -o $@ $(OBJ) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS)

$(LIB):
	make -C ./lib/my

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)
	make fclean -C lib/my

re:     fclean all

unit_tests: fclean
	gcc -o $(UNIT) $(SRC) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) $(LDCRI)

tests_run: unit_tests
	./unit_tests

run_tests: unit_tests
	./unit_tests

.PHONY: all clean fclean re unit_tests tests_run run_tests
