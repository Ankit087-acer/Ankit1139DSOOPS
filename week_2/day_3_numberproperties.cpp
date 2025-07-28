#include <iostream>
using namespace std;
class NumberProperty{
public:
int number;
void Even_Checker(int n){
    if(n%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}
void Poistive_Checker(int n){
    if(n>0){
        cout<<"Poistive"<<endl;
    }
    else if(n<0){
        cout<<"Negative"<<endl;
    }
    else{
        cout<<"Zero"<<endl;
    }
}
void Digit_Checker(int n){
    if(abs(n>=0 && n<=9)){
        cout<<"Single Digit"<<endl;
    }
    else if(abs(n>=10 && n<=99)){
        cout<<"Double Digit"<<endl;
    }
    
    else{
        cout<<"More than Double digit"<<endl;
    }
}
};
int main(){
  NumberProperty x;
  cin>>x.number;
  x.Even_Checker(x.number);
  x.Poistive_Checker(x.number);
  x.Digit_Checker(x.number);
  return 0;
}