//Working file
#include <iostream>
#include <string>

int main() {
  std::string word;
  while (std::cin >> word) {
    if (static_cast<int>(word.size()) > 4) {
      std::cout << word << " ";
    }
  }
}
