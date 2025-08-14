#include <iostream>
using namespace std;
class Device{
public:
 void deviceinfo(){
    cout<<"This is a device."<<endl;
 }
};
class Computer:public Device{
    public:
    void computerinfo(){
        cout<<"This is a computer."<<endl;
    }
};
class Laptop:public Computer{
    public:
    void laptopinfo(){
        cout<<"This is a laptop."<<endl;
    }
};
int main(){
    Laptop l;
    l.deviceinfo();
    l.computerinfo();
    l.laptopinfo();
    
}