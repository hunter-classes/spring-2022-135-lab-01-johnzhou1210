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
  int year, month, result;
  std::cout << "Please enter year: ";
  std::cin >> year;
  std::cout << "Please enter month: ";
  std::cin >> month;

  if ((month < 8 && month % 2 != 0) ||
   (month >= 8 && month % 2 == 0)) {
    result = 31;
  } else {
    result = 30;
    if (month == 2){
      result = 28;
      if (isLeapYear(year)){
        result = 29;
      }
    }
  }
  std::cout << result << " days\n";
  return 0;
}
