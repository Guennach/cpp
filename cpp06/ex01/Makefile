# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 10:48:10 by gothmane          #+#    #+#              #
#    Updated: 2023/11/16 15:09:45 by gothmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Serializer.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = convert

all : $(NAME)


%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<
	
	
$(NAME) : $(OBJS) Serializer.hpp
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)


clean : 
		rm -f $(OBJS)
		
fclean : clean
		rm -f $(NAME)
		

re : fclean all

.phony : all clean fclean re