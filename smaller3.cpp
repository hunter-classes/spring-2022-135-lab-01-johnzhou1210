#include <iostream>

int main(){
  int int1, int2, int3, smallest;
  std::cout << "Enter first number: ";
  std::cin >> int1;
  std::cout << "Enter second number: ";
  std::cin >> int2;
  std::cout << "Enter third number: ";
  std::cin >> int3;
  if (int1 <= int2 && int1 < int3){
    smallest = int1;
  }
  else if (int2 <= int3 && int2 < int1){
    smallest = int2;
  } else {
    smallest = int3;
  }
  std::cout << "The smallest of the three is " << smallest << "\n";

  return 0;
}
