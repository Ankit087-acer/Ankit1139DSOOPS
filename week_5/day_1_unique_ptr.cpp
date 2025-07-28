#include <iostream>
#include <memory>
int main(){
    std::unique_ptr<int>p1(new int(42));
    std::cout<<"Number: "<<*p1<<std::endl;
    return 0;
}