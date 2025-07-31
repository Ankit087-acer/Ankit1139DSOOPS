#include <iostream>
#include <functional>
int main(){
    int multiplier = 10;
auto scale = [multiplier](int x) { return x * multiplier; };
std::cout << scale(5) << std::endl; // Output: 50
}