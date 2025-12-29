#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
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
}
{
  std::cout << "\nWrong example :" << std::endl;
  std::cout << "\nConstructors :" << std::endl; 

  const WrongAnimal* meta = new WrongAnimal();
  const Animal* j = new Dog();
  
  std::cout << "\ntesting...... " << std::endl;
  
  const WrongAnimal* i = new WrongCat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound(); //will output the cat sound!
  j->makeSound();
  meta->makeSound();

  std::cout << "\nDestructors :" << std::endl;

  delete meta;
  delete j;
  delete i;
} 
  return 0;
}
