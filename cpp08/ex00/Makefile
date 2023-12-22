# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 14:05:38 by gothmane          #+#    #+#              #
#    Updated: 2023/12/21 12:29:24 by gothmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = find

all : $(NAME)


%.o : %.cpp easyfind.hpp
	$(CC) $(CFLAGS) -o $@ -c $<
	
	
$(NAME) : $(OBJS) 
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)


clean : 
		rm -f $(OBJS)
		
fclean : clean
		rm -f $(NAME)
		

re : fclean all

.phony : all clean fclean re