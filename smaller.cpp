#include <iostream>

int main(){
  int input1, input2, smaller;
  std::cout << "Enter the first number: ";
  std::cin >> input1;
  std::cout << "Enter the second number: ";
  std::cin >> input2;
  if (input1 < input2){
    smaller = input1;
  } else {
    smaller = input2;
  }
  std::cout << "The smaller of the two is " << smaller << "\n";
  return 0;
}
