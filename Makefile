# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arabenst <arabenst@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 17:40:26 by arabenst          #+#    #+#              #
#    Updated: 2023/04/19 08:43:17 by arabenst         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

OBJDIR	=	./obj

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra

AR		=	ar
ARFLAGS	=	rcs

RM		=	rm
RMFLAGS	=	-Rf

SRCS	=	$(wildcard */*.c)
SRCS	+=	$(wildcard */*/*.c)
OBJS	=	$(addprefix $(OBJDIR)/,$(notdir $(SRCS:.c=.o)))

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^

$(OBJDIR)/%.o: */%.c | $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR)/%.o: */*/%.c | $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@$(RM) $(RMFLAGS) $(OBJDIR)

fclean: clean
	@$(RM) $(RMFLAGS) $(NAME)

re: fclean all

.PHONY: all clean fclean re