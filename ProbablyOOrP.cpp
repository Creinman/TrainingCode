#include <iostream>
#include <ctime>

void result(int number) {
  srand(time(0));
  int O = 0;
  int P = 0;
  for (int i = 0; i < number; i++) {
    int caseDrop = rand()%100 +0;
    if (caseDrop >= 50) {
      O += 1;
      printf("O\n");
    } else {
      P += 1;
      printf("P\n");
      }  
    }

  float percent = 0;
  if (P > O) {
    percent = 100*P/number;
    printf("%.2f проц в пользу P\n", percent);
  } else if (O > P) {
    percent = 100*O/number;
    printf("%.2f проц в пользу O\n", percent);
    } else printf("ничья");
  
  }

int main() {
  int number;
  std::cout<<"введите количество экспермиентов\n";
  std::cin>>number;
  result(number);
  return 0;
}

