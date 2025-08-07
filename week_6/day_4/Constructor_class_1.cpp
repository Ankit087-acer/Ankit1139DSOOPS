#include <iostream>
using namespace std;
class student{
    public:
    int a;
    student(int a){
        std::cout<<"Constructor Called\n";
        std::cout<<a;
    }   
};
int main(){
    student s1(5);
}