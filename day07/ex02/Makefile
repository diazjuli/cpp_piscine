NAME = array

all: $(NAME)

$(NAME): main.cpp Array.hpp
	clang++ -Wall -Wextra -Werror -o $(NAME) main.cpp

clean:
	/bin/rm -f $(NAME)

fclean: clean

re: fclean all
