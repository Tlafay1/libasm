CC=gcc

NASM=nasm

CFLAGS=-Wall -Wextra -Werror

NASMFLAGS=-f elf64

AR=ar

ARFLAGS=rcs

RM=rm -f

SRCS := ft_strlen.s

OBJS := ${SRCS:.s=.o}

OBJDIR := $(addprefix obj/, $(OBJS))

LIB=libasm.a

MAIN=main

all: $(LIB) $(MAIN)

$(LIB): $(OBJDIR)
	$(AR) $(ARFLAGS) $@ $^

obj/%.o : src/%.s
	mkdir -p obj
	$(NASM) $(NASMFLAGS) $< -o $@

$(MAIN): main.c $(LIB)
	$(CC) $(CFLAGS) $< -L. -lasm -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(LIB) $(MAIN)

re: fclean all

.PHONY: all clean fclean re