NAME = phoneBook

### PATH ###
SRCS_PATH = srcs/
OBJ_PATH  = obj/

FLAGS = -Wall -Werror -Wextra

INC = -I ./includes/

SRC = srcs/main.cpp srcs/PhoneBook.cpp
		  
OBJ = main.o PhoneBook.o

all: $(NAME)

$(NAME):
	@clang++ $(FLAGS) $(INC) -c $(SRC)
	@clang++ -o $(NAME) $(OBJ)
	@echo "Compiled phoneBook"

clean:
	@/bin/rm -rf $(OBJ)
	@echo "Removed: $(OBJ)"

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo "Removed $(NAME)"

re: fclean all

