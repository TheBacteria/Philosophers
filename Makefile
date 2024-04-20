# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/19 16:12:00 by mzouine           #+#    #+#              #
#    Updated: 2024/04/19 16:12:23 by mzouine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

SRC = main.c

OBJS = $(SRC:%.c=%.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
HEADER = philo.h

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