NAME = megaphone

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -f

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<  -o $@

$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
