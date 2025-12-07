NAME		= megaphone
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
SRC			= megaphone.cpp

GREEN		= \033[0;32m
RED			= \033[0;31m
YELLOW		= \033[0;33m
BLUE		= \033[0;34m
MAGENTA		= \033[0;35m
CYAN		= \033[0;36m
BOLD		= \033[1m
NC			= \033[0m

all: $(NAME)

$(NAME): $(SRC)
	@echo "$(CYAN)$(BOLD)🔨 Compiling $(NAME)...$(NC)"
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)
	@echo "$(GREEN)$(BOLD)✓ $(NAME) created successfully!$(NC)"
	@echo "$(MAGENTA)Run with: ./$(NAME)$(NC)"

clean:
	@echo "$(YELLOW)🧹 Cleaning up...$(NC)"
	@rm -rf $(NAME)
	@echo "$(GREEN)✓ Clean complete!$(NC)"

fclean: clean
	@echo "$(RED)🗑️  Full clean complete!$(NC)"

re: fclean all
	@echo "$(BLUE)$(BOLD)♻️  Rebuild complete!$(NC)"

.PHONY: all clean fclean re
