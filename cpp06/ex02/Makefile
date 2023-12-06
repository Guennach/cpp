# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 15:12:51 by gothmane          #+#    #+#              #
#    Updated: 2023/11/21 13:22:10 by gothmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  Base.cpp A.cpp B.cpp C.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Bro

all : $(NAME)


%.o : %.cpp 
	$(CC) $(CFLAGS) -o $@ -c $<
	
	
$(NAME) : $(OBJS) Base.hpp A.hpp B.hpp C.hpp
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)


clean : 
		rm -f $(OBJS)
		
fclean : clean
		rm -f $(NAME)
		

re : fclean all

.phony : all clean fclean re