#include <iostream>
using namespace std;
class simplecalculator{
public:
  int a,b;
  char c;
  void calculator(int a,int b,char c){
    switch(a,b, c){
        case '+':cout<<"Addition: "<<a+b<<endl;
        break;
        case '-':cout<<"Subtraction: "<<a-b<<endl;
        break;
        case '*':cout<<"Product: "<<a*b<<endl;
        break;
        case '/':if(b==0){
            cout<<"Error"<<endl;
        }
        else{
            cout<<"Division: "<<a/b<<endl;
        }
        break;
        default:cout<<"Error"<<endl;
    }
  }

};
int main(){
  simplecalculator s;
  cout<<"Enter the 1st Value: ";
  cin>>s.a;
  cout<<"Enter the 2nd Value: ";
  cin>>s.b;
  cout<<"Enter the operator to perform: ";
  cin>>s.c;
  s.calculator(s.a,s.b,s.c);
}