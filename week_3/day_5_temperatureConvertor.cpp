#include <iostream>
#include <string>
using namespace std;
class TemperatureConvertor{
public:
string userChoice;
  float c,k,f,temp;
  void Celsius(float c,string userChoice){
    if(userChoice=="Fahrenheit"){
        float temp=(c*(9.0/5.0))+32;
        cout<<"Fahrenheit: "<<temp<<endl;
    }
    else if(userChoice=="Kelvin"){
         float temp=c+273.15;
         cout<<"Kelvin: "<<temp<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
    }
  }
  void Fahrenheit(float f,string userChoice){
    if(userChoice=="Celsius"){
        float temp=((5.0/9.0))*(f-32);
        cout<<"Fahrenheit: "<<temp<<endl;
    }
    else if(userChoice=="Kelvin"){
         float temp=((5.0/9.0))*(f-32)+273.15;
         cout<<"Kelvin: "<<temp<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
    }
  }
   void Kelvin(float k,string userChoice){
    if(userChoice=="Celsius"){
       float temp=k-273.15;
        cout<<"Celsius: "<<temp<<endl;
    }
    else if(userChoice=="Fahrenheit"){
        float temp=((9.0/5.0)+32)*(k-273.15);
         cout<<"Kelvin: "<<temp<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
    }
  }
};
int main(){
    TemperatureConvertor t;
    string target;
    float value;
    cin>>target;
    cin>>value;
    cin>>t.userChoice;
    if(target=="celsius"){
       t.Celsius(value,t.userChoice);
    }
    else if(target=="Fahreheit"){
       t.Celsius(value,t.userChoice);
    }
    else{
        t.Kelvin(value,t.userChoice);
    }
return 0;
}