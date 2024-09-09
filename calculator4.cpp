#include <iostream>
#include <time.h>

// and you can not write std:: in each command
using namespace std;

int main() {

  float firstNum, secondNum, res;
  cout << "enter first number";
  cin >> firstNum;

  cout << "enter second number";
  cin >> secondNum;


  char math;

  cout << "enter the math symbol (+ - / * )";
  cin >> math;

  switch (math) {

    case '+':
      res = firstNum + secondNum;
      break;
    case '-':
      res = firstNum - secondNum;
      break;
    case '/':
      res = firstNum / secondNum;
      break;
    case '*':
      res = firstNum * secondNum;
      break;

    default:
      cout << "error math symbol not found";
      break;
  }

  cout << "Result:" << res << endl;

  // other math operations

  int a = 5, b = 3, c;

  c = a % b;
  // 3 % 3 return 0; 3 % 2 return 1; balance after division
  cout << c;

  // short operation
  c -= 5;
  c *= 5;
  c /= 5;
  c += 5;

  // if you need plus 1 to number
  //return c + 1
  c++;
  //return c - 1
  c--;


  // remove time addiction (rebuild base for random generate)
  // see more
  // https://ru.stackoverflow.com/questions/40405/%D0%97%D0%BD%D0%B0%D1%87%D0%B5%D0%BD%D0%B8%D0%B5-%D1%81%D1%82%D1%80%D0%BE%D0%BA%D0%B8-srandtimenull

  srand(time(NULL));


  //generate random num
  int randomNum = 1 + rand() % 20;
  cout << randomNum <<endl;


  return 0;

}