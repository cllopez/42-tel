NAME=libft.a
AR=ar rcs
CFLAGS=-Wall -Werror -Wextra
RM=rm -f

FILES = ft_atoi.c \
		ft_isdigit.c \
		ft_memmove.c \
     	ft_strlcpy.c \
		ft_bzero.c \
    	ft_isprint.c \
  		ft_memset.c \
      	ft_strchr.c \
    	ft_strlen.c \
   		ft_substr.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_tolower.c \
		ft_isalnum.c \
		ft_memchr.c \
		ft_strncmp.c \
		ft_toupper.c \
		ft_isalpha.c \
		ft_memcmp.c \
		ft_strjoin.c \
		ft_strnstr.c \
		ft_isascii.c \
		ft_memcpy.c \
		ft_strlcat.c \
		ft_strrchr.c \
		ft_strtrim.c


OBJS = $(FILES:.c=.o)

BONUS_OBJS = $(BONUS_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(BONUS_OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) -c $(CFLAGS) $<

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus