#include <iostream>

typedef int amper;
typedef int volt;
typedef int watt;

int main() {
  // BEGIN (write your solution here)
  amper voltage = 220;
  volt current_strength = 16;
  watt power = voltage * current_strength;
  std::cout << power << std::endl;


  // END
}
