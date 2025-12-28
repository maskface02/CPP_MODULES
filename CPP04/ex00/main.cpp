#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
  std::cout << "Constructors :" << std::endl;
  
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  
  std::cout << "\ntesting...... " << std::endl;

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();
  
  std::cout << "\nDestructors :" << std::endl;
  
  delete meta;
  delete i;
  delete j;
  return 0;
}
