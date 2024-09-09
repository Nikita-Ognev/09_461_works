#include <iostream>

int main() {

  setlocale(LC_ALL, "RU");

  int num;
  std::cout << "enter the number";
  std::cin >> num;
  
  // if num more then 3 code in {...} will be started
  if (num > 3) {
    std::cout << "entered number more then 3";
  }

  // check if num = 3
  if (num == 3) {
    std::cout << "entered number = 3";
  }

  // check if num not = 3
  if (num != 3) {
    
  }

  // check if num = 3 or more then 3
  if (num >= 3) {
    
  }

  // check if num = 3 or less then 3
  if (num <= 3) {
    
  }

  // you can add alternative variant (use else)
  if (false) {

  } else {
    std::cout << "else is running";
  }


  if (false) {

  } else if (true) {
    std::cout << "else if is running";
  }

  // if you need to check two condition

  // if two or only one is true code in {...} will be started
  if (num > 3 || num ==11) {

  }

  // if only two is true code will be started
  if (num == 3 && num != 4) {

  }

  // you can check bull 
  bool variant = true;
  if (variant) {

  }



  // switch case (if you need to check more then two variants)

  switch (num) {
    case 5:
      std:: cout << "num is 5";
      break;

    case 10:
      std:: cout << "num is 10";
      break;

    case 11:
      std:: cout << "num is 11";
      break;

    // if all cases not started
    default:
      break;
  }

  return 0;
}