# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 11:04:33 by gothmane          #+#    #+#              #
#    Updated: 2023/10/23 11:27:07 by gothmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = zombie

SRCS = Zombie.cpp newZombie.cpp main.cpp randomChump.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:.cpp=.o)

CC = c++



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
