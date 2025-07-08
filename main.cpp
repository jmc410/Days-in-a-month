#include <iostream>
using namespace std;

int main() {
  int Month, year, days;

  std::cout << "Enter Month (1-12): ";
    std::cin >> Month;
      // incase of invalid input, the program will prompt the user to enter a valid input
    while (Month < 1 || Month > 12) {
    std::cout << "Month must be between 1 and 12.";
      std::cin >> Month;
    }

  std::cout << "Enter Year: ";
  std::cin >> year;

  switch (Month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
    days = 31;
    break;
    case 4: case 6: case 9: case 11:
    days = 30;
    break;
    case 2:

    if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0 )) {
      days = 29;
    } else { 
    days = 28;
    }
    break;
  }

  std::cout << days << " days" << std::endl;

  return 0;
  
  }
  