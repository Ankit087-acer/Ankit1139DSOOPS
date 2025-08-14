#include <iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"Hello from class A"<<endl;
    }
};
class B: virtual public A{};
class c:virtual public A{};
class D:public B,public c{};
int main(){
    D obj;
    obj.show();
}