#include <iostream>
using namespace std;
class A{
 int val;
    public:
    A():val(0){}
    int getVal (int val) const{
        int a=5;
       return a;
    }
};
int main(){
    const A a;
    cout<<a.getVal(5);
    return 0;
}