#include <iostream>
#include <functional>
void runTwice(std::function<void()> func) {
func();
func();
}
int main() {
auto greet = []() { std::cout << "Hi!\n"; };
runTwice(greet);
return 0;
}