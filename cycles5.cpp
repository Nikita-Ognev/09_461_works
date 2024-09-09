#include <iostream>
#include <time.h>

using namespace std;

int main() {
  
  // cycle for 
  for (int i = 0 /*initial iter variable*/; i < 10 /*condition*/; i++ /*every iteration do (i + 1)*/) {
    // this parth of code start while i < 10 and not i = 10 (10 times 0, 1, 2, 3, ...)
    cout << "1. El:" << i << endl;
  }

  // cycle while
  int j = 0;
  // while start code when j < 3 = true
  while (j < 3/* condition */) {
    cout << "2. El:" << j << endl;
    j++;
  }


  // cycle do while
  int k = 100;

  // аlways do part start one time actualy while condition return false 
  // if while condition return true do part start one more time
  do {
    cout << "3. El" << k << endl;
    k -= 10;
  } while (k < 10);

  // operators in cycles

  for (int i = 1; i < 15; i++) {
    // stop a cycle
    if (i == 10) {
      break;
    }

    // start next cycle iteration (code under this if will be ignored)
    if (i % 2 == 0) {
      continue;
    }

    cout << "4. El" << i << endl;
  }
  
  // example 
  // let's create a guess the number game
  
  srand(time(NULL));
  int randomNum = 1 + rand() % 15; 
  int userNum;
  bool stop = false;

  do {
    cout << "enter your number" << endl;
    cin >> userNum;
    if (userNum != randomNum) {
      cout << "miss" << endl;
    } else {
      stop = true;
    } 
  } while (!stop);

  cout << "success" << endl;

  

  return 0;
}