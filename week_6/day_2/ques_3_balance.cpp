#include <iostream>
using namespace std;
class Wallet{
   int balance;
   public:
   Wallet(int balance){
    this->balance=balance;
   }
   int setBalance(int balance){
     this->balance=balance;
   }
   int getBalance(){
    return balance;
   }
};
int main(){
    Wallet w(500);
    w.setBalance(500);
    std::cout<<w.getBalance()<<std::endl;
    return 0;
}