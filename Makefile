# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 17:25:27 by mzouine           #+#    #+#              #
#    Updated: 2024/04/22 17:10:24 by mzouine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

SRC = main.c ft_putstr_fd.c ft_atoi.c mz_parser.c mz_valid_arg.c mz_philo.c mz_routine.c

OBJS = $(SRC:%.c=%.o)
CC = cc
# CFLAGS = -Wall -Werror -Wextra
RM = rm -f
HEADER = philosophers.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re