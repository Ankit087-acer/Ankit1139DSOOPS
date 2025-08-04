#include <iostream>
using namespace std;
namespace Lib1{
    int calculate(int a,int b){
        return a+b;
    }
}
namespace Lib2{
    int calculate(int a,int b){
        return a-b;
    }
}
int main(){
    int a=7,b=8;
    std::cout<<Lib1::calculate(a,b)<<endl;
    std::cout<<Lib2::calculate(a,b)<<endl; 
}