#include <iostream>

int main() {
  int num { 5 };
  std::cout << num << std::endl;     // выводим значение переменной num
  std::cout << &num << std::endl;    // выводим адрес памяти переменной num
  std::cout << *(&num) << std::endl; // выводим значение по адресу памяти переменной num
                                 // (скобки не требуются, но упрощают чтение)

  return 0;
}