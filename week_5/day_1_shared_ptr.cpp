#include <iostream>
#include <memory>
int main(){
    std::shared_ptr<int>p1(new int(99));
    std::shared_ptr<int>p2=p1;
    std::cout<<"p1: "<<*p1<< " , p2: " <<*p2<<std::endl;
    std::cout<<"Count: "<<p1.use_count()<<std::endl;
    return 0;
}