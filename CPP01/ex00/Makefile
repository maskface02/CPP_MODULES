NAME		= zombie
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS		= Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJS		= $(SRCS:.cpp=.o)

HEADERS		= Zombie.hpp

GREEN		= \033[0;32m
RED			= \033[0;31m
YELLOW		= \033[0;33m
NC			= \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(YELLOW)Linking objects...$(NC)"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)✓ $(NAME) created successfully!$(NC)"

%.o: %.cpp $(HEADERS)
	@echo "$(YELLOW)Compiling $<...$(NC)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Removing object files...$(NC)"
	@rm -f $(OBJS)
	@echo "$(GREEN)✓ Clean complete!$(NC)"

fclean: clean
	@echo "$(RED)Removing $(NAME)...$(NC)"
	@rm -f $(NAME)
	@echo "$(GREEN)✓ Full clean complete!$(NC)"

re: fclean all

.PHONY: all clean fclean re
