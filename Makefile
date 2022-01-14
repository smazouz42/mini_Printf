HADER = ft_printf.h
NAME = libftprintf.a
SRCS = ft_putadresse.c ft_hexd_low.c ft_hexd_up.c  ft_printf.c  ft_printf.o   ft_putchar.c  ft_putnbr.c   ft_putnbr_u.c ft_putstr.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar -rcs

all: $(NAME)

$(NAME):$(OBJS) $(HADER)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re: fclean all
