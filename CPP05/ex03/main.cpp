#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main(void)
{
  std::cout << "=== Test 1: Intern Creates Forms ===" << std::endl;
  {
    Intern intern;
    AForm* form1 = intern.makeForm("presidential pardon", "Alice");
    AForm* form2 = intern.makeForm("robotomy request", "Bob");
    AForm* form3 = intern.makeForm("shrubbery creation", "Garden");
    AForm* form4 = intern.makeForm("invalid form", "Nobody");
    
    std::cout << std::endl;
    
    if (form1) {
      std::cout << form1 << std::endl;
      delete form1;
    }
    if (form2) {
      std::cout << form2 << std::endl;
      delete form2;
    }
    if (form3) {
      std::cout << form3 << std::endl;
      delete form3;
    }
    (void)form4;
  }
  
  std::cout << "\n=== Test 2: Sign and Execute Presidential Pardon ===" << std::endl;
  {
    Bureaucrat boss("Boss", 1);
    Intern intern;
    AForm* form = intern.makeForm("presidential pardon", "Criminal");
    
    if (form) {
      std::cout << form << std::endl;
      boss.signAForm(*form);
      std::cout << form << std::endl;
      boss.executeForm(*form);
      delete form;
    }
  }
  
  std::cout << "\n=== Test 3: Low Grade Can't Execute ===" << std::endl;
  {
    Bureaucrat lowGrade("Intern", 150);
    Bureaucrat highGrade("Manager", 1);
    Intern intern;
    AForm* form = intern.makeForm("robotomy request", "Target");
    
    if (form) {
      lowGrade.signAForm(*form);  // Will fail
      highGrade.signAForm(*form); // Will succeed
      lowGrade.executeForm(*form); // Will fail
      highGrade.executeForm(*form); // Will succeed
      delete form;
    }
  }
  
  std::cout << "\n=== Test 4: Shrubbery Creation ===" << std::endl;
  {
    Bureaucrat worker("Worker", 50);
    Intern intern;
    AForm* form = intern.makeForm("shrubbery creation", "Home");
    
    if (form) {
      worker.signAForm(*form);
      worker.executeForm(*form);
      delete form;
    }
  }
  
  return 0;
}
