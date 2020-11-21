#include <iostream>
#include <string>

struct Products
{
public:

  std::string name;
  double price;  
  int quantity = 0;

  void addQuantity(int inputQuantity) {
    quantity += inputQuantity; 
  }

  double localSumm() {
  return quantity*price;
  }
};

void printProduct(Products *product) {
    for (int i = 1; i < 6; i++) {
    std::cout<<i<<"    "<<product[i].name<<"     "<<product[i].price<<std::endl;
    }
}

int main() {
  double totalSumm = 0;
  Products product[6];
  product[1] = {"bread", 15};
  product[2] = {"milk", 18};
  product[3] = {"water", 19};
  product[4] = {"Vodka", 100};
  product[5] = {"onion", 25};
  /*Products kiwi {"kiwi", 15};
  Products bread {"bread", 12};
  Products milk {"milk", 19};*/

  printProduct(product);

  while(true) {
    int inputNumber;
    int inputQuantity;
    std::cout<<"введите номер и количество\n";
    std::cin>>inputNumber;
    if (inputNumber == -1) break;
    std::cin>>inputQuantity;
    product[inputNumber].addQuantity(inputQuantity);
  }

  printf("ваш чек\n");
  printf("название цена количество сумма \n");
  for (int i; i < 6; i++) {
    if (product[i].quantity != 0) {
      std::cout<<product[i].name<<"   "<<product[i].price<<"   "<<product[i].quantity<<"   "<<product[i].localSumm()<<"\n";
      totalSumm += product[i].localSumm(); 
    }
  }
  printf("Итог: %.1f", totalSumm);
  return 0;
}
