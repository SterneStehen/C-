#include <iostream>
#include <iomanip>

int main() {
  // BEGIN (write your solution here)
  double fuel_tank = 43;
  double fuel_consumtion =  8.8;
  double range = 10;
  double result = fuel_tank / fuel_consumtion * range;
  std::cout << result << std::endl;
  // END
}
