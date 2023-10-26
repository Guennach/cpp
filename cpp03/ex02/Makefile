# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 09:59:37 by gothmane          #+#    #+#              #
#    Updated: 2023/10/26 12:20:45 by gothmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = FragTrap

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