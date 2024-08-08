#include <iostream>

int main() {
  int euros_count = 100;
  
  // BEGIN (write your solution here)
  auto dollar_count  { euros_count * 1.25};
  auto rub  {dollar_count * 60};
  std::cout << dollar_count << "\n";
  std::cout << rub << std::endl;
  // END
}
