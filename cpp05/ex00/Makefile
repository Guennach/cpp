# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 14:34:05 by gothmane          #+#    #+#              #
#    Updated: 2023/11/16 14:21:12 by gothmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  Bureaucrat.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Bro

all : $(NAME)


%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<
	
	
$(NAME) : $(OBJS) Bureaucrat.hpp
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)


clean : 
		rm -f $(OBJS)
		
fclean : clean
		rm -f $(NAME)
		

re : fclean all

.phony : all clean fclean re