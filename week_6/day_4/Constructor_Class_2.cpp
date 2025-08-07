#include <iostream>
using namespace std;
class ConstructorClass{
public:
int value;
ConstructorClass(int val){
    value=val;
    cout<<value<<endl;

}
void display(){
    cout<<value<<endl;
}
};
int main(){
    ConstructorClass obj(10);
    obj.display();

}