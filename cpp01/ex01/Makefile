# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 11:04:33 by gothmane          #+#    #+#              #
#    Updated: 2023/10/21 10:24:57 by gothmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = zombie

SRCS = Zombie.cpp  main.cpp ZombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98


all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<


$(NAME):  $(OBJS) Zombie.hpp
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	
clean : 
		rm -f $(OBJS)
		
fclean : clean
	rm -f $(NAME)
	
re: fclean clean all

.phony : all clean re fclean
