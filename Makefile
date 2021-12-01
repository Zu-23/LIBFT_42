SRC= ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strchr.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_memset.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcpy.c \
	ft_memcmp.c \
	ft_bzero.c \
	ft_strrchr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putnbr_fd.c \
	ft_putendl_fd.c \
	ft_itoa.c \
	ft_strrev.c \
	ft_strmapi.c \
	ft_striteri.c \

CFLAGS = -Wall -Wextra -Werror

OBJECTS = $(SRC:.c=.o)

NAME = libft.a
CC = gcc
RM = rm -f
AR = ar rcs

all: $(NAME)

SRCB= ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c

OBJB = $(SRCB:.c=.o)

bonus: all $(OBJB)
	$(AR) $(NAME) $(OBJB)
	
$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS) $(OBJB)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
