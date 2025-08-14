#include <iostream>
using namespace std;
class Base{
    public:
    int pu;
    protected:
    int pr;
public:
Base(int pub,int pro){
   pu=pub;
   pr=pro;
}
};

class Derived:public Base{
    public:
    Derived(int pu,int pr):Base(pu,pr){}
    void show(){
        cout<<pu<<endl;
        cout<<pr<<endl;
    }
};
int main(){
    Derived d(100,200);
    cout<<d.pu<<endl;
    d.show();
}