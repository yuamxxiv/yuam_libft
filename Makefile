# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amancheg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 14:32:08 by amancheg          #+#    #+#              #
#    Updated: 2025/11/27 00:00:13 by amancheg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS_DIR = srcs

INCLUDES_DIR = includes 

SRCS = $(SRCS_DIR)

OBJS = $(SRCS: .c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES_DIR)

AR = ar rcs

RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o %.c
	$(cc) $(FLAGS) -C $ < -O $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re : fclean all 

.PHONY all clean fclean re
