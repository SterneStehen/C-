# Имя исполняемого файла
NAME = phonebook

# Компилятор и флаги компиляции
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Исходные файлы и объектные файлы
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)

# Правила сборки
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Очистка объектных файлов
clean:
	rm -f $(OBJS)

# Полная очистка (включая исполняемый файл)
fclean: clean
	rm -f $(NAME)

# Пересборка проекта
re: fclean all

.PHONY: all clean fclean re
