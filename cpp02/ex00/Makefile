# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 12:57:12 by gothmane          #+#    #+#              #
#    Updated: 2023/10/23 13:02:05 by gothmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = Fixed.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Fixed

all : $(NAME)


%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<
	
	
$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)


clean : 
		rm -f $(OBJS)
		
fclean : clean
		rm -f $(NAME)
		

re : fclean all

.phony : all clean fclean re