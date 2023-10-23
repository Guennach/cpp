# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 10:14:50 by gothmane          #+#    #+#              #
#    Updated: 2023/10/21 10:25:14 by gothmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

SRCS = main.cpp Harl.cpp

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
		
fclean : clean
	rm -f $(NAME)
	
re: fclean clean all

.phony : all clean re fclean
