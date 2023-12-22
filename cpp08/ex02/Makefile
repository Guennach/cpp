# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 13:39:04 by gothmane          #+#    #+#              #
#    Updated: 2023/12/21 12:29:36 by gothmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  main.cpp 

OBJS = $(SRCS:.cpp=.o)

OBJS_TPP = $(SRCS:.tpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = stack

all : $(NAME)


%.o : %.cpp MutantStack.hpp 
	$(CC) $(CFLAGS) -o $@ -c $<
	
	
$(NAME) : $(OBJS) 
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 


clean : 
		rm -f $(OBJS)
		
fclean : clean
		rm -f $(NAME)
		

re : fclean all

.phony : all clean fclean re