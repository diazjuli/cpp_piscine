NAME=megaphone

all: $(NAME)

$(NAME):
	@clang++ -Wall -Wextra -Werror megaphone.cpp -o $(NAME)
	@echo "Compiled megaphone"

clean:

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo "Deleted megaphone"

re: fclean all
