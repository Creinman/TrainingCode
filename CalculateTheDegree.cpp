#include <iostream>

int result(int number, int degree) {
  int result = 1;
  for (int i = 1; i < degree + 1; i++) {
    result *= number;
  }
  return result;
}

int main() {
  int number;
  int degree;
  std::cout << "Введите целое число и целую положительную степень степень\n";
  std::cin>>number>>degree;
  printf("результат %d", result(number, degree));
  return 0;
}
