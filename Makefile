##
## Makefile for gol in /home/admin/Documents/Programming/gol
## 
## Made by Thomas Murgia
## Login   <garuda1@protonmail.com>
## 
## Started on  Sun Jul 03 23:48:30 2016 Thomas Murgia
## Last update Sun Jul 03 23:48:30 2016 Thomas Murgia
##

CC			= gcc
RM			= rm -f
NAME		= gol
SRCS		= source/gol.c \
					source/ui.c \
					source/args.c \
					source/cell.c \
					source/matrix.c \
					source/world.c
OBJS		= $(SRCS:.c=.o)
LIBS		= -lncurses
CFLAGS	= -Wall \
					-Wextra \
					-Werror \
					-ansi \
					-pedantic \
					-std=c89 \
					-O2 \
					-g3 \
					-I./include

all			: $(NAME)

$(NAME)	: $(OBJS)
					$(CC) $(OBJS) $(CFLAGS) $(LIBS) -o $(NAME)

clean		:
					$(RM) $(OBJS)

fclean	:	clean
					$(RM) $(NAME)

re			: fclean all

.PHONY	: all clean fclean re
