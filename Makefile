CC=clang++

NASM=nasm

CFLAGS=-Wall -Wextra -Werror

NASMFLAGS := -f elf64

AR := ar

ARFLAGS := rcs

RM := rm -f

SRCS := ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

TESTS := main.cpp ft_strlen.cpp ft_write.cpp ft_read.cpp ft_strcpy.cpp ft_strcmp.cpp ft_strdup.cpp

TESTS := $(addprefix tests/, $(TESTS))

OBJS := $(addprefix obj/, ${SRCS:.s=.o})

INCLUDE := include/libasm.h

LIB := lib/libasm.a

LIBDIR := $(addprefix lib/, $(LIB))

MAIN := main

all: $(LIB)

$(LIB): $(OBJS)
	mkdir -p obj
	mkdir -p lib
	$(AR) $(ARFLAGS) $@ $^

obj/%.o : src/%.s $(INCLUDE)
	$(NASM) $(NASMFLAGS) $< -o $@

clean:
	$(RM) $(OBJS) main.o

fclean: clean
	$(RM) $(LIB) $(MAIN)

# Run tests with gtest
test: $(LIB)
	@$(CC) $(CFLAGS) \
		-Llib \
		-I./include \
		-pthread \
		-o tests/test \
		$(TESTS) \
		-lasm \
		-lgtest
	@./tests/test
	@#$(RM) tests/test

re: fclean all

.PHONY: all clean fclean re