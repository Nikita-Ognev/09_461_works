#include <iostream>

int main() {
  
  setlocale(LC_ALL, "RU");

  // int === the same inital variable 
  int number = 45;
  // variable created 

  // change current variable value
  number = 3;

  // console printing
  std::cout << number << std::endl;

  // create two variables
  int a, b;

  // input 
  std::cout << "please enter a value";
  std::cin >> a;

  std::cout << "please enter b value";
  // get info from input to b variable
  std::cin >> b;


  // console input values
  std::cout << a << std::endl;
  std::cout << b << std::endl;


  // types of data

  // short integer (uses less RAM than regular int )
  short num1 = 1; // short range of numbers (2 byte) / -32K to 32k

  int num2 = 2; // medium range of numbers (4 byte) / -2B to 2B

  // long integet (uses more RAM than regular int)
  long num3 = 3;  // long range of numbers (8 byte) / too large


  // remove values below 0
  unsigned short num4 = 4; // the same short int but range = 0 to 65k
  unsigned short num5 = 5; 
  unsigned short num6 = 6; 

  /*

    this will return error (each variable need a unique name)

    short num4 = 3;
    long num4 = 4; 
  */


  // numbers with dot
  float num7 = 5.47385; // range simular int

  double num8 = 6.5784; // range simular long 


  // symbol

  char sym = 'q';

  // bulian variable (true/false)

  bool isHappy = true;
  bool isAngry = false;  

  return 0;
}