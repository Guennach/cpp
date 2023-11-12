# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 11:38:24 by gothmane          #+#    #+#              #
#    Updated: 2023/11/06 13:25:49 by gothmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp  

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Materia

all : $(NAME)


%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $< 
	
	
$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) -o  $(NAME) $(OBJS) 


clean : 
		rm -f $(OBJS)
		
fclean : clean
		rm -f $(NAME)
		

re : fclean all

.phony : all clean fclean re