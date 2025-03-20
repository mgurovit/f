
#include "app.h"

App::App(std::ostream& os)
    : logger(std::cerr), displayOutStream(os), menu(this) {}

void App::run() {
  while (true) {
    menu.display();
    int choice;
    std::cout << "Enter your choice: ";

    if (!(std::cin >> choice)) {  //  Check for input failure
      if (std::cin.eof()) break;  //  Stop loop if end of file is reached
      std::cin.clear();           // Reset error state

      std::cout << "ERROR: Invalid input, please enter a number between 1-4.\n";
      continue;  // Skip iteration if input was invalid
    }

    menu.handleUserInput(choice);

    if (choice == 4) {
      break;
    }
  }
}
