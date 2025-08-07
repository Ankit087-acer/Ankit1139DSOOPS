#include <iostream>
using namespace std;
class Example{
    private:
    const int value;
    int& ref;
    public:
    Example(int v,int& r):value(v),ref(r){
        std::cout<<"Const  value: "<<value<<endl<<"Reference Value: "<<ref;
    }
};
int main(){
    int num=10;
    Example ex(5,num);
}