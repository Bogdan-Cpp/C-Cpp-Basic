//fisa de exercitiu
#include <iostream>
#include <vector>

int main(){
    std::vector<int> lista;
    int x = 15;
    int total = 1;
    int rez = 0;
    for(int i = 1; i <= x; i++){
       total *= i;
    }
    
    while(total % 10 == 0){
      rez = total % 10;
      lista.push_back(rez);
      total /= 10;
    }
    for(int elem : lista){
      std::cout << elem << " ";
    }
  system("pause");
  return 0;
}
