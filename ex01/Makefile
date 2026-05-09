NAME = Span
CC = c++
HEADER =	Span.hpp \
			addNumber.tpp
FLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = Span.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

TEST11_SRC = tester_c++11.cpp
TEST11_OUT = tester_c++11
TEST11_FLAGS = -Wall -Wextra -Werror -std=c++11

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

test11: $(TEST11_SRC) $(HEADER)
	$(CC) $(TEST11_FLAGS) $(TEST11_SRC) Span.cpp -o $(TEST11_OUT)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST11_OUT)

re: fclean all

.PHONY: all clean fclean re
