##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile
##

SRC	=	my_compute_power_rec.c \
        my_compute_square_root.c \
        my_find_prime_sup.c \
        my_getnbr.c \
		my_isneg.c \
		my_is_prime.c \
		my_putchar.c \
		my_put_nbr.c \
		my_putstr.c \
		my_revstr.c \
		my_showmem.c \
		my_showstr.c \
		my_show_word_array.c \
		my_sort_int_array.c \
		my_strcapitalize.c \
		my_strcat.c \
		my_strcmp.c \
		my_strcpy.c \
		my_str_isalpha.c \
		my_str_islower.c \
		my_str_isnum.c \
		my_str_isprintable.c \
		my_str_isupper.c \
		my_strlen.c \
		my_strlowcase.c \
		my_strncat.c \
		my_strncmp.c \
		my_strncpy.c \
		my_strstr.c \
		my_strupcase.c \
		my_swap.c \
		my_strdup.c \
		main_function/check_flags.c \
		main_function/function_pointers.c \
		main_function/call_flag.c \
		main_function/call_flag2.c \
		main_function/call_flag3.c \
		main_function/my_printf.c \
		flags/percent_flag.c \
		flags/b_flag.c \
		flags/o_flag.c \
		flags/p_flag.c \
		flags/u_flag.c \
		flags/x_flag.c \
		flags/x_flag_upcase.c \
		flags/s_flag_printable.c

OBJ	=	$(SRC:.c=.o)

NAME	=	test

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)
	cp libmy.a ../
	mkdir -p ../../include/
	cp my.h ../../include

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
