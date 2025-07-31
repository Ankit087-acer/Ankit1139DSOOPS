#include <iostream>
#include <functional>
int main(){
    int count = 0;
auto inc = [&]() {
count++; 
};
inc();
std::cout<<count;
} 