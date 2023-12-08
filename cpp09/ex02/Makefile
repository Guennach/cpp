# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 12:47:45 by gothmane          #+#    #+#              #
#    Updated: 2023/12/08 10:33:21 by gothmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  main.cpp 

OBJS = $(SRCS:.cpp=.o)

OBJS_TPP = $(SRCS:.tpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++11
NAME = JPL

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