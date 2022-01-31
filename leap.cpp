#include <iostream>

bool isLeapYear(int yr){
  if (yr % 4 != 0){
    return false;
  } else if (yr % 100 != 0){
    return true;
  } else if (yr % 400 != 0){
    return false;
  }
  return true;
}

int main(){
  int year;
  std::cout << "Please enter a year: ";
  std::cin >> year;
  bool leapYear = isLeapYear(year);
  if (leapYear){
    std::cout << "Leap year\n";
  } else {
    std:: cout << "Not leap year\n";
  }
  return 0;
}
