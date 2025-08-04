#include <iostream>
using namespace std;
namespace Physics{
    float gravity(){
        return 9.8;
    }
}
int main(){
    std::cout<<Physics::gravity();
    
}