NAME = bureaucrat

CXX = c++;

CXXFLAGS = -Wall -Wextra -std=c++17
SRC =  main.cpp bureaucrat.cpp
OBJ = $(SRC:.cpp = .o)

all :(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAG) -o $(NAME) $(OBJ) 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	fclean all