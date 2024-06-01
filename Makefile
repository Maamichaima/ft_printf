SRC = ft_printf_c.c ft_printf_int.c ft_printf_p.c ft_printf_s.c ft_printf_xX.c ft_printf.c ft_printf_u.c
OBJ = ${SRC:.c=.o}
NAME = libftprintf.a 
CFLAGS = -Wall -Wextra -Werror
all : ${NAME}
${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}
clean :
	${RM} ${OBJ}
fclean : clean
	${RM} ${NAME}
re: fclean all
