#my first Makefile

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all:
	$(CC) $(CFLAGS) ft_atoi.c main_atoi.c -o m
	$(CC) $(CFLAGS) ft_putchar_fd.c main_putchar_fd.c -o putchar
	$(CC) $(CFLAGS) ft_putstr_fd.c main_putstr.c -o putstr
	$(CC) $(CFLAGS) ft_putendl_fd.c ft_putstr_fd.c main_putendl_fd.c -o putendl
	$(CC) $(CFLAGS) ft_putnbr_fd.c ft_putchar_fd.c main_putnbr_fd.c -o putnbr
	$(CC) $(CFLAGS) ft_strjoin.c ft_strlen.c main_strjoin.c -o strjoin
	$(CC) $(CFLAGS) ft_strlen.c main_strlen.c -o strlen
	$(CC) $(CFLAGS) ft_strtrim.c ft_strlen.c main_strtrim.c -o strtrim
	$(CC) $(CFLAGS) ft_substr.c ft_strlen.c main_substr.c -o substr

exec:
	./substr | cat -e
	./strjoin | cat -e
	./strtrim | cat -e
	./strlen | cat -e
	./putchar | cat -e
	./putstr | cat -e
	./putnbr | cat -e
	./putendl | cat -e

clean:
	rm -rf m
	rm -rf substr
	rm -rf strjoin
	rm -rf strtrim
	rm -rf strlen
	rm -rf putchar
	rm -rf putstr
	rm -rf putendl
	rm -rf putnbr