#include <iostream>
#include <functional>
int main(){int x = 10, y = 20, z = 30;
auto func = [x, &y, &z]()mutable {
x *= 2; 
y *= 2; 
z *= 2; 
};
func();
std::cout << x << ", " << y << ", " << z << std::endl;
}
