NAME = MutantStack 
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp 
OBJS		= $(SRCS:.cpp=.o)
HEADERS		= MutantStack.hpp 
GREEN		= \033[0;32m
RED			= \033[0;31m
YELLOW		= \033[0;33m
CYAN		= \033[0;36m
BOLD		= \033[1m
NC			= \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(CYAN)$(BOLD)🔗 Linking objects...$(NC)"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(BOLD)✓ $(NAME) created successfully!$(NC)"
	@echo "$(YELLOW)  Run with: ./$(NAME)$(NC)"

%.o: %.cpp $(HEADERS)
	@echo "$(YELLOW)⚙️  Compiling $<...$(NC)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(YELLOW)🧹 Removing object files...$(NC)"
	@rm -f $(OBJS)
	@echo "$(GREEN)✓ Clean complete!$(NC)"

fclean: clean
	@echo "$(RED)🗑️  Removing $(NAME)...$(NC)"
	@rm -f $(NAME)
	@echo "$(GREEN)✓ Full clean complete!$(NC)"

re: fclean all
	@echo "$(CYAN)$(BOLD)♻️  Rebuild complete!$(NC)"

.PHONY: all clean fclean re
