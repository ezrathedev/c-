#include <iostream>

// this should print out "hello what is your name "
int main(){
  std::string name;
  std::cout << "Hello, what is your: ";
  std::cin >> name;
  std::cout << "your name is " << name;
}
