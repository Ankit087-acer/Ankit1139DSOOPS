#include <iostream>
using namespace std;
namespace val_1{
    int val(int a,int b){
        return a+b;
    }
}

int main(){
    int a=5,b=7;
    std::cout<<val_1::val(a,b);
    return 0;
}