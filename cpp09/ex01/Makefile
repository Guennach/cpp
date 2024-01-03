# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 12:47:45 by gothmane          #+#    #+#              #
#    Updated: 2024/01/03 12:10:24 by gothmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  main.cpp RPN.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = RPN

all : $(NAME)


%.o : %.cpp RPN.hpp 
	$(CC) $(CFLAGS) -o $@ -c $<
	
	
$(NAME) : $(OBJS) 
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 


clean : 
		rm -f $(OBJS)
		
fclean : clean
		rm -f $(NAME)
		

re : fclean all

.phony : all clean fclean re