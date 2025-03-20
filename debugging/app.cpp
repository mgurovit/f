#include <iostream>
#include <limits>
#include "app.h"
#include "app.h"

App::App(std::ostream& os)
    : logger(std::cerr), displayOutStream(os), menu(this) {}

void App::run() {
  while (true) {
    menu.display();
    int choice;
    std::cout << "Enter your choice: ";

    if (!(std::cin >> choice)) {  // 
      if (std::cin.eof()) break;  // 
      std::cin.clear();  // Reset error state
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
      std::cout << "Invalid input! Please enter a number.\n";
      continue;  // Skip iteration if input was invalid
  }

    menu.handleUserInput(choice);

    if (choice == 4) {
      break;
    }
  }
}
