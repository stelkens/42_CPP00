.PHONY: all clean fclean re debug

NAME = phoneBook

SRC = ${addprefix src/, main.cpp\
						Contact.cpp\
						PhoneBook.cpp\
						utils.cpp}

HEADERS =  ${addprefix include/,	Contact.hpp \
          							PhoneBook.hpp \
         							utils.hpp}

OBJ = $(SRC:src/%.cpp=build/%.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude

CXX = c++

DFLAG = -g

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(OBJ) -o $(NAME)

build/%.o: src/%.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

debug: CXXFLAGS += $(DFLAG)
debug:	fclean $(NAME)
		@echo "Debug_Build done"

clean:
	rm -rf build

fclean: clean
	rm -f $(NAME)

re: fclean all