# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 12:20:52 by gothmane          #+#    #+#              #
#    Updated: 2023/10/19 12:23:21 by gothmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ref

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98


all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<


$(NAME):  $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	
clean : 
		rm -f $(OBJS)
		
fclean :
	rm -f $(NAME)
	
re: fclean clean all

.phony : all clean
