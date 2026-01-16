#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main(void)
{
  std::cout << "Test 1: Intern Creates Forms" << std::endl;
  {
    Intern intern;
    AForm* form1 = intern.makeForm("presidential pardon", "Alice");
    AForm* form2 = intern.makeForm("robotomy request", "Bob");
    AForm* form3 = intern.makeForm("shrubbery creation", "Garden");
    AForm* form4 = intern.makeForm("invalid form", "Nobody");
    (void)form1;
    (void)form2;
    (void)form3;
    (void)form4;
  }
  
  std::cout << "\nTest 2: Sign and Execute Presidential Pardon" << std::endl;
  {
    Bureaucrat boss("Boss", 1);
    Intern intern;
    AForm* form = intern.makeForm("presidential pardon", "Criminal");
    
    if (form) {
      boss.signAForm(*form);
      boss.executeForm(*form);
      delete form;
    }
  }
  
  std::cout << "\nTest 3: Low Grade Can't Execute" << std::endl;
  {
    Bureaucrat lowGrade("Intern", 150);
    Bureaucrat highGrade("Manager", 1);
    Intern intern;
    AForm* form = intern.makeForm("robotomy request", "Target");
    
    if (form) {
      lowGrade.signAForm(*form);  
      highGrade.signAForm(*form); 
      lowGrade.executeForm(*form);
      highGrade.executeForm(*form);
      delete form;
    }
  }
  
  std::cout << "\nTest 4: Shrubbery Creation" << std::endl;
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
}
