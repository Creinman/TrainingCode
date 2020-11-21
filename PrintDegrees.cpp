#include <iostream>

void table(int number) {
  int result = number;
  printf("степень \nчисла %d     результат\n", number);
  printf("0    ------> 1\n");
  printf("1    ------> %d\n", number);
  for (int i = 2; i < 11; i++) {
    result *= number; 
    printf("%d    ------> %d\n", i, result);
  }
}

int main() {
  int number;
  std::cout << "Введите число, для которго нужно вывести таблицу степеней от 0 до 10\n";
  std::cin>>number;
  table(number);
  return 0;
}
